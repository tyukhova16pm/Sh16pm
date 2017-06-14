#-------------------------------------------------
#
# Project created by QtCreator 2017-06-11T15:49:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gleb
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    help.cpp \
    home.cpp \
    room.cpp \
    valuesDialog.cpp

HEADERS  += mainwindow.h \
    help.h \
    home.h \
    room.h \
    valuesDialog.h

FORMS    += mainwindow.ui \
    help.ui \
    valuesDialog.ui
