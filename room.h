#ifndef ROOM_H
#define ROOM_H

#include <QObject>

class Room : public QObject
{
    Q_OBJECT
public:
    explicit Room(QObject *parent = nullptr);

    bool getCondition()   {return _condition;}
    bool getWater()       {return _water;}
    int  getTemperature() {return _temperature;}

private:
    bool _condition;
    bool _water;
    int  _temperature;

public slots:
    void setCondition(const bool value)  {_condition = value;}
    void setWater(const bool value)      {_water = value;}
    void setTemperature(const int value) {_temperature = value;}
};

#endif // ROOM_H
