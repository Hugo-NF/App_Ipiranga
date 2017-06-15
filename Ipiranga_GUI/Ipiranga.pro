#------------------------------------------------------------
#
# IPIRANGA Project, created by QtCreator 2017-06-09T18:48:08
#
#------------------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ipiranga
TEMPLATE = app

LIBS += -lm ../lib/libsqlite3.a -ldl -l sqlite3

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        main.cpp \
        loginuser.cpp \
        userapp.cpp \
        formregister.cpp \
        ../src/User.cpp \
        UserPages/initialpage.cpp \
        UserPages/editprofile.cpp \
    UserPages/historic.cpp \
    UserPages/friendspage.cpp \
    UserPages/advertise.cpp

HEADERS += \
        loginuser.h \
        userapp.h \
        formregister.h \
        ../include/User.hpp \
        UserPages/initialpage.h \
        UserPages/editprofile.h \
    UserPages/historic.h \
    UserPages/friendspage.h \
    UserPages/advertise.h

FORMS += \
        loginuser.ui \
        userapp.ui \
        formregister.ui \
        UserPages/initialpage.ui \
        UserPages/editprofile.ui \
    UserPages/historic.ui \
    UserPages/friendspage.ui \
    UserPages/advertise.ui

RESOURCES += \
    resources.qrc
