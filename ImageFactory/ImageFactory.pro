#-------------------------------------------------
#
# Project created by QtCreator 2016-01-20T09:25:16
#
#-------------------------------------------------

QT       -= gui

TARGET = ImageFactory
TEMPLATE = lib

DEFINES += IMAGEFACTORY_LIBRARY

SOURCES += imagefactory.cpp \
    imageeditor.cpp \
    imageverifier.cpp \
    imageserializer.cpp \
    imagetoolbox.cpp

HEADERS += imagefactory.h\
        imagefactory_global.h \
    imageeditor.h \
    imageverifier.h \
    imageserializer.h \
    imagetoolbox.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
