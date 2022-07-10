#include "sim.h"
#include "ui_sim.h"
#include <QGraphicsItem>
#include <cmath>
#include <ctime>

double Rmin = 70;
double Umin = 50;
double SimNx = 1;
double SimNy = 0;
int grid = 13;
double Maxv[266];
int kik = 0;
int Xmax = 1230;
int Ymax = 670;

QPen pen;

double* Ss;
int Sc = 1;
int Va;

int MolCountX;
int MolCountY;
int MolCount;
double h;
int Speed0;
double m;
int SimulationType;
int Rr;
int Rry;
int Force;
double RminW = 50;
double UminW = 40;
int ForceW = 6;
int Dr = 30;
//QPen pen;


//--------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------//

double mypow(double x, int p);

double Distance(double x1, double y1, double x2, double y2);

double ForceOfValts(double r);

double cosFV(double x1, double y1, double x2, double y2);

double sinFV(double x1,double y1,double x2,double y2);

double ValtsX(double x1, double y1, double x2, double y2);

double ValtsXW(double x1, double y1, double x2, double y2);

double ValtsY(double x1, double y1, double x2, double y2);

double ValtsYW(double x1, double y1, double x2, double y2);

double SimWallForce(int X0, double x, double Vx);

void FullPosition(int &X, int &Y, int I);

void BetweenPosition(int &X, int &Y, int I);

void DropPosition(int &X, int &Y, int I);

double Maxwell();

double WallForceX(double x, double Vx);

double WallForceY(int X0, double x, double Vx);

//--------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------//
//--------------------------------------------------------------------------------------------------------//

Sim::Sim(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sim)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/Pixmaps/img/bgbg.jpg");
    //bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    if (SimulationType == 1)
        ui->horizontalSlider->setEnabled(!true);
    srand(time(0));
    if (SimulationType != 3)
        MolCount = MolCountX * MolCountY;
    kik = 0;
    memset(ValtsALL, 0, sizeof(*ValtsALL));
    memset(SimSys1, 0, sizeof(*SimSys1));
    memset(SimSys2, 0, sizeof(*SimSys2));
    memset(SimSys3, 0, sizeof(*SimSys3));
    memset(SimSys4, 0, sizeof(*SimSys4));
    memset(SimCoord1, 0, sizeof(*SimCoord1));
    memset(SimCoord2, 0, sizeof(*SimCoord2));

    double BallSpeedAngle;
    QWidget::connect(ui->horizontalSlider, SIGNAL(sliderMoved(int)), this, SLOT(SRr(int)));
    ui->horizontalSlider->setValue(Rr);
    pen.setWidth(3);
    pen.setColor(qRgb(200, 200, 200));

    if (SimulationType == 1)
        setWindowTitle("Full Simulation");
    else if (SimulationType == 2)
        setWindowTitle("Between Simulation");
    else setWindowTitle("Bottom Simulation");

    SimScene = new QGraphicsScene();
    ui->graphicsView->setScene(SimScene);
    SimScene->setSceneRect(0, 0, Xmax, Ymax);
    ball = QPixmap(":/Pixmaps/img/Ball20w.png");
    //ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheNone);

    QString str;

    for (int i = 0; i < MolCount; i++) {
        if (SimulationType == 1)
            FullPosition(SimCoord1[i], SimCoord2[i], i);
        else if (SimulationType == 2)
            BetweenPosition(SimCoord1[i], SimCoord2[i], i);
        else DropPosition(SimCoord1[i], SimCoord2[i], i);
        double Sp;
        Sp = Maxwell();
        BallSpeedAngle = (1 + rand() % (3140 * 2 + 1));
        if (SimulationType == 3) {
            Sp = 0;
            SimSys1[i] = Sp * cos(BallSpeedAngle / 1000);
            SimSys2[i] = Speed0;
        } else {
            SimSys1[i] = Sp * cos(BallSpeedAngle / 1000);
            SimSys2[i] = Sp * sin(BallSpeedAngle / 1000);
        }
        SimSys3[i] = SimCoord1[i] * 2;
        SimSys4[i] = SimCoord2[i] * 2;
        SimScene->addPixmap(ball)->setPos(QPoint(SimCoord1[i] - 10, SimCoord2[i] - 10));
    }
    if (SimulationType == 2) {
        SimScene->addLine(Xmax / 2 - Rr, 0, Xmax / 2 - Rr, Ymax, pen);
        SimScene->addLine(Xmax / 2 + Rr, 0, Xmax / 2 + Rr, Ymax, pen);
    } else if (SimulationType == 3) {
        SimScene->addRect(0, Ymax - Rr, Xmax, Ymax - Rr, pen);
    }
    onSimTimeout();
}

void Sim::SRr(int x)
{
    Rr = x;
}

void Sim::onSimTimeout()
{
    for (int i = 0; i < MolCount; i++) {
        ValtsXSum = 0;
        for (int j = 0; j < MolCount; j++) {
            if (j != i) {
                if (i < j) {
                    int k = (i) * MolCount + j;
                    ValtsALL[k] = ValtsX(SimSys3[i], SimSys4[i], SimSys3[j], SimSys4[j]);
                    ValtsXSum = ValtsXSum + ValtsALL[k];
                }
                else if (i > j) {
                    int k = (j) * MolCount + i;
                    ValtsXSum = ValtsXSum - ValtsALL[k];
                }
            }
        }
        ValtsYSum = 0;
        for (int j = 0; j < MolCount; j++) {
            if (j != i) {
                if (i > j) {
                    int k = (i) * MolCount + j;
                    ValtsALL[k] = ValtsY(SimSys3[i], SimSys4[i], SimSys3[j], SimSys4[j]);
                    ValtsYSum = ValtsYSum + ValtsALL[k];
                }
                else if (i < j) {
                    int k = (j) * MolCount + i;
                    ValtsYSum = ValtsYSum - ValtsALL[k];
                }
            }
        }
        if (SimulationType == 2) {
            for (int j = 0; j < 51; j++) {
                ValtsXSum = ValtsXSum + ValtsXW(SimSys3[i], SimSys4[i], (Xmax / 2 - Rr) * 2, SimSys4[i] + Ymax * (0.5 - 0.02 * j));
                ValtsXSum = ValtsXSum + ValtsXW(SimSys3[i], SimSys4[i], (Xmax / 2 + Rr) * 2, SimSys4[i] + Ymax * (0.5 - 0.02 * j));
            }
        } else if (SimulationType == 3) {
            for (int j = 1; j < 51; j++) {
                ValtsYSum = ValtsYSum + ValtsYW(SimSys3[i], SimSys4[i], SimSys3[i] + Xmax * (0.5 - 0.02 * j) * 2, (Ymax - Rr) * 2);
            }
        }
        SimSys1[i] = SimSys1[i] + ValtsXSum / m * h;
        SimSys2[i] = SimSys2[i] + ValtsYSum / m * h;
        SimSys3[i] = SimSys3[i] + SimSys1[i] * h + ValtsXSum / m * mypow(h, 2);
        SimSys4[i] = SimSys4[i] + SimSys2[i] * h + ValtsYSum / m * mypow(h, 2);
        SimCoord1[i] = ceil(SimSys3[i]) / 2;
        SimCoord2[i] = ceil(SimSys4[i]) / 2;
        if (SimulationType == 1) {
            SimSys1[i] = SimWallForce(Xmax, SimCoord1[i], SimSys1[i]);
            SimSys2[i] = SimWallForce(Ymax, SimCoord2[i], SimSys2[i]);
        } else if (SimulationType == 2) {
            SimSys1[i] = WallForceX(SimCoord1[i], SimSys1[i]);
            SimSys2[i] = SimWallForce(Ymax, SimCoord2[i], SimSys2[i]);
        } else {
            SimSys1[i] = SimWallForce(Xmax, SimCoord1[i], SimSys1[i]);
            SimSys2[i] = SimWallForce(Ymax - Rr, SimCoord2[i], SimSys2[i]);
        }
    }
    SimScene->clear();

    if (SimulationType == 2) {
        SimScene->addLine(Xmax / 2 - Rr, 0, Xmax / 2 - Rr, Ymax, pen);
        SimScene->addLine(Xmax / 2 + Rr, 0, Xmax / 2 + Rr, Ymax, pen);
    } else if (SimulationType == 3) {
        SimScene->addLine(0, Ymax - Rr, Xmax, Ymax - Rr, pen);
    }
    for (int i = 0; i < MolCount; i++) {
        SimScene->addPixmap(ball)->setPos(QPoint(SimCoord1[i] - 10, SimCoord2[i] - 10));
    }
    memset(ValtsALL, 0, sizeof(*ValtsALL));
    QMetaObject::invokeMethod(this, "onSimTimeout", Qt::QueuedConnection);
}

Sim::~Sim()
{
    delete[] SimSys1;
    delete[] SimSys2;
    delete[] SimSys3;
    delete[] SimSys4;
    delete[] SimCoord1;
    delete[] SimCoord2;
    free(ValtsALL);
    delete ui;
}

void Sim::Recievement(int Mx, int My, double rh, double rm, int Sp, int rR, int Ff, int St, int ry, int Fw, int rDr)
{
    MolCountX = Mx;
    MolCountY = My;
    if (St == 3)
    MolCount = Mx;
    h = rh;
    Speed0 = Sp;
    m = rm;
    SimulationType = St;
    Rr = rR;
    Force = Ff;
    Rry = ry;
    ForceW = Fw;
    Dr = rDr;
}

double mypow(double x, int p) {
    double X = 1;
    for (int i = 0; i < p; i++)
        X = X * x;
    return X;
}

void FullPosition(int &X, int &Y, int I) {
    int Xx = floor(I / MolCountX);
    int YY = Xx * Ymax / MolCountY - 1;
    if (I == Xx * MolCountX)
        YY = YY - 1;
    if (I == Xx * MolCountX)
        Xx = Xx - 1;
    int XX = (I - Xx * MolCountX - 1) * Xmax / MolCountX;
    int AA = rand() % int(floor(Xmax / MolCountX - grid * 2));
    int BB = rand() % int(floor(Ymax / MolCountY - grid * 2));
    XX = XX + grid + (AA);
    YY = YY + grid + (BB);
    X = XX;
    Y = YY;
}

void BetweenPosition(int &X, int &Y, int I) {
    int Xx = floor(I / MolCountX);
    int YY = Rry + Xx * (Ymax - 2 * Rry) / MolCountY - 1;
    if (I == Xx * MolCountX)
        YY = YY - 1;
    if (I == Xx * MolCountX)
        Xx = Xx - 1;
    int XX = Xmax / 2 - Rr + 5 + (I - Xx * MolCountX - 1) * (2 * Rr - 10) / MolCountX;
    int AA = rand() % int(floor((2 * Rr) / MolCountX - grid * 2));
    int BB = rand() % int(floor((Ymax - 2 * Rry) / MolCountY - grid * 2));
    XX = XX + grid + (AA);
    YY = YY + grid + (BB);
    X = XX;
    Y = YY;
}


void DropPosition(int &X, int &Y, int I) {
    int XX = Xmax / 2;
    int YY = Ymax / 2 - 100;
    if ((I > 0) && (I < 7)) {
        X = XX + Dr * cos(3.142 * 2 / 6 * (I - 1));
        Y = YY + Dr * sin(3.142 * 2 / 6 * (I - 1));
    } else if (I > 6 && I < 19) {
        X = XX + 2 * Dr * cos(3.142 * 2 / 12 * (I - 7));
        Y = YY + 2 * Dr * sin(3.142 * 2 / 12 * (I - 7));
    } else if (I > 18 && I < 37) {
        X = XX + 3 * Dr * cos(3.142 * 2 / 18 * (I - 13));
        Y = YY + 3 * Dr * sin(3.142 * 2 / 18 * (I - 13));
    } else if (I > 36) {
        X = XX + 4 * Dr * cos(3.142 * 2 / 24 * (I - 19));
        Y = YY + 4 * Dr * sin(3.142 * 2 / 24 * (I - 19));
    } else {
        X = XX;
        Y = YY;
    }
}

double Distance(double x1, double y1, double x2, double y2) {                                           //Расстояние между молекулами
    double XX = sqrt(mypow(x2 - x1, 2) + mypow(y2 - y1, 2));
    return XX;
}

double ForceOfValts(double r) {
if (r < 15)
    r = 15;
double F = Force * Rmin * (mypow(Umin / r, 8) - mypow(Umin / r, 14));
return F;
}

double ForceOfValtsW(double r) {
double F = ForceW * RminW * (mypow(UminW / r, 6) - mypow(UminW / r, 12));
return F;
}

double cosFV(double x1, double y1, double x2, double y2) {                                              //cos угла наклона отр., соед. две точки
    double XX = ((x2 - x1) / Distance(x1, y1, x2, y2));
    return XX;
}

double sinFV(double x1,double y1,double x2,double y2) {                                                //cos угла наклона отр., соед. две точки
    double XX = ((y2 - y1) / Distance(x1, y1, x2, y2));
    return XX;
}

double ValtsX(double x1, double y1, double x2, double y2) {
    double XX = ForceOfValts(Distance(x1, y1, x2, y2)) * cosFV(x1, y1, x2, y2);
    return XX;
}

double ValtsXW(double x1, double y1, double x2, double y2) {
    double XX = ForceOfValtsW(Distance(x1, y1, x2, y2)) * cosFV(x1, y1, x2, y2);
    return XX;
}

double ValtsY(double x1, double y1, double x2, double y2) {
    double XX = ForceOfValts(Distance(x1, y1, x2, y2)) * sinFV(x1, y1, x2, y2);
    return XX;
}

double ValtsYW(double x1, double y1, double x2, double y2) {
    double XX = ForceOfValtsW(Distance(x1, y1, x2, y2)) * sinFV(x1, y1, x2, y2);
    return XX;
}

double SimWallForce(int X0, double x, double Vx) {
    double XX;
    double X = X0;
    if (((X - x) < 13 || x < 12) && (Vx / abs(Vx) != (X / 2 - x) / abs(X / 2 - x))) {
        XX = - Vx;
    } else {
        XX = Vx;
    }
    return XX;
}

double WallForceX(double x, double Vx) {
    double XX;
    double X = double(Xmax) / 2;
    if (((X + Rr - x) < 5 || x < X - Rr + 5) && (Vx / abs(Vx) != (X / 2 - x) / abs(X / 2 - x))) {
        XX = - Vx;
    } else {
        XX = Vx;
    }
    return XX;
}

double WallForceY(int X0, double x, double Vx) {
    double XX;
    double X = X0;
    if (((X - Rr - x) < 15 || x < 20) && (Vx / abs(Vx) != (X / 2 - x) / abs(X / 2 - x))) {
        XX = - Vx;
    } else {
        XX = Vx;
    }
    return XX;
}

double Maxwell() {
    double Speed00 = 700;
    if (kik == 0) {
        int kek = 0;
        float step = Speed00 * 3 / 70;
        for (int kk = 1; kk < 71; kk++) {
            float c = floor(20000 * mypow(kk * step, 2) / mypow(Speed00, 3) * exp(- mypow(kk * step, 2) / mypow(Speed00, 2)));
            for (int kkk = 1; kkk < c + 1; kkk++) {
                Maxv[kek + kkk] = kk * step * Speed0 / Speed00;
            }
            kek = kek + c;
            c = 0;
        }
        kik = 1;
    }
    int Random = rand() % 265;
    int XX = Maxv[Random];
    return XX;
}
