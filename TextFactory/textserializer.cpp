#include "textserializer.h"

#include <EditorFrameworkInterfaces/idocument.h>
#include "textdocument.h"

#include <QString>
#include <QDebug>

TextSerializer::TextSerializer()
{

}

IDocument *TextSerializer::openDocument(QString fileName)
{
    qDebug()<<"openDocument at TextSerializer";
    IDocument *document = new TextDocument;
    qDebug()<<"Document open";
    document->open(fileName);
    return document;
}
