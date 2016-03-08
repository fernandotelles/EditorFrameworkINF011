#include "toolbox.h"
#include "itoolboximplementation.h"
#include <QString>

Toolbox::Toolbox( QObject *parent, IToolboxImplementation *impl) :
    QObject(parent)
{
    setImplementation(impl);
}

Toolbox::~Toolbox()
{
    delete m_implementation;
}

void Toolbox::setImplementation(IToolboxImplementation *impl)
{
    m_implementation = impl;
}

QString Toolbox::toolBoxBackground()
{
    if (m_implementation)
        return m_implementation->background();
    else
        return "";
}

QString Toolbox::toolBoxBorder()
{
    if (m_implementation)
        return m_implementation->border();
    else
        return "";
}
