#include "pdffactory.h"

#include <EditorFrameworkInterfaces/icore.h>

#include <QStringList>

PDFFactory::PDFFactory()
{
}

PDFFactory::~PDFFactory()
{
    delete m_extensions;
}

bool PDFFactory::initialize(ICore *core)
{
    addExtension("*.pdf");
    return true;
}

QStringList *PDFFactory::supportedExtensions() const
{
    return m_extensions;
}

bool PDFFactory::addExtension(const char *extension)
{
    if(!m_extensions->contains(extension))
    {
        m_extensions->operator <<(extension);
        return true;
    }
    return false;
}
