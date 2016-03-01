#ifndef ITOOLBOX_H
#define ITOOLBOX_H

#include "editorframeworkinterfaces_global.h"

#include <EditorFrameworkInterfaces/toolboximplementation.h>
#include <QList>

class QToolButton;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT Toolbox :
        public ToolboxImplementation
{

public:
    Toolbox(ToolboxImplementation *impl);
    virtual ~Toolbox(){}
    void setImplementation(ToolboxImplementation *impl);
    virtual QList<QToolButton *> toolButtonList();

private:
    ToolboxImplementation *m_implementation;
};

#endif // ITOOLBOX_H
