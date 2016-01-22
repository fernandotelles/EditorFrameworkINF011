#ifndef IABSTRACTFACTORY_H
#define IABSTRACTFACTORY_H

#include "editorframeworkinterfaces_global.h"

class QStringList;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IAbstractFactory
{

public:
    IAbstractFactory(){}
    virtual ~IAbstractFactory(){}
    virtual QStringList *supportedExtensions() const = 0;
};

#endif // IABSTRACTFACTORY_H
