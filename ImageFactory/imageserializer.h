#ifndef IMAGESERIALIZER_H
#define IMAGESERIALIZER_H

#include <EditorFrameworkInterfaces/iserializer.h>

class QString;
class IDocument;

class ImageSerializer : public ISerializer
{
public:
    ImageSerializer();
    virtual IDocument *openDocument(QString fileName);
};

#endif // IMAGESERIALIZER_H
