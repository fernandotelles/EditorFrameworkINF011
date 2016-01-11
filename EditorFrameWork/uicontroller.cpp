#include "uicontroller.h"

UIController::UIController() :
    m_mainWindow(new MainWindow())
{
    m_mainWindow->setVisible(true);
}

UIController::~UIController(){
    delete m_mainWindow;
}

QMenu* UIController::addMenuItem(QString menu, QString menuItem)
{

    QMenuBar *menuBar = m_mainWindow->menuBar();
    int menuCount = menuBar->children().length();

    QMenu *targetMenu = NULL;

    for (int i = 0; i < menuCount; ++i)
        if(menuBar->children().at(i)->objectName() == menu)
            targetMenu = (QMenu*) &menuBar->children().at(i);

    if(targetMenu == NULL)
    {
        targetMenu = new QMenu(menu,m_mainWindow);
        menuBar->addMenu(targetMenu);
    }

    int itemCount = targetMenu->children().length();

    for (int i = 0; i < itemCount; ++i)
        if (targetMenu->children().at(i)->objectName() == menuItem)
            return NULL;

    QAction *targetMenuItem = new QAction(menuItem,targetMenu);
    targetMenu->addAction(targetMenuItem);

    return targetMenu;

}
