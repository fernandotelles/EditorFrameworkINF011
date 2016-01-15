#ifndef PLUGINCONTROLLER_H
#define PLUGINCONTROLLER_H

#include <EditorFrameworkInterfaces/iplugincontroller.h>

class ICore;

class PluginController : public IPluginController
{
public:
    PluginController(ICore *core);
    virtual ~PluginController();
};

#endif // PLUGINCONTROLLER_H
