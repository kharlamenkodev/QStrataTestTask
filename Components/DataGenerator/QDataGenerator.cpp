#include "QDataGenerator.h"

QDataGenerator::QDataGenerator(int sampleLength,
							   int fps,
							   QObject* pParent)
: QObject(pParent),
  mpTimer(nullptr)
{
	if (fps < MIN_FPS)
		fps = MIN_FPS;
	else if (fps > MAX_FPS)
		fps = MAX_FPS;

	mFPS = sampleLength;

	if (sampleLength < MIN_SAMPLE_LENGTH)
		sampleLength = MIN_SAMPLE_LENGTH;
	else if (sampleLength > MAX_SAMPLE_LENGTH)
		sampleLength = MAX_SAMPLE_LENGTH;

	mSampleLength = sampleLength;

	std::srand(0);
}

QDataGenerator::~QDataGenerator()
{
	if (mpTimer) {
		if (mpTimer->isActive()) {
			mpTimer->stop();
		}
	}
}

void QDataGenerator::start()
{
	if (!mpTimer) {
		mpTimer = new QTimer(this);
		connect(mpTimer, SIGNAL(timeout()), this, SLOT(generate()));
		mpTimer->setInterval(MSEC_PER_SEC / mFPS);
		mpTimer->start();
	}
	else if (!mpTimer->isActive()) {
		mpTimer->start();
	}
}


void QDataGenerator::stop()
{
	if (mpTimer && mpTimer->isActive())
		mpTimer->stop();
}

void QDataGenerator::setSampleLength(int value)
{
	if (value < MIN_SAMPLE_LENGTH)
		value = MIN_SAMPLE_LENGTH;
	else if (value > MAX_SAMPLE_LENGTH)
		value = MAX_SAMPLE_LENGTH;

	mSampleLength = value;
}

void QDataGenerator::setFps(int value)
{
	if (value < MIN_FPS)
		value = MIN_FPS;
	else if (value > MAX_FPS)
		value = MAX_FPS;

	mFPS = value;

	if (mpTimer)
		mpTimer->setInterval(MSEC_PER_SEC / mFPS);
}

void QDataGenerator::generate()
{
	mKeys.clear();
	mKeys.squeeze();
	mValues.clear();
	mValues.squeeze();

	for (int i = 0; i < mSampleLength; i++) {
		mKeys.append(rand() % mSampleLength);
		mValues.append(rand() % mSampleLength);
	}

	emit dataReady(mKeys, mValues);
}
