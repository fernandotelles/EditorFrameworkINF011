#include "mainwindow.h"
#include "../EditorFrameworkInterfaces/icore.h"
#include "core.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    (new Core())->uiController()->addMenuItem("File", "fdp");

    return a.exec();
}
