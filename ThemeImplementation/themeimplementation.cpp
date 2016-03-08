#include "themeimplementation.h"

#include <QString>

ThemeImplementation::ThemeImplementation(QObject *parent) :
    IPlugin(parent)
{
}

bool ThemeImplementation::initialize(ICore *core)
{
    return true;
}

QString ThemeImplementation::background()
{
    QString style( "background-color: red;");
    return style;
}

QString ThemeImplementation::border()
{
    QString style( "border-style: outset;"
                   "border-width: 2px;"
                   "border-color: beige;"
                 );
    return style;
}
