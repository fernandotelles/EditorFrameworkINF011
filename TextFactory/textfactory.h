#ifndef TEXTFACTORY_H
#define TEXTFACTORY_H

#include "textfactory_global.h"

#include <EditorFrameworkInterfaces/iabstractfactory.h>
#include <EditorFrameworkInterfaces/iplugin.h>
#include <EditorFrameworkInterfaces/icore.h>

#include <QStringList>

class Editor;
class ISerializer;
class IVerifier;
class IToolbox;

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
    virtual Editor *createEditor() const;
    virtual ISerializer *createSerializer() const;
    virtual IVerifier *createVerifier() const;
    virtual IToolbox *createToolbox() const;

private:
    QStringList *m_extensions;
};

#endif // TEXTFACTORY_H
