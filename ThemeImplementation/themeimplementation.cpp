#include "themeimplementation.h"
#include <QtWidgets/QStyle>
#include <QtWidgets/QToolBar>

ThemeImplementation::ThemeImplementation(QObject *parent) :
    IPlugin(parent)
{
}

bool ThemeImplementation::initialize(ICore *core)
{
    return true;
}

QToolBar *ThemeImplementation::background()
{
    QToolBar *newToolbar = new QToolBar;
    newToolbar->setStyleSheet("background-color: red;"
                              "border-style: outset;"
                              "border-width: 2px;"
                              "border-color: beige;");
    return newToolbar;
}

QToolBar *ThemeImplementation::border()
{
    QToolBar *newToolbar = new QToolBar;
    newToolbar->setStyleSheet("background-color: red;");
    return newToolbar;
}
