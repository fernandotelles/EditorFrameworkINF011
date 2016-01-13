#ifndef IUICONTROLLER_H
#define IUICONTROLLER_H

#include "editorframeworkinterfaces_global.h"

class QMenu;
class QAction;
class QString;
class QObject;

#include <QtGui/QIcon>
#include <QtGui/QKeySequence>

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IUIController : public QObject
{
    Q_OBJECT
public:
    IUIController();
    virtual ~IUIController();

    virtual QMenu *addMenu(const QString &title, QMenu *parent = 0, const QIcon &icon = QIcon()) = 0;
    virtual bool addAction(QMenu *menu, const QString &text, const QObject *receiver, const char *member, const QKeySequence &shortcut = QKeySequence(), const QIcon &icon = QIcon()) = 0;
};

#endif // IUICONTROLLER_H
