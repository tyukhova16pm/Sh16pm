/********************************************************************************
** Form generated from reading UI file 'valuesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALUESDIALOG_H
#define UI_VALUESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ValuesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ValuesDialog)
    {
        if (ValuesDialog->objectName().isEmpty())
            ValuesDialog->setObjectName(QStringLiteral("ValuesDialog"));
        ValuesDialog->resize(259, 144);
        ValuesDialog->setMinimumSize(QSize(259, 144));
        ValuesDialog->setMaximumSize(QSize(259, 144));
        verticalLayout = new QVBoxLayout(ValuesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ValuesDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        checkBox = new QCheckBox(ValuesDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(ValuesDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        checkBox_2 = new QCheckBox(ValuesDialog);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_2->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(ValuesDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spinBox = new QSpinBox(ValuesDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMinimum(10);
        spinBox->setMaximum(35);

        horizontalLayout_3->addWidget(spinBox);

        horizontalSlider = new QSlider(ValuesDialog);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(10);
        horizontalSlider->setMaximum(35);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(ValuesDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(ValuesDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(ValuesDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), ValuesDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), ValuesDialog, SLOT(reject()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(ValuesDialog);
    } // setupUi

    void retranslateUi(QDialog *ValuesDialog)
    {
        ValuesDialog->setWindowTitle(QApplication::translate("ValuesDialog", "Room#1", Q_NULLPTR));
        label->setText(QApplication::translate("ValuesDialog", "Electricity", Q_NULLPTR));
        checkBox->setText(QApplication::translate("ValuesDialog", "On", Q_NULLPTR));
        label_2->setText(QApplication::translate("ValuesDialog", "Access of water         ", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("ValuesDialog", "On", Q_NULLPTR));
        label_3->setText(QApplication::translate("ValuesDialog", "Temperature", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ValuesDialog", "OK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ValuesDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ValuesDialog: public Ui_ValuesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALUESDIALOG_H
