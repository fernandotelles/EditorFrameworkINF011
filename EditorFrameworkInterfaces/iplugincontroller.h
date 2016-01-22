#ifndef IPLUGINCONTROLLER_H
#define IPLUGINCONTROLLER_H

#include "editorframeworkinterfaces_global.h"

class IPlugin;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IPluginController
{
public:
    IPluginController() {}
    virtual ~IPluginController() {}
    virtual QList<IPlugin *> *loadedPlugins() const = 0;
};

#endif // IPLUGINCONTROLLER_H

