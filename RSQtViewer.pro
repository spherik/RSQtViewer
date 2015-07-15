#-------------------------------------------------
#
# Project created by QtCreator 2015-03-18T11:47:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RSQtViewer
TEMPLATE = app

INCLUDEPATH += "$(RSSDK_DIR)/include" $(PCSDK)
LIBS += -L"$(RSSDK_DIR)/lib/x64/" -llibpxc #-llibpxcmd #-llibpxcutilsmd

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
