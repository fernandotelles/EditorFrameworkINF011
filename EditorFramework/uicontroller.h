#ifndef UICONTROLLER_H
#define UICONTROLLER_H

#include <EditorFrameworkInterfaces/iuicontroller.h>

#include "mainwindow.h"

class UIController : public IUIController
{
    Q_OBJECT
public:
    UIController();
    virtual ~UIController();

    virtual QMenu *addMenu(const QString &title, QMenu *parent = 0, const QIcon &icon = QIcon());
    virtual bool addAction(QMenu *menu, const QString &text, const QObject *receiver, const char *member, const QKeySequence &shortcut = QKeySequence(), const QIcon &icon = QIcon());

private Q_SLOTS:
    void mySlot();

private:
    MainWindow *m_mainWindow;
};

#endif // UICONTROLLER_H
