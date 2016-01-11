#-------------------------------------------------
#
# Project created by QtCreator 2015-12-15T18:55:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EditorFrameWork
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    uicontroller.cpp \
    core.cpp \
    documentcontroller.cpp \
    plugincontroller.cpp

HEADERS  += mainwindow.h \
    uicontroller.h \
    core.h \
    documentcontroller.h \
    plugincontroller.h

FORMS    += mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-EditorFrameworkInterfaces-Desktop-Debug/release/ -lEditorFrameworkInterfaces
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-EditorFrameworkInterfaces-Desktop-Debug/debug/ -lEditorFrameworkInterfaces
else:unix: LIBS += -L$$PWD/../build-EditorFrameworkInterfaces-Desktop-Debug/ -lEditorFrameworkInterfaces

INCLUDEPATH += $$PWD/../build-EditorFrameworkInterfaces-Desktop-Debug
DEPENDPATH += $$PWD/../build-EditorFrameworkInterfaces-Desktop-Debug
