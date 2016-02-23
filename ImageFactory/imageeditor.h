#ifndef IMAGEEDITOR_H
#define IMAGEEDITOR_H

#include <EditorFrameworkInterfaces/editor.h>

class ImageEditor : public Editor
{
public:
    ImageEditor();
    virtual QWidget *view() const;
};

#endif // IMAGEEDITOR_H
