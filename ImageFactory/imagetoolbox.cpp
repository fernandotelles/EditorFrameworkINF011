#include "imagetoolbox.h"

#include <QList>
#include <QDebug>
#include <QtWidgets/QAction>
#include <QtWidgets/QToolBar>
#include <QtGui/QIcon>

ImageToolbox::ImageToolbox(QObject *parent, IToolboxImplementation *impl) :
    m_toolButtonList(new QList<QAction *>)
{
    qDebug()<<"Im here";
    initialize();
}

ImageToolbox::~ImageToolbox()
{
    delete m_toolButtonList;
}

QList<QAction *> *ImageToolbox::toolButtonList() const
{
    return m_toolButtonList;
}

void ImageToolbox::addButton(QAction *action)
{
    qDebug()<<"Im here";
    m_toolButtonList->append(action);

}

void ImageToolbox::initialize()
{
    QAction *newAction = new QAction( QIcon::fromTheme("contact-new"), tr("&New"), this );
    newAction->setShortcut(tr("Ctrl+N"));
    newAction->setStatusTip(tr("Create a new document"));
    connect( newAction, SIGNAL(triggered()), this, SLOT(contactClic()));
    addButton(newAction);

}

void ImageToolbox::contactClic()
{
    qDebug()<<"Ping!";
}
