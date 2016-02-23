#ifndef IMAGEDOCUMENT_H
#define IMAGEDOCUMENT_H

#include <EditorFrameworkInterfaces/idocument.h>

#include <QString>

class QPixmap;

class ImageDocument : public IDocument
{
public:
    ImageDocument();
    virtual bool open(QString fileName);
    virtual bool save();
    virtual bool close();
    QPixmap *data() const;

private:
    QString m_fileName;
    QPixmap *m_data;
};

#endif // IMAGEDOCUMENT_H
