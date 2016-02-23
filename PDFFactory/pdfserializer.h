#ifndef PDFSERIALIZER_H
#define PDFSERIALIZER_H

#include <EditorFrameworkInterfaces/iserializer.h>

class QString;
class IDocument;

class PDFSerializer : public ISerializer
{
public:
    PDFSerializer();
    virtual IDocument *openDocument(QString fileName);
};

#endif // PDFSERIALIZER_H
