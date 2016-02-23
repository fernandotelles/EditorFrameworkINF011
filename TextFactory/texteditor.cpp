#include "texteditor.h"

#include <QtWidgets/QWidget>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QTextEdit>
#include <QString>
#include <QDebug>

#include "textdocument.h"

TextEditor::TextEditor()
{

}

QWidget *TextEditor::view() const
{
    qDebug()<<"Getting viewer";
    QTextEdit *view = new QTextEdit();
    foreach (QString line, *dynamic_cast<TextDocument *>(m_document)->data())
        view->append(line + "\n");

    return view;
}
