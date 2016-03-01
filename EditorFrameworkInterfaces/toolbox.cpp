#include "toolbox.h"

Toolbox::Toolbox(ToolboxImplementation *impl)
{
    setImplementation(impl);
}

void Toolbox::setImplementation(ToolboxImplementation *impl)
{
    m_implementation = impl;
}
