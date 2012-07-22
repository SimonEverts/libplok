#-------------------------------------------------
#
# Project created by QtCreator 2012-07-18T21:38:34
#
#-------------------------------------------------

TARGET = plok
DESTDIR = ../build
TEMPLATE = lib

DEFINES += LIBPLOK_LIBRARY

SOURCES += 	image/image.cpp \
    core/pluginloader.cpp

HEADERS += 	image/image.h \
                image/imagereader.h \
                image/imagereaderfactory.h \
    image/library.h \
    image/imageresolver.h \
    core/pluginloader.h \
    core/plokplugin.h \
    image/imageresolverfactory.h

