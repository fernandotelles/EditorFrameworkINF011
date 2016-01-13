#ifndef TESTPLUGIN_H
#define TESTPLUGIN_H

#include "testplugin_global.h"

#include <EditorFrameworkInterfaces/iplugin.h>

#include <QObject>

class TESTPLUGINSHARED_EXPORT TestPlugin : public IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt.EditorFramework.Plugin.TestPlugin" FILE "testplugin.json")
    Q_INTERFACES(IPlugin)
public:
    TestPlugin(QObject *parent = 0);
    virtual bool initialize(ICore *core);

private Q_SLOTS:
    void triggered();
};

#endif // TESTPLUGIN_H
