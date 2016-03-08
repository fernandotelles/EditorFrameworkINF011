#ifndef ITOOLBOX_H
#define ITOOLBOX_H

#include "editorframeworkinterfaces_global.h"

#include <QList>
#include <QObject>

#include "itoolboximplementation.h"

class QAction;
class QString;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT Toolbox : public QObject

{
public:
    Toolbox(QObject *parent = 0, IToolboxImplementation *impl = 0);

    void setImplementation(IToolboxImplementation *impl);
    QString toolBoxBackground();
    QString toolBoxBorder();

    virtual ~Toolbox();
    virtual QList<QAction *> *toolButtonList() const = 0;

private:
    IToolboxImplementation *m_implementation;
};

#endif // ITOOLBOX_H
