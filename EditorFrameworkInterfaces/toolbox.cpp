#include "toolbox.h"
#include "itoolboximplementation.h"
#include <QtWidgets/QToolBar>

Toolbox::Toolbox( QObject *parent, IToolboxImplementation *impl) :
    QObject(parent)
{
    setImplementation(impl);
}

Toolbox::~Toolbox()
{
    delete m_implementation;

    if(m_toolbar) delete m_toolbar;
}

void Toolbox::setImplementation(IToolboxImplementation *impl)
{
    m_implementation = impl;
}

void Toolbox::makeToolBar()
{
    m_toolbar = m_implementation->background();
}
