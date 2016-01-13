#ifndef TESTPLUGIN_H
#define TESTPLUGIN_H

#include "testplugin_global.h"
#include <QObject>
#include <QDebug>
#include <EditorFrameworkInterfaces/iplugin.h>

class QMenu;

class TESTPLUGINSHARED_EXPORT TestPlugin : public QObject,
                                           public IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt.EditorFramework.Plugin.TestPlugin" FILE "testplugin.json")
    Q_INTERFACES(IPlugin)
public:
    TestPlugin();
    virtual bool initialize(ICore *core);

private Q_SLOTS:
    void triggered();
};

#endif // TESTPLUGIN_H
