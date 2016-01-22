#include "plugincontroller.h"

#include <EditorFrameworkInterfaces/icore.h>
#include <EditorFrameworkInterfaces/iplugin.h>

#include <QPluginLoader>
#include <QUrl>
#include <QDir>
#include <QList>

PluginController::PluginController(ICore *core)
{
    QDir currentDir("./plugins");

    IPlugin *iplugin = 0;

    foreach (QString plugin, currentDir.entryList(QDir::Files))
    {
        QPluginLoader loader(currentDir.absoluteFilePath(plugin));
        iplugin = (IPlugin*) loader.instance();
        if (iplugin)
            iplugin->initialize(core);
    }
}

PluginController::~PluginController()
{
}

QList<IPlugin *> *PluginController::loadedPlugins() const{
    QList<IPlugin *> *plugins = new QList<IPlugin *>;

    QDir currentDir("./plugins");

    IPlugin *iplugin = 0;
    foreach(QString plugin, currentDir.entryList(QDir::Files))
    {
        QPluginLoader loader(currentDir.absoluteFilePath(plugin));
        iplugin = (IPlugin*) loader.instance();
        if(iplugin)
            plugins->append(iplugin);
    }

    return plugins;
}
