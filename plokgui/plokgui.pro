#-------------------------------------------------
#
# Project created by QtCreator 2012-07-19T11:17:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = plokgui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += ../libplok

LIBS += -L../builb -L.-lplok
TARGET = ../build/gui

mac {
  CONFIG -= app_bundle
}
