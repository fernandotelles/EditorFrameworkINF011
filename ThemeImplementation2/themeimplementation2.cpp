#include "themeimplementation2.h"

#include <QString>

ThemeImplementation2::ThemeImplementation2(QObject *parent) :
    IPlugin(parent)
{
}

bool ThemeImplementation2::initialize(ICore *core)
{
    return true;
}

QString ThemeImplementation2::background()
{
    QString style( "background-color: blue;");
    return style;
}

QString ThemeImplementation2::border()
{
    QString style( "border-style: outset;"
                   "border-width: 2px;"
                   "border-color: beige;"
                 );
    return style;
}
