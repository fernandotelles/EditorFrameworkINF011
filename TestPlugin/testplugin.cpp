#include "testplugin.h"


TestPlugin::TestPlugin()
{
}

bool TestPlugin::initialize(ICore *core)
{
    QMenu* menu = core->uiController()->addMenu("TestPlugin");

    if(menu)
        return core->uiController()->addAction(menu,"&TestAction",this,SLOT(triggered()));
    return false;
}

void TestPlugin::triggered(){
    qDebug()<<"It Works!!!";
}
