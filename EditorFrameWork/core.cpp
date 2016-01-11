#include "core.h"

Core::Core() :
    m_uiController( new UIController() ),
    m_documentController( new DocumentController() ),
    m_pluginController( new PluginController(this) )
{


}

Core::~Core(){

}

IUIController* Core::uiController()
{
    return m_uiController;
}

IDocumentController* Core::documentController(){
    return m_documentController;
}

IPluginController* Core::pluginController(){
    return m_pluginController;
}




