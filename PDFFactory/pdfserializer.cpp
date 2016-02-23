#include "pdfserializer.h"

#include <QString>

#include <EditorFrameworkInterfaces/idocument.h>
#include "pdfdocument.h"

PDFSerializer::PDFSerializer()
{

}

IDocument *PDFSerializer::openDocument(QString fileName)
{
    IDocument *document = new PDFDocument;
    document->open(fileName);
    return document;
}
