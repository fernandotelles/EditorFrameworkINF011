#-------------------------------------------------
#
# Project created by QtCreator 2016-03-08T22:32:39
#
#-------------------------------------------------

QT       -= gui

TARGET = ThemeImplementation3
TEMPLATE = lib
CONFIG += plugin

DEFINES += THEMEIMPLEMENTATION3_LIBRARY

SOURCES += themeimplementation3.cpp

HEADERS += themeimplementation3.h\
        themeimplementation3_global.h

DESTDIR = ../EditorFramework/plugins

unix {
    target.path = /usr/lib
    INSTALLS += target
    headers.files = $$HEADERS
    headers.path = /usr/include/TestPlugin
    INSTALLS += headers
}

DISTFILES += \
    themeimplementationplugin.json \
    themeimplementation3plugin.json

unix|win32: LIBS += -lEditorFrameworkInterfaces
