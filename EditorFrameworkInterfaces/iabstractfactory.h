#ifndef IABSTRACTFACTORY_H
#define IABSTRACTFACTORY_H

#include "editorframeworkinterfaces_global.h"

#include <QtCore/QObject>

class QStringList;
class Editor;
class ISerializer;
class IVerifier;
class Toolbox;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IAbstractFactory
{

public:
    IAbstractFactory() {}
    virtual ~IAbstractFactory(){}
    virtual QStringList *supportedExtensions() const = 0;
    virtual Editor *createEditor() const = 0;
    virtual ISerializer *createSerializer() const = 0;
    virtual IVerifier *createVerifier() const = 0;
    virtual Toolbox *createToolbox() const = 0;
};

Q_DECLARE_INTERFACE(IAbstractFactory, "org.qt.EditorFrameworkInterfaces.IAbstractFactory")

#endif // IABSTRACTFACTORY_H
