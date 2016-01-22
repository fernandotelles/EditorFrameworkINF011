#include "imagefactory.h"

#include <QList>
#include <QStringList>

ImageFactory::ImageFactory():
    m_extensions(new QStringList)
{
    this->addExtension("jpg");
    this->addExtension("png");
    this->addExtension("gif");
}

ImageFactory::~ImageFactory()
{
    delete m_extensions;
}

QStringList *ImageFactory::supportedExtensions() const
{
    return m_extensions;
}

bool ImageFactory::addExtension(const char *extension)
{
    m_extensions->operator <<(extension);
}
