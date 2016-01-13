#ifndef IPLUGIN_H
#define IPLUGIN_H

#include "editorframeworkinterfaces_global.h"
#include "icore.h"
//class ICore;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IPlugin
{
public:
    IPlugin() {}
    ~IPlugin() {}
    virtual bool initialize(ICore *core) = 0;
};

#define IPlugin_iid "org.qt.EditoFrameworkInterfaces.IPlugin"
Q_DECLARE_INTERFACE(IPlugin, IPlugin_iid)

#endif // IPLUGIN_H
