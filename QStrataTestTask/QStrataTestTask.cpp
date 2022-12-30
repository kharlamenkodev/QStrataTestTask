#include "QStrataTestTask.h"

QStrataTestTask::QStrataTestTask(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    setWindowTitle("Strata test task application");
    initConnections();
    initPlot();

    mDataGenerator.moveToThread(&mDataGeneratorThread);
}

QStrataTestTask::~QStrataTestTask()
{
    if (mDataGeneratorThread.isRunning()) {
        mDataGeneratorThread.quit();
        mDataGeneratorThread.wait();
    }
}

void QStrataTestTask::initConnections() const
{
    connect(ui.startPushButton    ,SIGNAL (clicked()), 
            this                  ,SLOT   (startButtonClicked()));
                                  
    connect(ui.pausePushButton    ,SIGNAL (clicked()),
            &mDataGenerator       ,SLOT   (stop()));
                                  
    connect(ui.stopPushButton     ,SIGNAL (clicked()),
            this                  ,SLOT   (stopButtonClicked()));
                                  
    connect(&mDataGenerator       ,SIGNAL (dataReady(const QVector <double>,
                                                     const QVector <double>)),
            this                  ,SLOT   (dataReady(const QVector <double>,
                                                     const QVector <double>)));

    connect(&mDataGeneratorThread ,SIGNAL (started()),
            this                  ,SLOT   (threadStarted()));

    connect(&mDataGeneratorThread ,SIGNAL (finished()),
            this                  ,SLOT   (threadFinished()));

    connect(this                  ,SIGNAL (startGenerating()),
            &mDataGenerator       ,SLOT   (start()));

    connect(this                  ,SIGNAL (stopGenerating()),
            &mDataGenerator       ,SLOT   (stop()));

    connect(this                  ,SIGNAL (setSampleLength(int)),
           &mDataGenerator        ,SLOT   (setSampleLength(int)));

    connect(this                  ,SIGNAL (setFps(int)),
            &mDataGenerator       ,SLOT   (setFps(int)));

    connect(ui.sampleLengthSlider ,SIGNAL (valueChanged(int)),
            this                  ,SLOT   (sampleLengthSliderTriggered(int)));

    connect(ui.fpsSlider          ,SIGNAL (valueChanged(int)),
            this                  ,SLOT   (fpsSliderTriggered(int)));
}

void QStrataTestTask::initPlot() const
{
    ui.customPlotWIdget->addGraph();
    ui.customPlotWIdget->plotLayout()->insertRow(0);
    ui.customPlotWIdget->plotLayout()->addElement(0, 0,
                                                  new QCPTextElement(ui.customPlotWIdget,
                                                  "Random data visualization",
                                                  QFont("sans", 12, QFont::Bold)));
    ui.customPlotWIdget->graph(0)->setName("Random data");
    ui.customPlotWIdget->yAxis->setRange(0, ui.sampleLengthSlider->value());
    ui.customPlotWIdget->xAxis->setRange(0, ui.sampleLengthSlider->value());
    ui.customPlotWIdget->xAxis->setLabel("X");
    ui.customPlotWIdget->yAxis->setLabel("Y");
    
    ui.customPlotWIdget->legend->setVisible(true);
    QFont lFont = font();
    lFont.setBold(true);
    lFont.setPointSize(9);
    ui.customPlotWIdget->legend->setFont(lFont);
    ui.customPlotWIdget->legend->setBrush(Qt::lightGray);
}

void QStrataTestTask::startButtonClicked()
{
    if (!mDataGeneratorThread.isRunning()) {
        mDataGeneratorThread.start();
    }
    else {
        emit startGenerating();
    }
}

void QStrataTestTask::stopButtonClicked()
{
    emit stopGenerating();

    if (mDataGeneratorThread.isRunning()) {
        mDataGeneratorThread.quit();
        mDataGeneratorThread.wait();
    }
}

void QStrataTestTask::sampleLengthSliderTriggered(int value)
{
    emit setSampleLength(value);

    ui.customPlotWIdget->yAxis->setRange(0, value);
    ui.customPlotWIdget->xAxis->setRange(0, value);
    ui.customPlotWIdget->replot();
}

void QStrataTestTask::fpsSliderTriggered(int value)
{
    emit setFps(value);
}

void QStrataTestTask::threadStarted()
{
    emit startGenerating();
}

void QStrataTestTask::threadFinished()
{
    ui.customPlotWIdget->graph(0)->data().data()->clear();
    ui.customPlotWIdget->replot();
}

void QStrataTestTask::dataReady(const QVector <double> keys, const QVector <double> values)
{
    ui.customPlotWIdget->graph(0)->setData(keys, values);
    ui.customPlotWIdget->replot();
}

