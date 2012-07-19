#-------------------------------------------------
#
# Project created by QtCreator 2012-07-18T22:55:02
#
#-------------------------------------------------

TARGET = ../build/plugins/plugins
TEMPLATE = lib
CONFIG  += plugin
DEFINES += PLUGINS_LIBRARY

SOURCES += imagereader/imagereader_qt.cpp

HEADERS += imagereader/imagereader_qt.h

INCLUDEPATH += ../libplok

LIBS += -L. -L../build -lplok
OTHER_FILES += \
    imagereader.json
INSTALLS += target sources
