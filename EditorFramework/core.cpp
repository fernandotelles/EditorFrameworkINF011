#include "core.h"

#include "uicontroller.h"
#include "documentcontroller.h"
#include "plugincontroller.h"

Core::Core() :
    m_uiController(new UIController),
    m_documentController(new DocumentController),
    m_pluginController(new PluginController(this))
{
}

Core::~Core()
{
    delete m_uiController;
    delete m_documentController;
    delete m_pluginController;
}

IUIController *Core::uiController() const
{
    return m_uiController;
}

IDocumentController *Core::documentController() const
{
    return m_documentController;
}

IPluginController *Core::pluginController() const
{
    return m_pluginController;
}
