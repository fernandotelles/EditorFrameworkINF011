#include "documentcontroller.h"

#include <QString>
#include <QDebug>

DocumentController::DocumentController()
{
}

DocumentController::~DocumentController()
{
    delete m_serializer;
}

void DocumentController::setSerializer(ISerializer *serializer)
{
    m_serializer = serializer;
}

 IDocument *DocumentController::openDocument(QString fileName)
{

    if(m_serializer)
        return m_serializer->openDocument(fileName);

    qDebug()<<"Serializer wasn't set";
    return NULL;
}
