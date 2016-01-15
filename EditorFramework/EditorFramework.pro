#-------------------------------------------------
#
# Project created by QtCreator 2015-12-15T18:55:22
#
#-------------------------------------------------

QT    += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EditorFramework
TEMPLATE = app

SOURCES += main.cpp\
    mainwindow.cpp \
    uicontroller.cpp \
    core.cpp \
    documentcontroller.cpp \
    plugincontroller.cpp

HEADERS += mainwindow.h \
    uicontroller.h \
    core.h \
    documentcontroller.h \
    plugincontroller.h

FORMS += mainwindow.ui

unix|win32: LIBS += -lEditorFrameworkInterfaces
