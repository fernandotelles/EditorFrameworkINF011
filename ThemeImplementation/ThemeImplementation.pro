#-------------------------------------------------
#
# Project created by QtCreator 2016-03-01T10:54:47
#
#-------------------------------------------------

QT       -= gui

TARGET = ThemeImplementation
TEMPLATE = lib

DEFINES += THEMEIMPLEMENTATION_LIBRARY

SOURCES += themeimplementation.cpp

HEADERS += themeimplementation.h\
        themeimplementation_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
