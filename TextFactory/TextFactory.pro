#-------------------------------------------------
#
# Project created by QtCreator 2016-01-20T09:14:13
#
#-------------------------------------------------

QT       -= gui

TARGET = TextFactory
TEMPLATE = lib

DEFINES += TEXTFACTORY_LIBRARY

SOURCES += textfactory.cpp \
    texteditor.cpp \
    textverifier.cpp \
    textserializer.cpp \
    texttoolbox.cpp

HEADERS += textfactory.h\
        textfactory_global.h \
    texteditor.h \
    textverifier.h \
    textserializer.h \
    texttoolbox.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
