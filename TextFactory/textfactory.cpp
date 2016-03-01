#include "textfactory.h"

#include <QStringList>

#include "texteditor.h"
#include "textserializer.h"
#include "textverifier.h"
#include "texttoolbox.h"

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

Editor *TextFactory::createEditor() const
{
    return new TextEditor;
}

ISerializer *TextFactory::createSerializer() const
{
    return new TextSerializer;
}

IVerifier *TextFactory::createVerifier() const
{
    return new TextVerifier;
}

Toolbox *TextFactory::createToolbox() const
{
    return new TextToolbox;
}
