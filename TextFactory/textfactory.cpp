#include "textfactory.h"

#include <QStringList>

TextFactory::TextFactory(QObject *parent):
    IPlugin(parent),
    m_extensions(new QStringList)
{
}

TextFactory::~TextFactory()
{
    delete m_extensions;
}

bool TextFactory::initialize(ICore *core)
{
    addExtension("*.txt");
    return true;
}

QStringList *TextFactory::supportedExtensions() const
{
    return m_extensions;
}

bool TextFactory::addExtension(const char *extension)
{
    if(!m_extensions->contains(extension))
    {
        m_extensions->operator <<(extension);
        return true;
    }
    return false;
}
