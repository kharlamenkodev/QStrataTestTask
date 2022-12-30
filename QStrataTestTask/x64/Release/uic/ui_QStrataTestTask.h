/********************************************************************************
** Form generated from reading UI file 'QStrataTestTask.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSTRATATESTTASK_H
#define UI_QSTRATATESTTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_QStrataTestTaskClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QCustomPlot *customPlotWIdget;
    QFrame *rightBar;
    QVBoxLayout *verticalLayout;
    QGroupBox *paramsGroupBox;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_2;
    QLabel *sampleLengthTitleLabel;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *minSampleLengthLabel;
    QSpacerItem *horizontalSpacer_3;
    QLabel *maxSampleLengthLabel;
    QHBoxLayout *horizontalLayout_7;
    QSlider *sampleLengthSlider;
    QLabel *fpsTitleLabel;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *minFpsLabel;
    QSpacerItem *horizontalSpacer_4;
    QLabel *maxFpsLabel;
    QHBoxLayout *horizontalLayout_9;
    QSlider *fpsSlider;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *startPushButton;
    QPushButton *pausePushButton;
    QPushButton *stopPushButton;

    void setupUi(QMainWindow *QStrataTestTaskClass)
    {
        if (QStrataTestTaskClass->objectName().isEmpty())
            QStrataTestTaskClass->setObjectName(QString::fromUtf8("QStrataTestTaskClass"));
        QStrataTestTaskClass->resize(926, 385);
        centralWidget = new QWidget(QStrataTestTaskClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        customPlotWIdget = new QCustomPlot(centralWidget);
        customPlotWIdget->setObjectName(QString::fromUtf8("customPlotWIdget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customPlotWIdget->sizePolicy().hasHeightForWidth());
        customPlotWIdget->setSizePolicy(sizePolicy);
        customPlotWIdget->setMinimumSize(QSize(0, 260));

        horizontalLayout_2->addWidget(customPlotWIdget);

        rightBar = new QFrame(centralWidget);
        rightBar->setObjectName(QString::fromUtf8("rightBar"));
        rightBar->setMinimumSize(QSize(220, 0));
        rightBar->setMaximumSize(QSize(220, 16777215));
        rightBar->setFrameShape(QFrame::StyledPanel);
        rightBar->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(rightBar);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        paramsGroupBox = new QGroupBox(rightBar);
        paramsGroupBox->setObjectName(QString::fromUtf8("paramsGroupBox"));
        paramsGroupBox->setMinimumSize(QSize(0, 0));
        paramsGroupBox->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setBold(false);
        paramsGroupBox->setFont(font);
        verticalLayout_4 = new QVBoxLayout(paramsGroupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        sampleLengthTitleLabel = new QLabel(paramsGroupBox);
        sampleLengthTitleLabel->setObjectName(QString::fromUtf8("sampleLengthTitleLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, sampleLengthTitleLabel);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        minSampleLengthLabel = new QLabel(paramsGroupBox);
        minSampleLengthLabel->setObjectName(QString::fromUtf8("minSampleLengthLabel"));

        horizontalLayout_6->addWidget(minSampleLengthLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        maxSampleLengthLabel = new QLabel(paramsGroupBox);
        maxSampleLengthLabel->setObjectName(QString::fromUtf8("maxSampleLengthLabel"));

        horizontalLayout_6->addWidget(maxSampleLengthLabel);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        sampleLengthSlider = new QSlider(paramsGroupBox);
        sampleLengthSlider->setObjectName(QString::fromUtf8("sampleLengthSlider"));
        sampleLengthSlider->setMinimum(100);
        sampleLengthSlider->setMaximum(1000);
        sampleLengthSlider->setSingleStep(40);
        sampleLengthSlider->setPageStep(150);
        sampleLengthSlider->setOrientation(Qt::Horizontal);
        sampleLengthSlider->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_7->addWidget(sampleLengthSlider);


        verticalLayout_5->addLayout(horizontalLayout_7);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, verticalLayout_5);

        fpsTitleLabel = new QLabel(paramsGroupBox);
        fpsTitleLabel->setObjectName(QString::fromUtf8("fpsTitleLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, fpsTitleLabel);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        minFpsLabel = new QLabel(paramsGroupBox);
        minFpsLabel->setObjectName(QString::fromUtf8("minFpsLabel"));

        horizontalLayout_8->addWidget(minFpsLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        maxFpsLabel = new QLabel(paramsGroupBox);
        maxFpsLabel->setObjectName(QString::fromUtf8("maxFpsLabel"));

        horizontalLayout_8->addWidget(maxFpsLabel);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        fpsSlider = new QSlider(paramsGroupBox);
        fpsSlider->setObjectName(QString::fromUtf8("fpsSlider"));
        fpsSlider->setMinimum(1);
        fpsSlider->setMaximum(60);
        fpsSlider->setSingleStep(1);
        fpsSlider->setPageStep(5);
        fpsSlider->setValue(30);
        fpsSlider->setOrientation(Qt::Horizontal);
        fpsSlider->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_9->addWidget(fpsSlider);


        verticalLayout_6->addLayout(horizontalLayout_9);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, verticalLayout_6);


        verticalLayout_4->addLayout(formLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 107, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        verticalLayout->addWidget(paramsGroupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startPushButton = new QPushButton(rightBar);
        startPushButton->setObjectName(QString::fromUtf8("startPushButton"));

        horizontalLayout->addWidget(startPushButton);

        pausePushButton = new QPushButton(rightBar);
        pausePushButton->setObjectName(QString::fromUtf8("pausePushButton"));

        horizontalLayout->addWidget(pausePushButton);

        stopPushButton = new QPushButton(rightBar);
        stopPushButton->setObjectName(QString::fromUtf8("stopPushButton"));

        horizontalLayout->addWidget(stopPushButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(rightBar);

        QStrataTestTaskClass->setCentralWidget(centralWidget);

        retranslateUi(QStrataTestTaskClass);

        QMetaObject::connectSlotsByName(QStrataTestTaskClass);
    } // setupUi

    void retranslateUi(QMainWindow *QStrataTestTaskClass)
    {
        QStrataTestTaskClass->setWindowTitle(QCoreApplication::translate("QStrataTestTaskClass", "QStrataTestTask", nullptr));
        paramsGroupBox->setTitle(QCoreApplication::translate("QStrataTestTaskClass", "Params:", nullptr));
        sampleLengthTitleLabel->setText(QCoreApplication::translate("QStrataTestTaskClass", "Sample length:", nullptr));
        minSampleLengthLabel->setText(QCoreApplication::translate("QStrataTestTaskClass", "100", nullptr));
        maxSampleLengthLabel->setText(QCoreApplication::translate("QStrataTestTaskClass", "1000", nullptr));
        fpsTitleLabel->setText(QCoreApplication::translate("QStrataTestTaskClass", "FPS:", nullptr));
        minFpsLabel->setText(QCoreApplication::translate("QStrataTestTaskClass", "1", nullptr));
        maxFpsLabel->setText(QCoreApplication::translate("QStrataTestTaskClass", "60", nullptr));
        startPushButton->setText(QCoreApplication::translate("QStrataTestTaskClass", "Start", nullptr));
        pausePushButton->setText(QCoreApplication::translate("QStrataTestTaskClass", "Pause", nullptr));
        stopPushButton->setText(QCoreApplication::translate("QStrataTestTaskClass", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QStrataTestTaskClass: public Ui_QStrataTestTaskClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSTRATATESTTASK_H
