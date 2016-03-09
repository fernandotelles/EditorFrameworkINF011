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
    QAction *newAction = new QAction( QIcon::fromTheme("edit-cut"), tr("&Cut"), this );
    newAction->setShortcut(tr("Ctrl+X"));
    newAction->setStatusTip(tr("Cut"));
    connect( newAction, SIGNAL(triggered()), this, SLOT(clic1()));
    addButton(newAction);

    QAction *newAction2 = new QAction( QIcon::fromTheme("document-print"), tr("&Print"), this );
    newAction2->setShortcut(tr("Ctrl+P"));
    newAction2->setStatusTip(tr("Print this document"));
    connect( newAction2, SIGNAL(triggered()), this, SLOT(clic2()));
    addButton(newAction2);

    QAction *newAction3 = new QAction( QIcon::fromTheme("zoom-in"), tr("&Zoom"), this );
    newAction3->setShortcut(tr("F11"));
    newAction3->setStatusTip(tr("Zoom"));
    connect( newAction3, SIGNAL(triggered()), this, SLOT(clic3()));
    addButton(newAction3);

}

void ImageToolbox::clic1()
{
    qDebug()<<"Ping 1!";
}

void ImageToolbox::clic2()
{
    qDebug()<<"Ping 2!";
}

void ImageToolbox::clic3()
{
    qDebug()<<"Ping 3!";
}
