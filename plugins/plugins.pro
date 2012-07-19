#-------------------------------------------------
#
# Project created by QtCreator 2012-07-18T22:55:02
#
#-------------------------------------------------

TARGET = ../build/plugins
TEMPLATE = lib

DEFINES += PLUGINS_LIBRARY

SOURCES += imagereader/imagereader_qt.cpp

HEADERS += imagereader/imagereader_qt.h

INCLUDEPATH += ../libplok

LIBS += -L../build -lplok
