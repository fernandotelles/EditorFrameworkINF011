#ifndef PLUGINCONTROLLER_H
#define PLUGINCONTROLLER_H

#include <EditorFrameworkInterfaces/iplugincontroller.h>

class ICore;
class IPlugin;

class PluginController : public IPluginController
{
public:
    PluginController(ICore *core);
    virtual ~PluginController();
    virtual QList<IPlugin *> *loadedPlugins() const;
};

#endif // PLUGINCONTROLLER_H
