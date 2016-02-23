#include "plugincontroller.h"

#include <EditorFrameworkInterfaces/icore.h>
#include <EditorFrameworkInterfaces/iplugin.h>
#include <EditorFrameworkInterfaces/iabstractfactory.h>

#include <QPluginLoader>
#include <QUrl>
#include <QDir>
#include <QList>
#include <QDebug>

PluginController::PluginController(ICore *core) :
    m_plugins(new QList<IPlugin *>)
{
    qDebug()<<"Loading plugins...";
    QDir currentDir("./plugins");

    IPlugin *iplugin = 0;

    foreach (QString plugin, currentDir.entryList(QDir::Files))
    {
        QPluginLoader loader(currentDir.absoluteFilePath(plugin));
        iplugin = dynamic_cast<IPlugin *>(loader.instance());
        if (iplugin)
        {
            iplugin->initialize(core);
            m_plugins->append(iplugin);
        }
    }
}

PluginController::~PluginController()
{
    delete m_plugins;
}

QList<IPlugin *> *PluginController::loadedPlugins() const
{
    return m_plugins;
}
