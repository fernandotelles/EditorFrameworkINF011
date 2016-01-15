#include "testplugin.h"

#include <EditorFrameworkInterfaces/icore.h>
#include <EditorFrameworkInterfaces/iuicontroller.h>

#include <QDebug>
#include <QtGui/QMenu>
TestPlugin::TestPlugin(QObject *parent) :
    IPlugin(parent)
{
}

bool TestPlugin::initialize(ICore *core)
{
    QMenu *parent = new QMenu("&File");
    QMenu *menu = core->uiController()->addMenu("&TestMenu",parent);
    return core->uiController()->addAction(menu,"&TestAction",this,SLOT(triggered()));
}

void TestPlugin::triggered()
{
    qDebug()<<"It Works!!!";
}
