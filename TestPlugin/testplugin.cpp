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
//    core->uiController()->addMenu("&File");
//    core->uiController()->addMenu("&TestMenu", "&File");
//    return core->uiController()->addAction("&TestMenu","&TestAction",this,SLOT(triggered()), QKeySequence(Qt::CTRL + Qt::Key_G));
}

void TestPlugin::triggered()
{
    qDebug()<<"It Works!!!";
}
