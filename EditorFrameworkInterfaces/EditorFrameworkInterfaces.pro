#-------------------------------------------------
#
# Project created by QtCreator 2015-12-15T19:17:18
#
#-------------------------------------------------

QT       -= gui

TARGET = EditorFrameworkInterfaces
TEMPLATE = lib

DEFINES += EDITORFRAMEWORKINTERFACES_LIBRARY

SOURCES += iuicontroller.cpp \
    editor.cpp

HEADERS +=\
    editorframeworkinterfaces_global.h \
    icore.h \
    idocumentcontroller.h \
    iplugincontroller.h \
    iplugin.h \
    iuicontroller.h \
    iabstractfactory.h \
    iserializer.h \
    iverifier.h \
    itoolbox.h \
    editor.h \
    idocument.h

unix {
    target.path = /usr/lib
    INSTALLS += target
    headers.files = $$HEADERS
    headers.path = /usr/include/EditorFrameworkInterfaces
    INSTALLS += headers
}
