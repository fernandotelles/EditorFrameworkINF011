#ifndef PLUGINCONTROLLER_H
#define PLUGINCONTROLLER_H

#include <EditorFrameworkInterfaces/iplugincontroller.h>

class PluginController : public IPluginController
{
public:
    PluginController();
    virtual ~PluginController();
};

#endif // PLUGINCONTROLLER_H
