#ifndef ITOOLBOX_H
#define ITOOLBOX_H

#include "editorframeworkinterfaces_global.h"

#include <QList>
#include <QObject>

#include <EditorFrameworkInterfaces/itoolboximplementation.h>

class QAction;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT Toolbox : public QObject

{
public:
    Toolbox(QObject *parent = 0, IToolboxImplementation *impl = 0);
    virtual ~Toolbox();
    void setImplementation(IToolboxImplementation *impl);
    virtual QList<QAction *> *toolButtonList() const = 0;

private:
    IToolboxImplementation *m_implementation;
};

#endif // ITOOLBOX_H
