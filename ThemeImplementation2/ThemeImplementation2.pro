#-------------------------------------------------
#
# Project created by QtCreator 2016-03-04T17:11:37
#
#-------------------------------------------------

QT       += widgets

QT       -= gui

TARGET = ThemeImplementation2
TEMPLATE = lib

DEFINES += THEMEIMPLEMENTATION2_LIBRARY

SOURCES += themeimplementation2.cpp

HEADERS += themeimplementation2.h\
        themeimplementation2_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DISTFILES += \
    themeimplementation2plugin.json
