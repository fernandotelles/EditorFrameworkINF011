#ifndef IMAGEFACTORY_H
#define IMAGEFACTORY_H

#include "imagefactory_global.h"

#include <EditorFrameworkInterfaces/iabstractfactory.h>
#include <EditorFrameworkInterfaces/iplugin.h>

#include <QStringList>
#include <QObject>

class ICore;
class Editor;
class ISerializer;
class IVerifier;
class IToolbox;

class IMAGEFACTORYSHARED_EXPORT ImageFactory : public IPlugin,
                                               public IAbstractFactory
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt.EditorFramework.Plugin.ImageFactoryPlugin" FILE "imagefactoryplugin.json")
    Q_INTERFACES(IPlugin IAbstractFactory)
public:
    ImageFactory(QObject *parent = 0);
    ~ImageFactory();
    bool initialize(ICore *core);
    virtual QStringList *supportedExtensions() const;
    bool addExtension(const char *extension);
    virtual Editor *createEditor() const;
    virtual ISerializer *createSerializer() const;
    virtual IVerifier *createVerifier() const;
    virtual IToolbox *createToolbox() const;

private:
    QStringList *m_extensions;

private Q_SLOTS:
};

#endif // IMAGEFACTORY_H
