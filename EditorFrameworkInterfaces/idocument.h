#ifndef IDOCUMENT_H
#define IDOCUMENT_H

#include "editorframeworkinterfaces_global.h"

class QString;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT IDocument
{
public:
    IDocument() {}
    virtual ~IDocument() {}
    virtual bool open(QString fileName) = 0;
    virtual bool save() = 0;
    virtual bool close() = 0;
};

#endif // IDOCUMENT_H
