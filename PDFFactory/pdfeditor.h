#ifndef PDFEDITOR_H
#define PDFEDITOR_H

#include <EditorFrameworkInterfaces/editor.h>

class PDFEditor : public Editor
{
public:
    PDFEditor();
    virtual QWidget *view() const;
};

#endif // PDFEDITOR_H
