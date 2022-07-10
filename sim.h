#ifndef SIM_H
#define SIM_H

#include "mainwindow.h"
#include <QDialog>
#include <QGraphicsScene>
#include <QTimer>
#include <QPixmap>

namespace Ui {
class Sim;
}

class Sim : public QDialog
{
    Q_OBJECT

private slots:

    void SRr(int x);

    void onSimTimeout();

public:

    explicit Sim(QWidget *parent = nullptr);
    ~Sim();

public slots:

    void Recievement(int Mx, int My, double rh, double rm, int Sp, int rR, int Ff, int St, int ry, int Fw, int rDr);

private:

    Ui::Sim *ui;
    QTimer *SimTimer;
    QGraphicsScene *SimScene;
    QPixmap ball;
    double* SimSys1 = new double[1500];
    double* SimSys2 = new double[1500];
    double* SimSys3 = new double[1500];
    double* SimSys4 = new double[1500];
    int *SimCoord1 = new int[1500];
    int *SimCoord2 = new int[1500];
    double ValtsXSum = 0;
    double ValtsYSum = 0;
    double* ValtsALL = (double*)malloc(1500 * 1500 * sizeof(double));

};

#endif // SIM_H
