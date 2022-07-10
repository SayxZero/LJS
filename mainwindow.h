#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QPixmap>
#include <QSpinBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int MolCountX{16};
    int MolCountY{13};
    double h{0.001};
    long int Speed0{1200};
    double m{0.013};
    int SimulationType{1};
    int Rr{300};
    int Rry{130};
    int Force{12};
    int ForceW{12};
    int Dr{30};

private slots:

    void onTimeout();

    void on_radioButton_pressed();

    void on_radioButton_2_pressed();

    void on_radioButton_3_pressed();

    void on_pushButton_clicked();

    void SMolCountX(int x);

    void SMolCountY(int x);

    void Sh(int x);

    void SSpeed0(int x);

    void Sm(int x);

    void SRr(int x);

    void SForce(int x);

    void SForceW(int x);

    void SRry(int x);

    void SDr(int x);

    void Transfer();

private:
    QTimer *TrialTimer;
    Ui::MainWindow *ui;
    QGraphicsScene *scene1;
    QPixmap pix;
    double SpeedAngle;
    bool PreviewON;
    double Sys[4][4];
    int Coord[4][2];
};
#endif // MAINWINDOW_H
