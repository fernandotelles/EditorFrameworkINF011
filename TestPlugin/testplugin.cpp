#include "testplugin.h"

#include <EditorFrameworkInterfaces/icore.h>
#include <EditorFrameworkInterfaces/iuicontroller.h>

#include <QDebug>

TestPlugin::TestPlugin(QObject *parent) :
    IPlugin(parent)
{
}

bool TestPlugin::initialize(ICore *core)
{
    QMenu* menu = core->uiController()->addMenu("TestPlugin");

    if(menu)
        return core->uiController()->addAction(menu,"&TestAction",this,SLOT(triggered()));
}

void TestPlugin::triggered()
{
    qDebug()<<"It Works!!!";
}
