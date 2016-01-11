#ifndef ICORE_H
#define ICORE_H

#include "iuicontroller.h"
#include "idocumentcontroller.h"
#include "iplugincontroller.h"

class ICore
{
public:
//    ICore();
//    virtual ~ICore();
    virtual IUIController* uiController() = 0;
    virtual IDocumentController* documentController() = 0;
    virtual IPluginController* pluginController() = 0;
};

#endif // ICORE_H
