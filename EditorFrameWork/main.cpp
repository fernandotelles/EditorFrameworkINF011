#include "mainwindow.h"
#include "../EditorFrameworkInterfaces/icore.h"
#include "core.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    ICore *c = new Core();

    return a.exec();
}
