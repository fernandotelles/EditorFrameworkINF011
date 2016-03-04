#ifndef THEMEIMPLEMENTATION2_H
#define THEMEIMPLEMENTATION2_H

#include "themeimplementation2_global.h"
#include <QObject>

#include <EditorFrameworkInterfaces/itoolboximplementation.h>
#include <EditorFrameworkInterfaces/iplugin.h>

class QToolBar;

class THEMEIMPLEMENTATION2SHARED_EXPORT ThemeImplementation2 : public IPlugin,
                                                               public IToolboxImplementation
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt.EditorFramework.Plugin.ThemeImplementation2Plugin" FILE "themeimplementation2plugin.json")
    Q_INTERFACES(IPlugin IToolboxImplementation)
public:
    ThemeImplementation2(QObject *parent = 0);
    virtual bool initialize(ICore *core);
    virtual QToolBar *background();
    virtual QToolBar *border();
};

#endif // THEMEIMPLEMENTATION2_H
