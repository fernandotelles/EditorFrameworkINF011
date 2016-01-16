#include "uicontroller.h"

#include "ui_mainwindow.h"

#include <QDebug>

UIController::UIController() :
    m_mainWindow(new MainWindow)
{
    m_mainWindow->show();
    addMenu("&File");
    addMenu("SubFile", "&File");
    addMenu("SubSubFile", "SubFile");
    addAction("SubSubFile", "&Hello World!", this, SLOT(mySlot()));
}

UIController::~UIController()
{
    delete m_mainWindow;
}

QMenu *UIController::addMenu(const QString &title, const QString &parentMenuName, const QIcon &icon)
{
    QList<QMenu *> children = m_mainWindow->ui->menuBar->findChildren<QMenu *>(parentMenuName);
    QMenu *parentMenu = children.isEmpty() ? 0:children.first();
    QMenu *newMenu;
    if (parentMenu)
        newMenu = parentMenu->addMenu(icon, title);
    else
        newMenu = m_mainWindow->ui->menuBar->addMenu(icon, title);
    newMenu->setObjectName(title);
    return newMenu;
}

bool UIController::addAction(const QString &menuName, const QString &text, const QObject *receiver, const char *member, const QKeySequence &shortcut, const QIcon &icon)
{
    QList<QMenu *> children = m_mainWindow->ui->menuBar->findChildren<QMenu *>(menuName);
    if (children.isEmpty())
        return false;
    children.first()->addAction(icon, text, receiver, member, shortcut);
    return true;
}

void UIController::mySlot()
{
    qDebug() << "FUNCIONOU";
}
