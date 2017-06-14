#include "home.h"
#include <QCoreApplication>
#include <QSettings>
#include <QObject>

Home::Home(QString homeName, QObject *parent) : QObject(parent), _homeName(homeName)
{
    loadValues();
}

void Home::loadValues()
{
    QSettings settings(QCoreApplication::applicationDirPath() + "/values.cfg", QSettings::IniFormat);
    settings.beginGroup(_homeName);

    kitchen.setCondition(     settings.value("kitchen_condition",      false).toBool());
    kitchen.setWater(         settings.value("kitchen_water",          false).toBool());
    kitchen.setTemperature(   settings.value("kitchen_temperature",        0).toInt());

    livingroom.setCondition(  settings.value("livingroom_condition",   false).toBool());
    livingroom.setWater(      settings.value("livingroom_water",       false).toBool());
    livingroom.setTemperature(settings.value("livingroom_temperature",     0).toInt());

    restroom.setCondition(    settings.value("restroom_condition",     false).toBool());
    restroom.setWater(        settings.value("restroom_water",         false).toBool());
    restroom.setTemperature(  settings.value("restroom_temperature",       0).toInt());

    room1.setCondition(       settings.value("room1_condition",        false).toBool());
    room1.setWater(           settings.value("room1_water",            false).toBool());
    room1.setTemperature(     settings.value("room1_temperature",          0).toInt());

    room2.setCondition(       settings.value("room2_condition",        false).toBool());
    room2.setWater(           settings.value("room2_water",            false).toBool());
    room2.setTemperature(     settings.value("room2_temperature",          0).toInt());

    room3.setCondition(       settings.value("room3_condition",        false).toBool());
    room3.setWater(           settings.value("room3_water",            false).toBool());
    room3.setTemperature(     settings.value("room3_temperature",          0).toInt());

    settings.endGroup();
}

void Home::saveValues()
{
    QSettings settings(QCoreApplication::applicationDirPath() + "/values.cfg", QSettings::IniFormat);
    settings.beginGroup(_homeName);

    settings.setValue("kitchen_condition",      kitchen.getCondition()     );
    settings.setValue("kitchen_water",          kitchen.getWater()         );
    settings.setValue("kitchen_temperature",    kitchen.getTemperature()   );

    settings.setValue("livingroom_condition",   livingroom.getCondition()  );
    settings.setValue("livingroom_water",       livingroom.getWater()      );
    settings.setValue("livingroom_temperature", livingroom.getTemperature());

    settings.setValue("restroom_condition",     restroom.getCondition()    );
    settings.setValue("restroom_water",         restroom.getWater()        );
    settings.setValue("restroom_temperature",   restroom.getTemperature()  );

    settings.setValue("room1_condition",        room1.getCondition()       );
    settings.setValue("room1_water",            room1.getWater()           );
    settings.setValue("room1_temperature",      room1.getTemperature()     );

    settings.setValue("room2_condition",        room2.getCondition()       );
    settings.setValue("room2_water",            room2.getWater()           );
    settings.setValue("room2_temperature",      room2.getTemperature()     );

    settings.setValue("room3_condition",        room3.getCondition()       );
    settings.setValue("room3_water",            room3.getWater()           );
    settings.setValue("room3_temperature",      room3.getTemperature()     );

    settings.endGroup();
    settings.sync();
}
