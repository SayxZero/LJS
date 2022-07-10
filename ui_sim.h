/********************************************************************************
** Form generated from reading UI file 'sim.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIM_H
#define UI_SIM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Sim
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QSlider *horizontalSlider;

    void setupUi(QDialog *Sim)
    {
        if (Sim->objectName().isEmpty())
            Sim->setObjectName(QString::fromUtf8("Sim"));
        Sim->resize(1268, 718);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Sim->sizePolicy().hasHeightForWidth());
        Sim->setSizePolicy(sizePolicy);
        Sim->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(Sim);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicsView = new QGraphicsView(Sim);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setMinimumSize(QSize(1230, 670));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(graphicsView);

        horizontalSlider = new QSlider(Sim);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(600);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);


        retranslateUi(Sim);

        QMetaObject::connectSlotsByName(Sim);
    } // setupUi

    void retranslateUi(QDialog *Sim)
    {
        Sim->setWindowTitle(QCoreApplication::translate("Sim", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sim: public Ui_Sim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIM_H
