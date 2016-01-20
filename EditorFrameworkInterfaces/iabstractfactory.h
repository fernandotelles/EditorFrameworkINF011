#ifndef IABSTRACTFACTORY_H
#define IABSTRACTFACTORY_H

#include "editorframeworkinterfaces_global.h"

class QList;
class QString;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IAbstractFactory
{

public:
    IAbstractFactory(){}
    virtual ~IAbstractFactory(){}
    virtual QList<QString> supportedExtensions() = 0;
};

#endif // IABSTRACTFACTORY_H
