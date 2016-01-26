#ifndef TEXTFACTORY_H
#define TEXTFACTORY_H

#include "textfactory_global.h"

#include <EditorFrameworkInterfaces/iabstractfactory.h>
#include <EditorFrameworkInterfaces/iplugin.h>
#include <EditorFrameworkInterfaces/icore.h>

#include <QStringList>

class TEXTFACTORYSHARED_EXPORT TextFactory : public IPlugin,
                                             public IAbstractFactory
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt.EditorFramework.Plugin.TextFactoryPlugin" FILE "textfactoryplugin.json")
    Q_INTERFACES(IPlugin IAbstractFactory)
public:
    TextFactory(QObject *parent = 0);
    ~TextFactory();
    bool initialize(ICore *core);
    virtual QStringList *supportedExtensions() const;
    bool addExtension(const char *extension);

private:
    QStringList *m_extensions;
};

#endif // TEXTFACTORY_H
