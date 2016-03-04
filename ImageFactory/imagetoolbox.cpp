#include "imagetoolbox.h"

#include <QList>
#include <QDebug>
#include <QtWidgets/QAction>
#include <QtWidgets/QToolBar>
#include <QtGui/QIcon>
#include <QtGui/QIconSet>

ImageToolbox::ImageToolbox(QObject *parent, IToolboxImplementation *impl) :
    m_toolButtonList(new QList<QAction *>)
{
    initialize();
}

QList<QAction *> *ImageToolbox::toolButtonList() const
{
    return m_toolButtonList;
}

void ImageToolbox::addButton(QAction *action)
{
    m_toolButtonList->append(action);
}

void ImageToolbox::initialize()
{
//    newAction = new QAction( QIcon::fromTheme("contact-new"), tr("&New"), this );
//    newAction->setShortcut( tr("Ctrl+N") );
//    newAction->setStatusTip( tr("Create a new document") );
//    connect( newAction, SIGNAL(triggered()), this, SLOT(fileNew()) );

    QToolBar bar("Menubar");
    addButton(bar.addAction(QIcon::fromTheme("contact-new"),"Contact",this,SLOT(contactClic())));
    //addButton(bar.addAction());

}

void ImageToolbox::contactClic()
{
    qDebug()<<"Ping!";
}
