#include "uicontroller.h"

#include "ui_mainwindow.h"

#include <QDebug>

UIController::UIController() :
    m_mainWindow(new MainWindow)
{
    m_mainWindow->show();
    QMenu *menu;
    addMenu("SubSubFile", menu = addMenu("SubFile", addMenu("File")));
    addAction(menu, "&Hello World!", this, SLOT(mySlot()));
}

UIController::~UIController()
{
    delete m_mainWindow;
}

QMenu *UIController::addMenu(const QString &title, QMenu *parent, const QIcon &icon)
{
    QMenu *parentMenu = 0;
    if (parent)
        foreach (QMenu *childMenu, m_mainWindow->ui->menuBar->findChildren<QMenu *>())
            if (childMenu == parent)
                parentMenu = childMenu;
    if (parentMenu)
        return parentMenu->addMenu(icon, title);
    else
        return m_mainWindow->ui->menuBar->addMenu(icon, title);
}

bool UIController::addAction(QMenu *menu, const QString &text, const QObject *receiver, const char *member, const QKeySequence &shortcut, const QIcon &icon)
{
    if (menu) {
        menu->addAction(icon, text, receiver, member, shortcut);
        return true;
    }
    return false;
}

void UIController::mySlot()
{
    qDebug() << "FUNCIONOU";
}
