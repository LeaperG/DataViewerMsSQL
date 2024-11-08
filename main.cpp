#include "mainwindow.h"
#include <QApplication>
#include <QScreen>
#include <QRect>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(800, 700);

    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();

    int x = (screenGeometry.width() - w.width()) / 2;
    int y = (screenGeometry.height() - w.height()) / 2;

    w.move(x, y);
    w.show();
    return a.exec();
}
