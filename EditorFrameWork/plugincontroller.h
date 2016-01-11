#ifndef PLUGINCONTROLLER_H
#define PLUGINCONTROLLER_H


#include <QFile>
#include <QUrl>


#include "../EditorFrameworkInterfaces/icore.h"
#include "../EditorFrameworkInterfaces/iplugin.h"
#include "../EditorFrameworkInterfaces/iplugincontroller.h"

class PluginController : public IPluginController
{
public:
    PluginController(ICore *core);
    ~PluginController();
};

#endif // PLUGINCONTROLLER_H
