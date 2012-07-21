#-------------------------------------------------
#
# Project created by QtCreator 2012-07-19T11:17:26
#
#-------------------------------------------------

 QT += gui quick

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app


SOURCES += main.cpp \
    plugincontroller.cpp

HEADERS  += \
    plugincontroller.h


INCLUDEPATH += ../libplok

LIBS += -L. -L../build -lplok
TARGET = gui
DESTDIR = ../build
mac {
  CONFIG -= app_bundle
}

OTHER_FILES += \
    qml/MainWindow.qml \
    qml/StatusBar.qml

RESOURCES += \
    qml/plok.qrc
