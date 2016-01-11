#ifndef IUICONTROLLER_H
#define IUICONTROLLER_H

class QMenu;
class QString;

class IUIController
{

public:
//    IUIController();
//    virtual ~IUIController();
    //      |-> This return should be an UI object
    virtual QMenu* addMenuItem(QString menu, QString menuItem) = 0;
};

#endif // IUICONTROLLER_H
