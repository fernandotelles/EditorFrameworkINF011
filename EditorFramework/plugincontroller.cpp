#include "plugincontroller.h"

#include <EditorFrameworkInterfaces/icore.h>
#include <EditorFrameworkInterfaces/iplugin.h>

#include <QPluginLoader>
#include <QUrl>
#include <QDir>
#include <QStringList>

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
