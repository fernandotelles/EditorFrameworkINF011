#ifndef TEXTSERIALIZER_H
#define TEXTSERIALIZER_H

#include <EditorFrameworkInterfaces/iserializer.h>

class TextSerializer : public ISerializer
{
public:
    TextSerializer();
    virtual IDocument *openDocument(QString fileName);
};

#endif // TEXTSERIALIZER_H
