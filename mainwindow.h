#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "home.h"
#include <QMainWindow>
#include <QList>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QList<Home*> homeList;
    int homeIndex = 0;

private slots:
    void on_commandLinkButton_clicked();
    void showValuesDialog();
    void setHomeIndex(const int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
