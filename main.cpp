#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file("C:/Users/Hatem/Desktop/projet/style.qss");
        file.open(QFile::ReadOnly);
        QString styleSheet = QLatin1String(file.readAll());
        a.setStyleSheet(styleSheet);
    MainWindow w;
    w.show();

    return a.exec();
}
