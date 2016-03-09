#include "texttoolbox.h"

#include <QList>
#include <QDebug>
#include <QtWidgets/QAction>
#include <QtWidgets/QToolBar>
#include <QtGui/QIcon>

TextToolbox::TextToolbox(QObject *parent, IToolboxImplementation *impl) :
    m_toolButtonList(new QList<QAction *>)
{
    qDebug()<<"Im here";
    initialize();
}

QList<QAction *> *TextToolbox::toolButtonList() const
{
    return m_toolButtonList;
}

void TextToolbox::addButton(QAction *action)
{
    qDebug()<<"Im here";
    m_toolButtonList->append(action);

}

void TextToolbox::initialize()
{
    QAction *newAction = new QAction( QIcon::fromTheme("edit-cut"), tr("C&ut"), this );
    newAction->setShortcut(tr("Ctrl+X"));
    newAction->setStatusTip(tr("Cut"));
    connect( newAction, SIGNAL(triggered()), this, SLOT(clic1()));
    addButton(newAction);

    QAction *newAction2 = new QAction( QIcon::fromTheme("edit-copy"), tr("&Copy"), this );
    newAction2->setShortcut(tr("Ctrl+C"));
    newAction2->setStatusTip(tr("Copy"));
    connect( newAction2, SIGNAL(triggered()), this, SLOT(clic2()));
    addButton(newAction2);

    QAction *newAction3 = new QAction( QIcon::fromTheme("edit-paste"), tr("&Paste"), this );
    newAction3->setShortcut(tr("Ctrl+V"));
    newAction3->setStatusTip(tr("Paste"));
    connect( newAction3, SIGNAL(triggered()), this, SLOT(clic3()));
    addButton(newAction3);
}

void TextToolbox::clic1()
{
    qDebug()<<"Ping 1!";
}

void TextToolbox::clic2()
{
    qDebug()<<"Ping 2!";
}

void TextToolbox::clic3()
{
    qDebug()<<"Ping 3!";
}
