#ifndef CORE_H
#define CORE_H

#include "../EditorFrameworkInterfaces/icore.h"
#include "../EditorFrameworkInterfaces/iuicontroller.h"
#include "../EditorFrameworkInterfaces/idocumentcontroller.h"
#include "../EditorFrameworkInterfaces/iplugincontroller.h"

#include "uicontroller.h"
#include "documentcontroller.h"
#include "plugincontroller.h"

class Core : public ICore
{

public:
    Core();
    ~Core();
    virtual IUIController* uiController();
    virtual IDocumentController* documentController();
    virtual IPluginController* pluginController();

private:
    IUIController *m_uiController;
    IDocumentController *m_documentController;
    IPluginController *m_pluginController;
};

#endif // CORE_H
