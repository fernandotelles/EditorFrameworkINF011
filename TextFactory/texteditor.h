#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <EditorFrameworkInterfaces/editor.h>

class TextEditor : public Editor
{
public:
    TextEditor();
    virtual QWidget *view() const;
};

#endif // TEXTEDITOR_H
