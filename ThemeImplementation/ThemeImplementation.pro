#-------------------------------------------------
#
# Project created by QtCreator 2016-03-01T10:54:47
#
#-------------------------------------------------

QT       -= gui

TARGET = ThemeImplementation
TEMPLATE = lib
CONFIG += plugin

DEFINES += THEMEIMPLEMENTATION_LIBRARY

SOURCES += themeimplementation.cpp

HEADERS += themeimplementation.h\
        themeimplementation_global.h

DESTDIR = ../EditorFramework/plugins

unix {
    target.path = /usr/lib
    INSTALLS += target
    headers.files = $$HEADERS
    headers.path = /usr/include/TestPlugin
    INSTALLS += headers
}

DISTFILES += \
    themeimplementationplugin.json

unix|win32: LIBS += -lEditorFrameworkInterfaces
