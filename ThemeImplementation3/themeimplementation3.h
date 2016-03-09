#ifndef THEMEIMPLEMENTATION3_H
#define THEMEIMPLEMENTATION3_H

#include "themeimplementation3_global.h"
#include <QObject>

#include <EditorFrameworkInterfaces/iplugin.h>
#include <EditorFrameworkInterfaces/itoolboximplementation.h>

class QString;

class THEMEIMPLEMENTATION3SHARED_EXPORT ThemeImplementation3 : public IPlugin,
                                                               public IToolboxImplementation
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt.EditorFramework.Plugin.ThemeImplementation3Plugin" FILE "themeimplementation3plugin.json")
    Q_INTERFACES(IPlugin IToolboxImplementation)
public:
    ThemeImplementation3(QObject *parent = 0);
    virtual bool initialize(ICore *core);
    virtual QString background();
    virtual QString border();
};

Q_DECLARE_METATYPE(ThemeImplementation3 *)

#endif // THEMEIMPLEMENTATION3_H
