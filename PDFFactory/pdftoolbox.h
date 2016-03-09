#ifndef PDFTOOLBOX_H
#define PDFTOOLBOX_H

#include <EditorFrameworkInterfaces/toolbox.h>

class PDFToolbox : public Toolbox
{
    Q_OBJECT
public:
    PDFToolbox(QObject *parent = 0, IToolboxImplementation *impl = 0);
    ~PDFToolbox();
    virtual QList<QAction *> *toolButtonList() const;
    void addButton(QAction *action);


private:
    void initialize();

private Q_SLOTS:
    void clic1();
    void clic2();
    void clic3();

private:
    QList<QAction *> *m_toolButtonList;

};

#endif // PDFTOOLBOX_H
