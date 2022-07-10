#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sim.h"
#include <QGraphicsPixmapItem>
#include <cmath>
#include <ctime>

double Nx = 1;
double Ny = 0;

int posY();
int posX();
double WallForce(int X0, double x, double Vx);

QString str;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    srand(time(0));
    ui->setupUi(this);
    QPixmap bkgnd(":/Pixmaps/img/bgbg.jpg");
    //bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    setWindowTitle(tr("Lennard-Jones Simulation v3.1.13"));
    scene1 = new QGraphicsScene();
    ui->graphicsPreview->setScene(scene1);
    scene1->setSceneRect(0, 0, 400, 400);
    ui->graphicsPreview->setRenderHint(QPainter::Antialiasing);
    ui->graphicsPreview->setCacheMode(QGraphicsView::CacheNone);
    PreviewON = 1;
    pix = QPixmap(":/Pixmaps/img/Ball30w.png");

    QWidget::connect(ui->horizontalSlider,   SIGNAL(valueChanged(int)), this, SLOT(SMolCountX(int)));
    QWidget::connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)), this, SLOT(SMolCountY(int)));
    QWidget::connect(ui->horizontalSlider_3, SIGNAL(valueChanged(int)), this, SLOT(SSpeed0(int)));
    QWidget::connect(ui->horizontalSlider_4, SIGNAL(valueChanged(int)), this, SLOT(SForce(int)));
    QWidget::connect(ui->horizontalSlider_8, SIGNAL(valueChanged(int)), this, SLOT(SForceW(int)));
    QWidget::connect(ui->horizontalSlider_5, SIGNAL(valueChanged(int)), this, SLOT(Sm(int)));
    QWidget::connect(ui->horizontalSlider_6, SIGNAL(valueChanged(int)), this, SLOT(Sh(int)));
    QWidget::connect(ui->horizontalSlider_10, SIGNAL(valueChanged(int)), this, SLOT(SDr(int)));
    QWidget::connect(ui->horizontalSlider_7, SIGNAL(valueChanged(int)), this, SLOT(SRr(int)));
    QWidget::connect(ui->horizontalSlider_9, SIGNAL(valueChanged(int)), this, SLOT(SRry(int)));

    for (int i = 0; i < (4); i++) {
            Coord[i][1] = posY();
            Coord[i][0] = posX();
            double Sp = 500;
            SpeedAngle = (1 + rand() % (3141 * 2 + 1));
            Sys[i][0] = Sp * cos(SpeedAngle / 1000);
            Sys[i][1] = Sp * sin(SpeedAngle / 1000);
            Sys[i][2] = Coord[i][0] * 2;
            Sys[i][3] = Coord[i][1] * 2;
            scene1->addPixmap(pix)->setPos(QPointF(Coord[i][0], Coord[i][1]));
        }
    TrialTimer = new QTimer(this);
    connect(TrialTimer, &QTimer::timeout, this, &MainWindow::onTimeout);
    TrialTimer->start(0);
}

void MainWindow::onTimeout()
{
    if (PreviewON) {
        for (int i = 0; i < 4; i++) {
                Sys[i][0] = Sys[i][0];
                Sys[i][1] = Sys[i][1];
                Sys[i][2] = Sys[i][2] + Sys[i][0] * 0.001;
                Sys[i][3] = Sys[i][3] + Sys[i][1] * 0.001;
                Coord[i][0] = ceil(Sys[i][2]) / 2;
                Coord[i][1] = ceil(Sys[i][3]) / 2;
                Sys[i][0] = WallForce(400, Coord[i][0], Sys[i][0]);
                Sys[i][1] = WallForce(400, Coord[i][1], Sys[i][1]);
            }
            scene1->clear();
            scene1->addLine(Coord[1][0] + 15, Coord[1][1] + 15, Coord[2][0] + 15, Coord[2][1] + 15);
            scene1->addLine(Coord[1][0] + 15, Coord[1][1] + 15, Coord[3][0] + 15, Coord[3][1] + 15);
            scene1->addLine(Coord[1][0] + 15, Coord[1][1] + 15, Coord[0][0] + 15, Coord[0][1] + 15);
            scene1->addLine(Coord[2][0] + 15, Coord[2][1] + 15, Coord[3][0] + 15, Coord[3][1] + 15);
            scene1->addLine(Coord[0][0] + 15, Coord[0][1] + 15, Coord[2][0] + 15, Coord[2][1] + 15);
            scene1->addLine(Coord[0][0] + 15, Coord[0][1] + 15, Coord[3][0] + 15, Coord[3][1] + 15);
            for (int i = 0; i < 4; i++) {
                scene1->addPixmap(pix)->setPos(QPointF(Coord[i][0], Coord[i][1]));
            }
    }
}

void MainWindow::on_radioButton_pressed()
{
    ui->pushButton->setEnabled(true);
    ui->horizontalSlider_8->setEnabled(!true);
    ui->label_16->setEnabled(!true);
    ui->label_17->setEnabled(!true);
    ui->horizontalSlider_10->setEnabled(!true);
    ui->label_20->setEnabled(!true);
    ui->label_21->setEnabled(!true);
    ui->horizontalSlider_7->setEnabled(!true);
    ui->label_8->setEnabled(!true);
    ui->label_15->setEnabled(!true);
    ui->horizontalSlider_9->setEnabled(!true);
    ui->label_18->setEnabled(!true);
    ui->label_19->setEnabled(!true);
    ui->label_10->setEnabled(true);
    ui->label_3->setEnabled(true);
    ui->horizontalSlider->setMaximum(50);
    ui->horizontalSlider->setValue(16);
    ui->horizontalSlider_2->setEnabled(true);
    ui->horizontalSlider_2->setValue(13);
    ui->horizontalSlider_3->setValue(1200);
    ui->horizontalSlider_7->setMinimum(150);
    ui->horizontalSlider_7->setValue(300);
    SimulationType = 1;
}

void MainWindow::on_radioButton_2_pressed()
{
    ui->pushButton->setEnabled(true);
    ui->horizontalSlider_8->setEnabled(true);
    ui->label_16->setEnabled(true);
    ui->label_17->setEnabled(true);
    ui->horizontalSlider_10->setEnabled(!true);
    ui->label_20->setEnabled(!true);
    ui->label_21->setEnabled(!true);
    ui->horizontalSlider_7->setEnabled(true);
    ui->label_8->setEnabled(true);
    ui->label_15->setEnabled(true);
    ui->horizontalSlider_9->setEnabled(true);
    ui->label_18->setEnabled(true);
    ui->label_19->setEnabled(true);
    ui->label_10->setEnabled(true);
    ui->label_3->setEnabled(true);
    SimulationType = 2;
    ui->horizontalSlider->setMaximum(50);
    ui->horizontalSlider->setValue(15);
    ui->horizontalSlider_2->setEnabled(true);
    ui->horizontalSlider_2->setValue(17);
    ui->horizontalSlider_3->setValue(0);
    ui->horizontalSlider_7->setMinimum(150);
    ui->horizontalSlider_7->setValue(205);
}

void MainWindow::on_radioButton_3_pressed()
{
    ui->pushButton->setEnabled(true);
    ui->horizontalSlider_10->setEnabled(true);
    ui->label_20->setEnabled(true);
    ui->label_21->setEnabled(true);
    ui->horizontalSlider_8->setEnabled(true);
    ui->label_16->setEnabled(true);
    ui->label_17->setEnabled(true);
    ui->horizontalSlider_7->setEnabled(true);
    ui->label_8->setEnabled(true);
    ui->label_15->setEnabled(true);
    ui->horizontalSlider_9->setEnabled(!true);
    ui->label_18->setEnabled(!true);
    ui->label_19->setEnabled(!true);
    ui->label_10->setEnabled(!true);
    ui->label_3->setEnabled(!true);
    ui->horizontalSlider->setMaximum(61);
    ui->horizontalSlider->setValue(61);
    ui->horizontalSlider_2->setEnabled(!true);
    ui->horizontalSlider_3->setValue(1200);
    ui->horizontalSlider_7->setMinimum(1);
    ui->horizontalSlider_7->setValue(30);
    ui->horizontalSlider_4->setValue(22);
    ui->horizontalSlider_8->setValue(33);
    SimulationType = 3;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    PreviewON = 0;
    TrialTimer->stop();
    Transfer();
    Sim *window = new Sim(this);
    window->setWindowFlags(Qt::Dialog);
    window->setAttribute(Qt::WA_DeleteOnClose);
    window->exec();
    PreviewON = 1;
    TrialTimer->start(0);
}

void MainWindow::SMolCountX(int x)
{
    MolCountX = x;
    ui->label_9->setText(str.setNum(MolCountX));
    if (SimulationType == 2)
    ui->horizontalSlider_7->setMinimum(int(MolCountX * (12)));
}

void MainWindow::SMolCountY(int x)
{
    MolCountY = x;
    ui->label_10->setText(str.setNum(MolCountY));
}

void MainWindow::Sh(int x)
{
    h = double(x) / 100000;
    ui->label_14->setText(str.setNum(h));
}

void MainWindow::SSpeed0(int x)
{
    Speed0 = x;
    ui->label_11->setText(str.setNum(Speed0));
}

void MainWindow::Sm(int x)
{
    m = double(x) / 1000;
    ui->label_13->setText(str.setNum(m));
}

void MainWindow::SRr(int x)
{
    Rr = x;
    ui->label_15->setText(str.setNum(Rr));
}

void MainWindow::SForce(int x)
{
    Force = x;
    ui->label_12->setText(str.setNum(Force));
}

void MainWindow::SForceW(int x)
{
    ForceW = x;
    ui->label_17->setText(str.setNum(ForceW));
}

void MainWindow::SRry(int x)
{
    Rry = x;
    ui->label_19->setText(str.setNum(Rry));
}

void MainWindow::SDr(int x)
{
    Dr = x;
    ui->label_21->setText(str.setNum(Dr));
}

void MainWindow::Transfer()
{
    Sim s;
    s.Recievement(MolCountX, MolCountY, h, m, Speed0, Rr, Force, SimulationType, Rry, ForceW, Dr);
}

double WallForce(int X0, double x, double Vx) {
    double XX;
    double X = X0;
    if (((X - x) < 31 || x < 1) && (Vx / abs(Vx) != (X / 2 - x) / abs(X / 2 - x))) {
        XX = - Vx;
    } else {
        XX = Vx;
    }
    return XX;
}

int posX() {
    int XX;
    int R = floor(400 / 2);
    if (R * Nx <= 400) {
        XX = R * (Nx) - 20 - (1 + (rand() % (R - 2 * 20)));
        Nx = Nx + 1;
    } else {
        Nx = 1;
        XX = R * (Nx) - 20 - (1 + rand() % (R - 2 * 20));
    }
    return XX;
}

int posY() {
    int XX = 0;
    if (Nx == 1) {
        Ny = Ny + 1;
        Nx = Nx + 1;
    }
    int R = floor(400 / 2);
    if (R * Ny <= 400) {
        XX = R * (Ny - 1) + 20 + (1 + rand() % (1 + R - 2 * 20));
    }
    return XX;
}
