#include "themeimplementation2.h"

#include <QtWidgets/QStyle>
#include <QtWidgets/QToolBar>

ThemeImplementation2::ThemeImplementation2(QObject *parent) :
    IPlugin(parent)
{
}

bool ThemeImplementation2::initialize(ICore *core)
{
    return true;
}

QToolBar *ThemeImplementation2::background()
{
    QToolBar *newToolbar = new QToolBar;
    newToolbar->setStyleSheet("background-color: yellow;"
                              "border-style: outset;"
                              "border-width: 1px;"
                              "border-color: blue;");
    return newToolbar;
}

QToolBar *ThemeImplementation2::border()
{
    QToolBar *newToolbar = new QToolBar;
    newToolbar->setStyleSheet("background-color: red;");
    return newToolbar;
}
