#ifndef TEXTTOOLBOX_H
#define TEXTTOOLBOX_H

#include <EditorFrameworkInterfaces/toolbox.h>

#include <QObject>

#include <EditorFrameworkInterfaces/itoolboximplementation.h>

class TextToolbox : public Toolbox
{
    Q_OBJECT
public:
    TextToolbox(QObject *parent = 0, IToolboxImplementation *impl = 0);
    ~TextToolbox();
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

#endif // TEXTTOOLBOX_H
