#ifndef ITOOLBOXIMPLEMENTATION_H
#define ITOOLBOXIMPLEMENTATION_H

#include "editorframeworkinterfaces_global.h"

class QToolBar;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IToolboxImplementation {

public:
    IToolboxImplementation(){}
    virtual ~IToolboxImplementation(){}
    virtual QString background() = 0;
    virtual QString border() = 0;
};

Q_DECLARE_METATYPE(IToolboxImplementation *);

Q_DECLARE_INTERFACE(IToolboxImplementation, "org.qt.EditorFrameworkInterfaces.IToolboxImplementation")


#endif // ITOOLBOXIMPLEMENTATION_H
