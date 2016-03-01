#include "imagefactory.h"

#include <EditorFrameworkInterfaces/icore.h>
#include <QStringList>

#include "imageeditor.h"
#include "imageserializer.h"
#include "imageverifier.h"
#include "imagetoolbox.h"

ImageFactory::ImageFactory(QObject *parent):
    IPlugin(parent),
    m_extensions(new QStringList)
{
}

ImageFactory::~ImageFactory()
{
    delete m_extensions;
}

bool ImageFactory::initialize(ICore *core)
{
    addExtension("*.jpg");
    addExtension("*.png");
    addExtension("*.gif");
    return true;
}

QStringList *ImageFactory::supportedExtensions() const
{
    return m_extensions;
}

bool ImageFactory::addExtension(const char *extension)
{
    if(!m_extensions->contains(extension))
    {
        m_extensions->operator <<(extension);
        return true;
    }
    return false;
}

Editor *ImageFactory::createEditor() const
{
    return new ImageEditor;
}

ISerializer *ImageFactory::createSerializer() const
{
    return new ImageSerializer;
}

IVerifier *ImageFactory::createVerifier() const
{
    return new ImageVerifier;
}

Toolbox *ImageFactory::createToolbox() const
{
    return new ImageToolbox;
}
