#ifndef IMAGETOOLBOX_H
#define IMAGETOOLBOX_H

#include <QObject>

#include <EditorFrameworkInterfaces/toolbox.h>
#include <EditorFrameworkInterfaces/itoolboximplementation.h>

class ImageToolbox : public Toolbox
{
    Q_OBJECT
public:
    ImageToolbox(QObject *parent = 0, IToolboxImplementation *impl = 0);
    ~ImageToolbox();
    virtual QList<QAction *> *toolButtonList() const;
    void addButton(QAction *action);


private:
    void initialize();

private Q_SLOTS:
    void contactClic();

private:
    QList<QAction *> *m_toolButtonList;

};

#endif // IMAGETOOLBOX_H
