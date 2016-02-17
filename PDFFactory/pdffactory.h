#ifndef PDFFACTORY_H
#define PDFFACTORY_H

#include "pdffactory_global.h"

#include <EditorFrameworkInterfaces/iabstractfactory.h>
#include <EditorFrameworkInterfaces/iplugin.h>
#include <EditorFrameworkInterfaces/icore.h>

#include <QStringList>

class PDFFACTORYSHARED_EXPORT PDFFactory : public IPlugin,
                                           public IAbstractFactory
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt.EditorFramework.Plugin.PDFFactoryPlugin" FILE "pdffactoryplugin.json")
    Q_INTERFACES(IPlugin IAbstractFactory)
public:
    PDFFactory();
    ~PDFFactory();
    bool initialize(ICore *core);
    virtual QStringList *supportedExtensions() const;
    bool addExtension(const char *extension);

private:
    QStringList *m_extensions;
};

#endif // PDFFACTORY_H
