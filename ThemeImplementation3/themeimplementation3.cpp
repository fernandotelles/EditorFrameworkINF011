#include "themeimplementation3.h"

#include <QString>

ThemeImplementation3::ThemeImplementation3(QObject *parent) :
    IPlugin(parent)
{
}

bool ThemeImplementation3::initialize(ICore *core)
{
    return true;
}

QString ThemeImplementation3::background()
{
    QString style( "background-color: green;");
    return style;
}

QString ThemeImplementation3::border()
{
    QString style( "border-style: outset;"
                   "border-width: 2px;"
                   "border-color: beige;"
                 );
    return style;
}
