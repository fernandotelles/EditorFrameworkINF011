#ifndef UICONTROLLER_H
#define UICONTROLLER_H

#include <QMenu>
#include <QMenuBar>
#include <QDebug>
#include "mainwindow.h"

#include "../EditorFrameworkInterfaces/iuicontroller.h"

class UIController : public IUIController
{
public:
    UIController();
    ~UIController();
    virtual QMenu* addMenuItem(QString menu, QString menuItem);

private:
    MainWindow *m_mainWindow;
};

#endif // UICONTROLLER_H
