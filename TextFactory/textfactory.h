#ifndef TEXTFACTORY_H
#define TEXTFACTORY_H

#include "textfactory_global.h"

#include <EditorFrameworkInterfaces/iabstractfactory.h>
#include <EditorFrameworkInterfaces/iplugin.h>

#include <QStringList>

class TEXTFACTORYSHARED_EXPORT TextFactory : public IAbstractFactory,
                                             public IPlugin
{

public:
    TextFactory();
    ~TextFactory();
    virtual QStringList *supportedExtensions() const;
    bool addExtension(const char *extension);

private:
    QStringList *m_extensions;
};

#endif // TEXTFACTORY_H
