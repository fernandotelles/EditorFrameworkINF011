#include "pdfdocument.h"

#include <QString>
#include <QList>
#include <QtGui/QPixmap>
#include <QtGui/QImage>

#include <poppler/qt5/poppler-qt5.h>

PDFDocument::PDFDocument() :
    m_data(new QList<QPixmap>)
{

}

bool PDFDocument::open(QString fileName)
{
    this->m_fileName = fileName;

    Poppler::Document *document = Poppler::Document::load(m_fileName);

    if (!document || document->isLocked())
    {
        delete document;
        return false;
    }

    // Paranoid safety check
    if (document == 0)
        return false;

    for (int i = 0; i < document->numPages(); ++i)
    {
        Poppler::Page *pdfPage = document->page(i);

        if (!pdfPage)
            return false;

        QImage image = pdfPage->renderToImage();

        if (image.isNull())
            return false;

        m_data->append(QPixmap::fromImage(image));
        delete pdfPage;
    }

    delete document;
    return true;
}

bool PDFDocument::save()
{
    return false;
}

bool PDFDocument::close(){
    return false;
}

QList<QPixmap> *PDFDocument::data() const
{
    return m_data;
}
