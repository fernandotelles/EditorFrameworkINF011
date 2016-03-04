#include "themeimplementation.h"
#include <QtWidgets/QStyle>

ThemeImplementation::ThemeImplementation(QObject *parent) :
    IPlugin(parent)
{
}

bool ThemeImplementation::initialize(ICore *core)
{
    return true;
}

QStyle *ThemeImplementation::shadow()
{

}
