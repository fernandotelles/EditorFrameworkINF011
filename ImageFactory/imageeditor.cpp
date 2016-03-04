#include "imageeditor.h"

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QGridLayout>
#include <QDebug>

#include "imagedocument.h"

ImageEditor::ImageEditor()
{

}

QWidget *ImageEditor::view() const
{
    QLabel *imageLabel = new QLabel;
    qDebug()<<"Getting viewer";
    imageLabel->setPixmap(*dynamic_cast<ImageDocument *>(this->m_document)->data());
    imageLabel->setBackgroundRole(QPalette::Base);
    imageLabel->setAlignment( Qt::AlignCenter );
    imageLabel->setScaledContents(true);

    QWidget *scrollWidget = new QWidget;
    scrollWidget->setLayout(new QGridLayout);
    scrollWidget->layout()->addWidget(imageLabel);

    QScrollArea *scrollArea = new QScrollArea;
    scrollArea->setBackgroundRole(QPalette::Dark);
    scrollArea->setWidget(scrollWidget);
    scrollArea->setWidgetResizable(true);

    return scrollArea;
}
