#ifndef CORE_H
#define CORE_H

#include <EditorFrameworkInterfaces/icore.h>

class IUIController;
class IDocumentController;
class IPluginController;

class Core : public ICore
{
public:
    Core();
    ~Core();
    virtual IUIController *uiController() const;
    virtual IDocumentController *documentController() const;
    virtual IPluginController *pluginController() const;

private:
    IUIController *m_uiController;
    IDocumentController *m_documentController;
    IPluginController *m_pluginController;
};

#endif // CORE_H
