#ifndef TEXTDOCUMENT_H
#define TEXTDOCUMENT_H

#include <EditorFrameworkInterfaces/idocument.h>

#include <QString>
#include <QStringList>

class TextDocument : public IDocument
{
public:
    TextDocument();
    virtual bool open(QString fileName);
    virtual bool save();
    virtual bool close();
    QStringList *data() const;

private:
    QString m_fileName;
    QStringList *m_data;
};

#endif // TEXTDOCUMENT_H
