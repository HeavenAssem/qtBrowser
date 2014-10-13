#include "mainwindow.h"
#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QLabel>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *w = new QWidget;
    QLabel  *label = new QLabel(w);
    label->setText("<font color=red>Hello, World!</font>");
    w->show();
    return a.exec();
}
