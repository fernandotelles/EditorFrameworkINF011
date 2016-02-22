#ifndef DOCUMENTCONTROLLER_H
#define DOCUMENTCONTROLLER_H

#include <EditorFrameworkInterfaces/idocument.h>
#include <EditorFrameworkInterfaces/idocumentcontroller.h>
#include <EditorFrameworkInterfaces/iserializer.h>

class DocumentController : public IDocumentController
{
public:
    DocumentController();
    virtual ~DocumentController();
    virtual void setSerializer(ISerializer *serializer);
    virtual IDocument *openDocument(QString fileName);

private:
    ISerializer *m_serializer;
};

#endif // DOCUMENTCONTROLLER_H
