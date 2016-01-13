#-------------------------------------------------
#
# Project created by QtCreator 2016-01-12T23:31:48
#
#-------------------------------------------------

QT       -= gui

TARGET = TestPlugin
TEMPLATE = lib
CONFIG += plugin

INCLUDEPATH += $$LIBS

DEFINES += TESTPLUGIN_LIBRARY

SOURCES += testplugin.cpp

HEADERS += testplugin.h\
        testplugin_global.h

DESTDIR = ../../EditorFramework/plugins

unix {
    target.path = /usr/lib
    INSTALLS += target
    headers.files = $$HEADERS
    headers.path = /usr/include/TestPlugin
    INSTALLS += headers
}

DISTFILES += \
    testplugin.json

unix|win32: LIBS += -lEditorFrameworkInterfaces
