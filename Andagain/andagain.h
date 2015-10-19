#ifndef ANDAGAIN_H
#define ANDAGAIN_H

#include <QtWidgets/QMainWindow>
#include "ui_andagain.h"

class Andagain : public QMainWindow
{
    Q_OBJECT

public:
    Andagain(QWidget *parent = 0);
    ~Andagain();

private:
    Ui::AndagainClass ui;
};

#endif // ANDAGAIN_H
