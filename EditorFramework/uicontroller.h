#ifndef UICONTROLLER_H
#define UICONTROLLER_H

#include <EditorFrameworkInterfaces/iuicontroller.h>
#include <EditorFrameworkInterfaces/icore.h>

#include "mainwindow.h"

class QStringList;

class UIController : public IUIController
{
    Q_OBJECT
public:
    UIController(ICore *core);
    virtual ~UIController();

    virtual QMenu *addMenu(const QString &title, const QString &parentMenuName = QString(), const QIcon &icon = QIcon());
    virtual bool addAction(const QString &menuName, const QString &text, const QObject *receiver, const char *member, const QKeySequence &shortcut = QKeySequence(), const QIcon &icon = QIcon());
    virtual void setEditor(const Editor *editor);

private:
    void initialize();
    QString *extensions(ICore *core)const;

private Q_SLOTS:
    void actionOpen();
    void actionSave();
    void actionClose();

private:
    MainWindow *m_mainWindow;
    ICore *m_core;
};

#endif // UICONTROLLER_H
