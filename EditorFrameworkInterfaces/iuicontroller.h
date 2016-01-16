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

    virtual QMenu *addMenu(const QString &title, const QString &parentMenuName = QString(), const QIcon &icon = QIcon()) = 0;
    virtual bool addAction(const QString &menuName, const QString &text, const QObject *receiver, const char *member, const QKeySequence &shortcut = QKeySequence(), const QIcon &icon = QIcon()) = 0;
};

#endif // IUICONTROLLER_H
