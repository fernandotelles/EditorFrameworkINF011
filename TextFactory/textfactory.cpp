#include "textfactory.h"

#include <QStringList>

TextFactory::TextFactory():
    m_extensions(new QStringList)
{
    this->addExtension("txt");
}

TextFactory::~TextFactory()
{
    delete m_extensions;
}

QStringList *TextFactory::supportedExtensions() const
{
    return m_extensions;
}

bool TextFactory::addExtension(const char *extension)
{
//    QStringList::ConstIterator iterator = m_extensions->cbegin();
//    for(;iterator < m_extensions->cend();++iterator)
    m_extensions->operator <<(extension);
}
