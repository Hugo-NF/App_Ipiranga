#------------------------------------------------------------
#
# IPIRANGA Project, created by QtCreator 2017-06-09T18:48:08
#
#------------------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IPIRANGA
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        main.cpp \
        loginuser.cpp \
        userapp.cpp \
        formregister.cpp

HEADERS += \
        loginuser.h \
        userapp.h \
        formregister.h

FORMS += \
        loginuser.ui \
        userapp.ui \
        formregister.ui

RESOURCES += \
    resources.qrc
