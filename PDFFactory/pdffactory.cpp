#include "pdffactory.h"

#include <EditorFrameworkInterfaces/icore.h>
#include "pdfeditor.h"
#include "pdfserializer.h"
#include "pdfverifier.h"
#include "pdftoolbox.h"

#include <QStringList>

PDFFactory::PDFFactory(QObject *parent) :
    IPlugin(parent),
    m_extensions(new QStringList)
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

Editor *PDFFactory::createEditor() const
{
    return new PDFEditor;
}

ISerializer *PDFFactory::createSerializer() const
{
    return new PDFSerializer;
}

IVerifier *PDFFactory::createVerifier() const
{
    return new PDFVerifier;
}

Toolbox *PDFFactory::createToolbox() const
{
    return new PDFToolbox;
}
