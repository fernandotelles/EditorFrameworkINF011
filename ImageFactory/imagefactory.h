#ifndef IMAGEFACTORY_H
#define IMAGEFACTORY_H

#include "imagefactory_global.h"

#include <EditorFrameworkInterfaces/iabstractfactory.h>
#include <EditorFrameworkInterfaces/iplugin.h>

#include <QStringList>

class IMAGEFACTORYSHARED_EXPORT ImageFactory : public IAbstractFactory,
                                               public IPlugin
{

public:
    ImageFactory();
    ~ImageFactory();
    virtual QStringList *supportedExtensions() const;
    bool addExtension(const char *extension);

private:
    QStringList *m_extensions;
};

#endif // IMAGEFACTORY_H
