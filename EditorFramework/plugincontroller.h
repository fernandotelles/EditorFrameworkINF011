#ifndef PLUGINCONTROLLER_H
#define PLUGINCONTROLLER_H

#include <EditorFrameworkInterfaces/iplugincontroller.h>
#include <EditorFrameworkInterfaces/iplugin.h>

#include <QList>

class ICore;

class PluginController : public IPluginController
{
public:
    PluginController(ICore *core);
    virtual ~PluginController();
    virtual QList<IPlugin *> *loadedPlugins() const;

private:
    QList<IPlugin *> *m_plugins;
};

#endif // PLUGINCONTROLLER_H
