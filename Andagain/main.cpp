#include "andagain.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Andagain w;
    w.show();
    return a.exec();
}
