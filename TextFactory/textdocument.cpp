#include "textdocument.h"

#include <QString>
#include <QStringList>
#include <QFile>
#include <QIODevice>
#include <QBuffer>
#include <QTextStream>
#include <QDebug>

TextDocument::TextDocument() :
    m_data(new QStringList)
{

}

bool TextDocument::open(QString fileName)
{
    qDebug()<<"Opening TextDocument";
    this->m_fileName = fileName;
    m_data->clear();

    QFile file(m_fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream out(&file);
    while (!out.atEnd())
    {
        QString line = out.readLine();
        m_data->append(line);
    }
    file.close();
    return true;
}

bool TextDocument::save()
{
    return false;
}

bool TextDocument::close()
{
    return false;
}

QStringList *TextDocument::data() const
{
    return m_data;
}
