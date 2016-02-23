#include "pdfeditor.h"
#include "pdfdocument.h"

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtGui/QGridLayout>
#include <QDebug>

PDFEditor::PDFEditor()
{

}

QWidget *PDFEditor::view() const
{

    qDebug()<<"Getting viewer";

    QWidget *scrollWidget = new QWidget;
    scrollWidget->setLayout(new QGridLayout);

    foreach (QPixmap pixmap, *dynamic_cast<PDFDocument *>(this->m_document)->data())
    {
        QLabel *imageLabel = new QLabel;
        imageLabel->setPixmap(pixmap);

        imageLabel->setBackgroundRole(QPalette::Base);
        imageLabel->setAlignment( Qt::AlignCenter );
        imageLabel->setScaledContents(true);

        scrollWidget->layout()->addWidget(imageLabel);
    }

    QScrollArea *scrollArea = new QScrollArea;
    scrollArea->setBackgroundRole(QPalette::Dark);
    scrollArea->setWidget(scrollWidget);
    scrollArea->setWidgetResizable(true);

    return scrollArea;
}
