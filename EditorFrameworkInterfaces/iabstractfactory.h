#ifndef IABSTRACTFACTORY_H
#define IABSTRACTFACTORY_H

#include "editorframeworkinterfaces_global.h"

#include <QtCore/QObject>

class QStringList;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IAbstractFactory
{

public:
    IAbstractFactory() {}
    virtual ~IAbstractFactory(){}
    virtual QStringList *supportedExtensions() const = 0;
};

Q_DECLARE_INTERFACE(IAbstractFactory, "org.qt.EditorFrameworkInterfaces.IAbstractFactory")

#endif // IABSTRACTFACTORY_H
