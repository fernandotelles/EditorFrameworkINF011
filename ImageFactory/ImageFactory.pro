#-------------------------------------------------
#
# Project created by QtCreator 2016-01-20T09:25:16
#
#-------------------------------------------------

QT       -= gui

TARGET = ImageFactory
TEMPLATE = lib
CONFIG += plugin

DEFINES += IMAGEFACTORY_LIBRARY

SOURCES += imagefactory.cpp \
    imageeditor.cpp \
    imageverifier.cpp \
    imageserializer.cpp \
    imagetoolbox.cpp \
    imagedocument.cpp

HEADERS += imagefactory.h\
        imagefactory_global.h \
    imageeditor.h \
    imageverifier.h \
    imageserializer.h \
    imagetoolbox.h \
    imagedocument.h

DESTDIR = ../EditorFramework/plugins

unix {
    target.path = /usr/lib
    INSTALLS += target
    headers.files = $$HEADERS
    headers.path = /usr/include/TestPlugin
    INSTALLS += headers
}

DISTFILES += \
    imagefactoryplugin.json

unix|win32: LIBS += -lEditorFrameworkInterfaces
