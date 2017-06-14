#include "valuesDialog.h"
#include "ui_valuesDialog.h"
#include <QDebug>

ValuesDialog::ValuesDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::ValuesDialog)
{
    ui->setupUi(this);
}

ValuesDialog::~ValuesDialog()
{
    delete ui;
}

QString ValuesDialog::getName() const
{
    return _roomName;
}

bool ValuesDialog::getWater() const
{
    return ui->checkBox_2->checkState();
}

int ValuesDialog::getTemperature() const
{
    return ui->spinBox->value();
}

bool ValuesDialog::getCondition() const
{
    return ui->checkBox->checkState();
}

void ValuesDialog::setName(const QString roomName)
{
    _roomName = roomName;
    setWindowTitle(_roomName);
}

void ValuesDialog::setCondition(const bool value)
{
    ui->checkBox->setChecked(value);
}

void ValuesDialog::setWater(const bool value)
{
    ui->checkBox_2->setChecked(value);
}

void ValuesDialog::setTemperature(const int value)
{
    ui->horizontalSlider->setValue(value);
    ui->spinBox->setValue(value);
}
