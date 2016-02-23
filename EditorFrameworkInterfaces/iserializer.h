#ifndef ISERIALIZER_H
#define ISERIALIZER_H

#include "editorframeworkinterfaces_global.h"

class QString;
class IDocument;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT ISerializer
{

public:
    ISerializer(){}
    virtual ~ISerializer(){}
    virtual IDocument *openDocument(QString fileName) = 0;
};

#endif // ISERIALIZER_H
