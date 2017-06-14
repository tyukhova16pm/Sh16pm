#ifndef HOME_H
#define HOME_H

#include "room.h"
#include <QObject>

class Home : public QObject
{
    Q_OBJECT
public:
    explicit Home(QString homeName, QObject *parent = nullptr);

    Room kitchen;
    Room livingroom;
    Room restroom;
    Room room1;
    Room room2;
    Room room3;

private:
    QString _homeName;

public slots:
    void loadValues();
    void saveValues();
};

#endif // HOME_H
