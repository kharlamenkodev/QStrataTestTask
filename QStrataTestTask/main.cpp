#include "QStrataTestTask.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStrataTestTask w;
    w.show();
    return a.exec();
}
