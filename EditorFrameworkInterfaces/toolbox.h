#ifndef ITOOLBOX_H
#define ITOOLBOX_H

#include "editorframeworkinterfaces_global.h"

#include <QList>
#include <QObject>

#include "itoolboximplementation.h"

class QAction;
class QToolBar;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT Toolbox : public QObject

{
public:
    Toolbox(QObject *parent = 0, IToolboxImplementation *impl = 0);

    void setImplementation(IToolboxImplementation *impl);
    void makeToolBar();

    virtual ~Toolbox();
    virtual QList<QAction *> *toolButtonList() const = 0;

private:
    IToolboxImplementation *m_implementation;
    QToolBar *m_toolbar;
};

#endif // ITOOLBOX_H
