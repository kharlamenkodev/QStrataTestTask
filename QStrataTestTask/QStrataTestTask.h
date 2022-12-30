#pragma once

#include <QtWidgets/QMainWindow>
#include <QThread>

#include "ui_QStrataTestTask.h"
#include "QDataGenerator.h"

/*! @class QStrataTestTask
*   @brief Application window class
*   
*   @author Kharlamenko I.V.
*   @date 08.10.2022
*/
class QStrataTestTask : public QMainWindow
{
    Q_OBJECT

public:
    //! Constructor
    //! @param[in] pParent - pointer to parent widget
    QStrataTestTask(QWidget *pParent = Q_NULLPTR);
    //! Destructor
    ~QStrataTestTask();

private:
    //! UI object
    Ui::QStrataTestTaskClass ui;
    //! Data generation object thread
    QThread mDataGeneratorThread;
    //! Data generation class instance
    QDataGenerator mDataGenerator;

    //! Initialize SIGNAL - SLOT connections
    void initConnections() const;
    //! Inittialize plot widget
    void initPlot() const;

private slots:
    //! Start button click handler
    void startButtonClicked();
    //! Stop button click handler
    void stopButtonClicked();
    //! Sample length slider trigger event handler
    //! @param[out] value - new value of data sample length
    void sampleLengthSliderTriggered(int value);
    //! Fps length slider trigger event handler
    //! @param[out] value - new value of fps
    void fpsSliderTriggered(int value);
    //! Thread start event handler
    void threadStarted();
    //! Thread finish event handler
    void threadFinished();
    //! Handler of the data portion readiness event from the data generator.
    //! @param[in] keys - vector of keys (x values) of the data
    //! @param[in] values - vector of values of the data
    void dataReady(const QVector <double> keys, const QVector <double> values);

signals:
    //! A signal telling the data generator to start generating data 
    void startGenerating();
    //! A signal telling the data generator to stop generating data
    void stopGenerating();
    //! Set data sample length to random data generator
    //! @param[out] value - data sample length
    void setSampleLength(int value);
    //! Set fps to random data generator
    //! @param[out] value - fps value
    void setFps(int value);
};
