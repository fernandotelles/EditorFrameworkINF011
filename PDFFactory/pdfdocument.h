#ifndef PDFDOCUMENT_H
#define PDFDOCUMENT_H

#include <EditorFrameworkInterfaces/idocument.h>

#include <QString>
#include <QList>
class QPixmap;

class PDFDocument : public IDocument
{
public:
    PDFDocument();
    virtual bool open(QString fileName);
    virtual bool save();
    virtual bool close();
    QList<QPixmap> *data() const;

private:
    QString m_fileName;
    QList<QPixmap> *m_data;
};

#endif // PDFDOCUMENT_H
