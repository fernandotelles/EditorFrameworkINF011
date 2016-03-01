#ifndef IEDITOR_H
#define IEDITOR_H

#include "editorframeworkinterfaces_global.h"

#include "idocument.h"

class QWidget;

class EDITORFRAMEWORKINTERFACESSHARED_EXPORT Editor
{

public:
    Editor() {}
    virtual ~Editor();
    void setDocument(IDocument *document);
    virtual QWidget *view() const = 0;

protected:
    IDocument *m_document;
};

#endif // IEDITOR_H
