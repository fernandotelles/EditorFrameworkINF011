#ifndef PDFFACTORY_H
#define PDFFACTORY_H

#include "pdffactory_global.h"

#include <EditorFrameworkInterfaces/iabstractfactory.h>
#include <EditorFrameworkInterfaces/iplugin.h>
#include <EditorFrameworkInterfaces/icore.h>

#include <QStringList>

class Editor;
class ISerializer;
class IVerifier;
class Toolbox;

class PDFFACTORYSHARED_EXPORT PDFFactory : public IPlugin,
                                           public IAbstractFactory
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt.EditorFramework.Plugin.PDFFactoryPlugin" FILE "pdffactoryplugin.json")
    Q_INTERFACES(IPlugin IAbstractFactory)
public:
    PDFFactory(QObject *parent = 0);
    ~PDFFactory();
    bool initialize(ICore *core);
    virtual QStringList *supportedExtensions() const;
    bool addExtension(const char *extension);
    virtual Editor *createEditor() const;
    virtual ISerializer *createSerializer() const;
    virtual IVerifier *createVerifier() const;
    virtual Toolbox *createToolbox() const;

private:
    QStringList *m_extensions;
};

#endif // PDFFACTORY_H
