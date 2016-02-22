#ifndef IDOCUMENTCONTROLLER_H
#define IDOCUMENTCONTROLLER_H

#include "editorframeworkinterfaces_global.h"

class QString;
class ISerializer;
class IDocument;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IDocumentController
{
public:
    IDocumentController() {}
    virtual ~IDocumentController() {}
    virtual void setSerializer(ISerializer *serializer) = 0;
    virtual IDocument *openDocument(QString fileName) = 0;
};

#endif // IDOCUMENTCONTROLLER_H
