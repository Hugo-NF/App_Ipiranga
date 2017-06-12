#------------------------------------------------------------
#
# IPIRANGA Project, created by QtCreator 2017-06-09T18:48:08
#
#------------------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ipiranga
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        main.cpp \
        loginuser.cpp \
        userapp.cpp \
        formregister.cpp \
    ../src/User.cpp

HEADERS += \
        loginuser.h \
        userapp.h \
        formregister.h \
    ../include/User.hpp

FORMS += \
        loginuser.ui \
        userapp.ui \
        formregister.ui

RESOURCES += \
    resources.qrc
