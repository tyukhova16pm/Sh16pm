#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "valuesDialog.h"
#include "help.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Home *home1 = new Home("Home1");
    Home *home2 = new Home("Home2");
    Home *home3 = new Home("Home3");
    Home *home4 = new Home("Home4");

    homeList.append(home1);
    homeList.append(home2);
    homeList.append(home3);
    homeList.append(home4);

    QObject::connect(ui->pushButton,   &QPushButton::clicked, this, &MainWindow::showValuesDialog);
    QObject::connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::showValuesDialog);
    QObject::connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::showValuesDialog);
    QObject::connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::showValuesDialog);
    QObject::connect(ui->pushButton_5, &QPushButton::clicked, this, &MainWindow::showValuesDialog);
    QObject::connect(ui->pushButton_6, &QPushButton::clicked, this, &MainWindow::showValuesDialog);
    QObject::connect(ui->tabWidget,    &QTabWidget::currentChanged, this, &MainWindow::setHomeIndex);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_commandLinkButton_clicked()
{
    Help mhelp;
    if (mhelp.exec())
    {

    }
}

void MainWindow::showValuesDialog()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());

    ValuesDialog dialog;

    if( button->objectName() == "pushButton") {
        dialog.setName("Kitchen");
        dialog.setCondition(homeList[homeIndex]->kitchen.getCondition());
        dialog.setWater(homeList[homeIndex]->kitchen.getWater());
        dialog.setTemperature(homeList[homeIndex]->kitchen.getTemperature());
    }

    else if (button->objectName() == "pushButton_2") {
        dialog.setName("Livingroom");
        dialog.setCondition(homeList[homeIndex]->livingroom.getCondition());
        dialog.setWater(homeList[homeIndex]->livingroom.getWater());
        dialog.setTemperature(homeList[homeIndex]->livingroom.getTemperature());
    }

    else if (button->objectName() == "pushButton_3") {
        dialog.setName("Restroom f1");
        dialog.setCondition(homeList[homeIndex]->restroom.getCondition());
        dialog.setWater(homeList[homeIndex]->restroom.getWater());
        dialog.setTemperature(homeList[homeIndex]->restroom.getTemperature());
    }

    else if (button->objectName() == "pushButton_4") {
        dialog.setName("Bathroom");
        dialog.setCondition(homeList[homeIndex]->room1.getCondition());
        dialog.setWater(homeList[homeIndex]->room1.getWater());
        dialog.setTemperature(homeList[homeIndex]->room1.getTemperature());
    }

    else if (button->objectName() == "pushButton_5") {
        dialog.setName("Attic");
        dialog.setCondition(homeList[homeIndex]->room2.getCondition());
        dialog.setWater(homeList[homeIndex]->room2.getWater());
        dialog.setTemperature(homeList[homeIndex]->room2.getTemperature());
    }

    else if (button->objectName() == "pushButton_6") {
        dialog.setName("Restroom f2");
        dialog.setCondition(homeList[homeIndex]->room3.getCondition());
        dialog.setWater(homeList[homeIndex]->room3.getWater());
        dialog.setTemperature(homeList[homeIndex]->room3.getTemperature());
    }

    if (dialog.exec() == QDialog::Accepted) {

        if(dialog.getName() == "Kitchen") {
            homeList[homeIndex]->kitchen.setCondition(dialog.getCondition());
            homeList[homeIndex]->kitchen.setWater(dialog.getWater());
            homeList[homeIndex]->kitchen.setTemperature(dialog.getTemperature());
            homeList[homeIndex]->saveValues();
        }

        else if (dialog.getName() == "Livingroom") {
            homeList[homeIndex]->livingroom.setCondition(dialog.getCondition());
            homeList[homeIndex]->livingroom.setWater(dialog.getWater());
            homeList[homeIndex]->livingroom.setTemperature(dialog.getTemperature());
            homeList[homeIndex]->saveValues();
        }

        else if (dialog.getName() == "Restroom f1") {
            homeList[homeIndex]->restroom.setCondition(dialog.getCondition());
            homeList[homeIndex]->restroom.setWater(dialog.getWater());
            homeList[homeIndex]->restroom.setTemperature(dialog.getTemperature());
            homeList[homeIndex]->saveValues();
        }

        else if (dialog.getName() == "Bathroom") {
            homeList[homeIndex]->room1.setCondition(dialog.getCondition());
            homeList[homeIndex]->room1.setWater(dialog.getWater());
            homeList[homeIndex]->room1.setTemperature(dialog.getTemperature());
            homeList[homeIndex]->saveValues();
        }

        else if (dialog.getName() == "Attic") {
            homeList[homeIndex]->room2.setCondition(dialog.getCondition());
            homeList[homeIndex]->room2.setWater(dialog.getWater());
            homeList[homeIndex]->room2.setTemperature(dialog.getTemperature());
            homeList[homeIndex]->saveValues();
        }

        else if (dialog.getName() == "Restroom f2") {
            homeList[homeIndex]->room3.setCondition(dialog.getCondition());
            homeList[homeIndex]->room3.setWater(dialog.getWater());
            homeList[homeIndex]->room3.setTemperature(dialog.getTemperature());
            homeList[homeIndex]->saveValues();
        }
    }
}

void MainWindow::setHomeIndex(const int index)
{
    homeIndex = index;
}
