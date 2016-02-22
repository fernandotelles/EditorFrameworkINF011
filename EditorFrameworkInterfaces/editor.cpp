#include "editor.h"

#include "idocument.h"

Editor::~Editor()
{
    delete m_document;
}

void Editor::setDocument(IDocument *document)
{
    m_document = document;
}
