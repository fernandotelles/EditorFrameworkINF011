#ifndef IPLUGIN_H
#define IPLUGIN_H

#include "editorframeworkinterfaces_global.h"

#include <QtCore/QObject>

class ICore;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IPlugin : public QObject
{
public:
    IPlugin(QObject *parent = 0) : QObject(parent) {}
    ~IPlugin() {}
    virtual bool initialize(ICore *core) = 0;
};

Q_DECLARE_INTERFACE(IPlugin, "org.qt.EditoFrameworkInterfaces.IPlugin")

#endif // IPLUGIN_H
