#include "toolbox.h"
#include <EditorFrameworkInterfaces/itoolboximplementation.h>

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

