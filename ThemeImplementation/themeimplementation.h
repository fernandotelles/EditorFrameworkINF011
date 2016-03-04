#ifndef THEMEIMPLEMENTATION_H
#define THEMEIMPLEMENTATION_H

#include "themeimplementation_global.h"
#include <QObject>

#include <EditorFrameworkInterfaces/itoolboximplementation.h>
#include <EditorFrameworkInterfaces/iplugin.h>

class QToolBar;

class THEMEIMPLEMENTATIONSHARED_EXPORT ThemeImplementation : public IPlugin,
                                                             public IToolboxImplementation
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt.EditorFramework.Plugin.ThemeImplementationPlugin" FILE "themeimplementationplugin.json")
    Q_INTERFACES(IPlugin IToolboxImplementation)
public:
    ThemeImplementation(QObject *parent = 0);
    virtual bool initialize(ICore *core);
    virtual QToolBar *background();
    virtual QToolBar *border();
};

#endif // THEMEIMPLEMENTATION_H
