#include "imagedocument.h"

#include <QtGui/QPixmap>
#include <QtGui/QImage>
#include <QtGui/QImageReader>
#include <QDebug>


ImageDocument::ImageDocument() :
    m_data(new QPixmap)
{

}

bool ImageDocument::open(QString fileName)
{
    qDebug()<<"Opening ImageDocument";
    this->m_fileName = fileName;
    m_data->load(m_fileName);

    if (m_data->isNull())
        return false;

    return true;
}

bool ImageDocument::save()
{
    return false;
}

bool ImageDocument::close()
{
    return false;
}

QPixmap *ImageDocument::data() const
{
    return m_data;
}
