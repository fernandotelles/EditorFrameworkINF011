#ifndef ITOOLBOXIMPLEMENTATION_H
#define ITOOLBOXIMPLEMENTATION_H

#include "editorframeworkinterfaces_global.h"

class QStyle;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IToolboxImplementation {

public:
    IToolboxImplementation(){}
    virtual ~IToolboxImplementation(){}
    virtual QStyle *shadow() = 0;
    //virtual QStyle *
};

Q_DECLARE_INTERFACE(IToolboxImplementation, "org.qt.EditorFrameworkInterfaces.IToolboxImplementation")

#endif // ITOOLBOXIMPLEMENTATION_H
