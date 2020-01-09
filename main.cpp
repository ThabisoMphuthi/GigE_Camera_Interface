#include "mainwindow.h"
#include <QApplication>
#include "spincap.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    spincap* Spincap = new spincap();

    MainWindow w;
    w.setWindowTitle("HA_HILS");
    w.show();

    delete Spincap;

    return a.exec();
}
