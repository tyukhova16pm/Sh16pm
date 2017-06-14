#ifndef VALUESDIALOG_H
#define VALUESDIALOG_H

#include <QDialog>

namespace Ui {
class ValuesDialog;
}

class ValuesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ValuesDialog(QWidget *parent = 0);
    ~ValuesDialog();

    QString getName()    const;
    bool getCondition()  const;
    bool getWater()      const;
    int getTemperature() const;

private:
    QString _roomName;
    Ui::ValuesDialog *ui;

public slots:
    void setName(const QString roomName);
    void setCondition(const bool value);
    void setWater(const bool value);
    void setTemperature(const int value);
};

#endif // VALUESDIALOG_H
