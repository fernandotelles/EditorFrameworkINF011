#include "pdftoolbox.h"

#include <QList>
#include <QDebug>
#include <QtWidgets/QAction>
#include <QtWidgets/QToolBar>
#include <QtGui/QIcon>

PDFToolbox::PDFToolbox(QObject *parent, IToolboxImplementation *impl) :
    m_toolButtonList(new QList<QAction *>)
{
    qDebug()<<"Im here";
    initialize();
}

QList<QAction *> *PDFToolbox::toolButtonList() const
{
    return m_toolButtonList;
}

void PDFToolbox::addButton(QAction *action)
{
    qDebug()<<"Im here";
    m_toolButtonList->append(action);

}

void PDFToolbox::initialize()
{
    QAction *newAction = new QAction( QIcon::fromTheme("object-rotate-left"), tr("Rotate &Left"), this );
    newAction->setShortcut(tr("Alt+L"));
    newAction->setStatusTip(tr("Rotate Left"));
    connect( newAction, SIGNAL(triggered()), this, SLOT(clic1()));
    addButton(newAction);

    QAction *newAction2 = new QAction( QIcon::fromTheme("object-rotate-right"), tr("Rotate &Right"), this );
    newAction2->setShortcut(tr("Alt+R"));
    newAction2->setStatusTip(tr("Rotate Right"));
    connect( newAction2, SIGNAL(triggered()), this, SLOT(clic2()));
    addButton(newAction2);

    QAction *newAction3 = new QAction( QIcon::fromTheme("zoom-fit-best"), tr("Best &Fit Zoom"), this );
    newAction3->setShortcut(tr("Alt+F"));
    newAction3->setStatusTip(tr("Zoom Best Fit"));
    connect( newAction3, SIGNAL(triggered()), this, SLOT(clic3()));
    addButton(newAction3);
}

void PDFToolbox::clic1()
{
    qDebug()<<"Ping 1!";
}

void PDFToolbox::clic2()
{
    qDebug()<<"Ping 2!";
}

void PDFToolbox::clic3()
{
    qDebug()<<"Ping 3!";
}
#include "pdftoolbox.h"
