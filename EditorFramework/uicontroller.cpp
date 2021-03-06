#include "uicontroller.h"

#include <EditorFrameworkInterfaces/iplugincontroller.h>
#include <EditorFrameworkInterfaces/icore.h>
#include <EditorFrameworkInterfaces/iabstractfactory.h>
#include <EditorFrameworkInterfaces/iplugin.h>
#include <EditorFrameworkInterfaces/editor.h>
#include <EditorFrameworkInterfaces/idocumentcontroller.h>
#include <EditorFrameworkInterfaces/idocument.h>
#include <EditorFrameworkInterfaces/iserializer.h>

#include "ui_mainwindow.h"

#include <QDebug>
#include <QString>
#include <QFileDialog>
#include <QWidget>


UIController::UIController(ICore *core) :
    m_mainWindow(new MainWindow),
    m_core(core)
{
    m_mainWindow->show();
    initialize();

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
    qDebug()<<"Added menu"<< newMenu;
    return newMenu;
}

bool UIController::addAction(const QString &menuName, const QString &text, const QObject *receiver, const char *member, const QKeySequence &shortcut, const QIcon &icon)
{
    QList<QMenu *> children = m_mainWindow->ui->menuBar->findChildren<QMenu *>(menuName);
    if (children.isEmpty())
        return false;
    children.first()->addAction(icon, text, receiver, member, shortcut);
    qDebug()<<"Action added";
    return true;
}

void UIController::setEditor(const Editor *editor)
{
    qDebug()<<"Setting editor";
    QWidget *view = editor->view();
    m_mainWindow->setCentralWidget(view);
}

void UIController::initialize()
{
    qDebug()<<"Init";
    addMenu(tr("&File"));
    addAction(tr("&File"), tr("&Open"), this, SLOT(actionOpen()),QKeySequence(Qt::CTRL + Qt::Key_O));
}

QString *UIController::extensions(ICore *core) const{

    QString *extensions = new QString("Supported Files(");
    IPluginController *ipluginController = core->pluginController();

    foreach (IPlugin *iplugin, *ipluginController->loadedPlugins())
    {
        IAbstractFactory *factory = dynamic_cast<IAbstractFactory *>(iplugin);

        if (factory)
            foreach (QString str, *factory->supportedExtensions())
                extensions->append(str+" ");
    }
    extensions->append(")");
    return extensions;
}

void UIController::actionOpen()
{
    qDebug()<<"Opening File";

    QString selectedFile;
    QString fileExtension;
    IPluginController *ipluginController = m_core->pluginController();

    QFileDialog *fileDialog = new QFileDialog(m_mainWindow);

    fileDialog->setNameFilter(*extensions(m_core));

    if (fileDialog->exec())
    {
        selectedFile = fileDialog->selectedFiles().at(0);
        fileExtension = "*."+selectedFile.split(".").at(1);

        foreach (IPlugin *iplugin, *ipluginController->loadedPlugins())
        {
            IAbstractFactory *abstractFactory = dynamic_cast<IAbstractFactory *>(iplugin);
            if (abstractFactory)
            {
                if (abstractFactory->supportedExtensions()->contains(fileExtension))
                {
                    Editor *editor =  abstractFactory->createEditor();
                    ISerializer *serializer = abstractFactory->createSerializer();
                    qDebug()<<"Serializer: "<<serializer;
                    qDebug()<<"Extensão de Arquivo: "+ fileExtension +". Plugin: "+ iplugin->metaObject()->className()+"";

                    IDocumentController *documentController = m_core->documentController();
                    qDebug()<<"Document controller"<<documentController;
                    documentController->setSerializer(serializer);
                    qDebug()<<"Document controller"<<selectedFile;
                    IDocument *document = documentController->openDocument(selectedFile);
                    qDebug()<<"Document"<<document;
                    editor->setDocument(document);
                    qDebug()<<"Document controller"<<editor;
                    setEditor(editor);
                }
            }
        }
    }
}

void UIController::actionSave()
{

}

void UIController::actionClose()
{

}


