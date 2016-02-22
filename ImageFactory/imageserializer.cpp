#include "imageserializer.h"

#include <EditorFrameworkInterfaces/idocument.h>
#include "imagedocument.h"

#include <QString>
#include <QDebug>

ImageSerializer::ImageSerializer()
{

}

IDocument *ImageSerializer::openDocument(QString fileName)
{
    qDebug()<<"openDocument at ImageSerializer";
    IDocument *document = new ImageDocument;
    document->open(fileName);
    return document;
}
