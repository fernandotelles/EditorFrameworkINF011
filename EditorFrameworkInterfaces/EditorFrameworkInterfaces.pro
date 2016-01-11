#-------------------------------------------------
#
# Project created by QtCreator 2015-12-15T19:17:18
#
#-------------------------------------------------

QT       -= gui

TARGET = EditorFrameworkInterfaces
TEMPLATE = lib

DEFINES += EDITORFRAMEWORKINTERFACES_LIBRARY

SOURCES += editorframeworkinterfaces.cpp

HEADERS += editorframeworkinterfaces.h\
        editorframeworkinterfaces_global.h \
    icore.h \
    idocumentcontroller.h \
    iplugincontroller.h \
    iplugin.h \
    iuicontroller.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
