/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QGraphicsView *graphicsPreview;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *radioButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *radioButton_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *radioButton_3;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QLabel *label_9;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSlider *horizontalSlider_2;
    QLabel *label_10;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSlider *horizontalSlider_3;
    QLabel *label_11;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSlider *horizontalSlider_4;
    QLabel *label_12;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_16;
    QSlider *horizontalSlider_8;
    QLabel *label_17;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSlider *horizontalSlider_5;
    QLabel *label_13;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QSlider *horizontalSlider_6;
    QLabel *label_14;
    QWidget *widget7;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_20;
    QSlider *horizontalSlider_10;
    QLabel *label_21;
    QWidget *widget8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSlider *horizontalSlider_7;
    QLabel *label_15;
    QWidget *widget9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_18;
    QSlider *horizontalSlider_9;
    QLabel *label_19;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(948, 610);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"font-family:  centuru gothic;\n"
"}\n"
"\n"
"QGraphicsView {\n"
"background: rgba(0,0,0,0.7);\n"
"}\n"
"\n"
"QLabel {\n"
"min-width: 60;\n"
"background: rgba(0,0,0,0.7);\n"
"color: white;\n"
"}\n"
"\n"
"QLabel::disabled {\n"
"background: rgba(0,0,0,0.5);\n"
"color: rgb(195, 195, 195);\n"
"}\n"
"\n"
"\n"
"QPushButton {\n"
"background: rgba(0,0,0,0.7);\n"
"color: white;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"background: rgba(0,0,0,0.8);\n"
"color: white;\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton::disabled {\n"
"background: rgba(0,0,0,0.5);\n"
"color: rgb(195, 195, 195);\n"
"border: none;\n"
"}\n"
"\n"
"QPushButton::clicked {\n"
"background: rgba(0,0,0,1);\n"
"border: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: 1px solid  rgba(0,0,0,0.5);\n"
"background: rgba(0,0,0,0);\n"
"height: 20px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 0));\n"
"border"
                        ": none;\n"
"height: 20px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: rgba(0,0,0,0);\n"
"border: none;\n"
"height: 20px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"width: 8px;\n"
"background: url(:/Pixmaps/img/hndl.png);\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"background: rgba(0,0,0,0.2);\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: rgba(0,0,0,0);\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_10 = new QHBoxLayout(centralwidget);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        graphicsPreview = new QGraphicsView(centralwidget);
        graphicsPreview->setObjectName(QString::fromUtf8("graphicsPreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsPreview->sizePolicy().hasHeightForWidth());
        graphicsPreview->setSizePolicy(sizePolicy1);
        graphicsPreview->setMinimumSize(QSize(400, 400));
        graphicsPreview->setMaximumSize(QSize(400, 400));
        graphicsPreview->setAutoFillBackground(true);
        graphicsPreview->setStyleSheet(QString::fromUtf8(""));
        graphicsPreview->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsPreview->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_9->addWidget(graphicsPreview);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        radioButton = new QPushButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setMinimumSize(QSize(85, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Stencil"));
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        radioButton->setFont(font);
        radioButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 22pt \"Stencil\";\n"
"background: rgba(0,0,0,0.5);\n"
"min-width: 85px;\n"
"height: 36px;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"background: rgba(0,0,0,0.9);\n"
"color: white;\n"
"border: none;\n"
"}"));
        radioButton->setCheckable(true);
        radioButton->setAutoExclusive(true);

        horizontalLayout_8->addWidget(radioButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        radioButton_2 = new QPushButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setMinimumSize(QSize(90, 0));
        radioButton_2->setFont(font);
        radioButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 22pt \"Stencil\";\n"
"background: rgba(0,0,0,0.5);\n"
"width: 155px;\n"
"height: 36px;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"background: rgba(0,0,0,0.9);\n"
"color: white;\n"
"border: none;\n"
"}"));
        radioButton_2->setCheckable(true);
        radioButton_2->setAutoExclusive(true);

        horizontalLayout_8->addWidget(radioButton_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        radioButton_3 = new QPushButton(centralwidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setMinimumSize(QSize(90, 0));
        radioButton_3->setFont(font);
        radioButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 22pt \"Stencil\";\n"
"background: rgba(0,0,0,0.5);\n"
"width: 145px;\n"
"height: 36px;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"background: rgba(0,0,0,0.9);\n"
"color: white;\n"
"border: none;\n"
"}"));
        radioButton_3->setCheckable(true);
        radioButton_3->setAutoExclusive(true);

        horizontalLayout_8->addWidget(radioButton_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::ArrowCursor));
        horizontalSlider->setMouseTracking(false);
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(50);
        horizontalSlider->setValue(16);
        horizontalSlider->setSliderPosition(16);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);
        horizontalSlider->setTickInterval(1);

        horizontalLayout->addWidget(horizontalSlider);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setEnabled(true);
        label_9->setMinimumSize(QSize(60, 0));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_9);


        verticalLayout->addWidget(widget);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(60, 0));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        horizontalSlider_2 = new QSlider(widget1);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(30);
        horizontalSlider_2->setValue(13);
        horizontalSlider_2->setSliderPosition(13);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_2->setTickInterval(10);

        horizontalLayout_2->addWidget(horizontalSlider_2);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(60, 0));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_10);


        verticalLayout->addWidget(widget1);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(60, 0));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        horizontalSlider_3 = new QSlider(widget2);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMouseTracking(false);
        horizontalSlider_3->setTabletTracking(false);
        horizontalSlider_3->setFocusPolicy(Qt::NoFocus);
        horizontalSlider_3->setAcceptDrops(true);
        horizontalSlider_3->setMinimum(0);
        horizontalSlider_3->setMaximum(5000);
        horizontalSlider_3->setSliderPosition(1200);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_3->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_3->setTickInterval(500);

        horizontalLayout_3->addWidget(horizontalSlider_3);

        label_11 = new QLabel(widget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(60, 0));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_11);


        verticalLayout->addWidget(widget2);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        sizePolicy.setHeightForWidth(widget3->sizePolicy().hasHeightForWidth());
        widget3->setSizePolicy(sizePolicy);
        widget3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"background-fill: rgba(0, 0, 0, 200);\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(60, 0));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        horizontalSlider_4 = new QSlider(widget3);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setMinimum(1);
        horizontalSlider_4->setSliderPosition(12);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider_4->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_4->setTickInterval(10);

        horizontalLayout_4->addWidget(horizontalSlider_4);

        label_12 = new QLabel(widget3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(60, 0));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_12);


        verticalLayout->addWidget(widget3);

        widget4 = new QWidget(centralwidget);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        horizontalLayout_11 = new QHBoxLayout(widget4);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_16 = new QLabel(widget4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy2.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy2);
        label_16->setMinimumSize(QSize(60, 0));
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_16);

        horizontalSlider_8 = new QSlider(widget4);
        horizontalSlider_8->setObjectName(QString::fromUtf8("horizontalSlider_8"));
        horizontalSlider_8->setAcceptDrops(true);
        horizontalSlider_8->setMinimum(1);
        horizontalSlider_8->setSliderPosition(12);
        horizontalSlider_8->setOrientation(Qt::Horizontal);
        horizontalSlider_8->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_8->setTickInterval(10);

        horizontalLayout_11->addWidget(horizontalSlider_8);

        label_17 = new QLabel(widget4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(60, 0));
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_17);


        verticalLayout->addWidget(widget4);

        widget5 = new QWidget(centralwidget);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        horizontalLayout_5 = new QHBoxLayout(widget5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(widget5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(60, 0));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        horizontalSlider_5 = new QSlider(widget5);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setMinimum(1);
        horizontalSlider_5->setMaximum(100);
        horizontalSlider_5->setValue(13);
        horizontalSlider_5->setSliderPosition(13);
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        horizontalSlider_5->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_5->setTickInterval(10);

        horizontalLayout_5->addWidget(horizontalSlider_5);

        label_13 = new QLabel(widget5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(60, 0));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_13);


        verticalLayout->addWidget(widget5);

        widget6 = new QWidget(centralwidget);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        horizontalLayout_6 = new QHBoxLayout(widget6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(widget6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(60, 0));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_7);

        horizontalSlider_6 = new QSlider(widget6);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setMinimum(1);
        horizontalSlider_6->setMaximum(100);
        horizontalSlider_6->setSliderPosition(100);
        horizontalSlider_6->setOrientation(Qt::Horizontal);
        horizontalSlider_6->setInvertedAppearance(true);
        horizontalSlider_6->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_6->setTickInterval(10);

        horizontalLayout_6->addWidget(horizontalSlider_6);

        label_14 = new QLabel(widget6);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(60, 0));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_14);


        verticalLayout->addWidget(widget6);

        widget7 = new QWidget(centralwidget);
        widget7->setObjectName(QString::fromUtf8("widget7"));
        horizontalLayout_13 = new QHBoxLayout(widget7);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_20 = new QLabel(widget7);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy2.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy2);
        label_20->setMinimumSize(QSize(60, 0));
        label_20->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_20);

        horizontalSlider_10 = new QSlider(widget7);
        horizontalSlider_10->setObjectName(QString::fromUtf8("horizontalSlider_10"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("centuru gothic"));
        font1.setKerning(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        horizontalSlider_10->setFont(font1);
        horizontalSlider_10->setLayoutDirection(Qt::LeftToRight);
        horizontalSlider_10->setAutoFillBackground(false);
        horizontalSlider_10->setInputMethodHints(Qt::ImhNone);
        horizontalSlider_10->setMinimum(1);
        horizontalSlider_10->setMaximum(50);
        horizontalSlider_10->setSliderPosition(30);
        horizontalSlider_10->setOrientation(Qt::Horizontal);
        horizontalSlider_10->setInvertedAppearance(true);
        horizontalSlider_10->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_10->setTickInterval(7);

        horizontalLayout_13->addWidget(horizontalSlider_10);

        label_21 = new QLabel(widget7);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(60, 0));
        label_21->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_21);


        verticalLayout->addWidget(widget7);

        widget8 = new QWidget(centralwidget);
        widget8->setObjectName(QString::fromUtf8("widget8"));
        horizontalLayout_7 = new QHBoxLayout(widget8);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(widget8);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        label_8->setMinimumSize(QSize(60, 0));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_8);

        horizontalSlider_7 = new QSlider(widget8);
        horizontalSlider_7->setObjectName(QString::fromUtf8("horizontalSlider_7"));
        horizontalSlider_7->setEnabled(false);
        horizontalSlider_7->setMinimum(150);
        horizontalSlider_7->setMaximum(615);
        horizontalSlider_7->setSliderPosition(300);
        horizontalSlider_7->setOrientation(Qt::Horizontal);
        horizontalSlider_7->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_7->setTickInterval(70);

        horizontalLayout_7->addWidget(horizontalSlider_7);

        label_15 = new QLabel(widget8);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setEnabled(false);
        label_15->setMinimumSize(QSize(60, 0));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_15);


        verticalLayout->addWidget(widget8);

        widget9 = new QWidget(centralwidget);
        widget9->setObjectName(QString::fromUtf8("widget9"));
        horizontalLayout_12 = new QHBoxLayout(widget9);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_18 = new QLabel(widget9);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setEnabled(false);
        sizePolicy3.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy3);
        label_18->setMinimumSize(QSize(60, 0));
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_18);

        horizontalSlider_9 = new QSlider(widget9);
        horizontalSlider_9->setObjectName(QString::fromUtf8("horizontalSlider_9"));
        horizontalSlider_9->setEnabled(false);
        horizontalSlider_9->setMinimum(1);
        horizontalSlider_9->setMaximum(250);
        horizontalSlider_9->setSliderPosition(130);
        horizontalSlider_9->setOrientation(Qt::Horizontal);
        horizontalSlider_9->setInvertedAppearance(true);
        horizontalSlider_9->setTickPosition(QSlider::TicksBelow);
        horizontalSlider_9->setTickInterval(50);

        horizontalLayout_12->addWidget(horizontalSlider_9);

        label_19 = new QLabel(widget9);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setEnabled(false);
        label_19->setMinimumSize(QSize(60, 0));
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_19);


        verticalLayout->addWidget(widget9);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        pushButton->setMinimumSize(QSize(0, 30));
        pushButton->setSizeIncrement(QSize(0, 170));

        verticalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_9->addLayout(verticalLayout_3);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 948, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "FULL", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "BETWEEN", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "BOTTOM", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "X count", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Y count", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "13", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Speed", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "1200", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Mol Int", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Wall Int", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Masses", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "0.013", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Accuracy", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "0.001", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Rad step", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Distance", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "300", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Width", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "130", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
