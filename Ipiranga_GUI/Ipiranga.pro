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
    UserPages/friendspage.cpp \
    UserPages/searchresult.cpp \
    layout/searchs.cpp \
    layout/historiclayout.cpp \
    layout/friendslayout.cpp \
    ../src/Account.cpp \
    ../src/Ads.cpp \
    ../src/Deals.cpp \
    ../src/Callbacks.cpp \
    ../src/Historic.cpp \
    ../src/Payment.cpp \
    ../src/Search.cpp \
    ../src/Security.cpp \
    layout/adslayout.cpp \
    UserPages/advertise.cpp

HEADERS += \
        loginuser.h \
        userapp.h \
        formregister.h \
        ../include/User.hpp \
        UserPages/initialpage.h \
        UserPages/editprofile.h \
    UserPages/friendspage.h \
    UserPages/advertise.h \
    UserPages/searchresult.h \
    layout/searchs.h \
    layout/historiclayout.h \
    layout/friendslayout.h \
    ../include/Account.hpp \
    ../include/Ads.hpp \
    ../include/Deals.hpp \
    ../include/Callbacks.hpp \
    ../include/Historic.hpp \
    ../include/Payment.hpp \
    ../include/Search.hpp \
    ../include/Security.hpp \
    layout/adslayout.h

FORMS += \
        loginuser.ui \
        userapp.ui \
        formregister.ui \
        UserPages/initialpage.ui \
        UserPages/editprofile.ui \
    UserPages/friendspage.ui \
    UserPages/advertise.ui \
    UserPages/searchresult.ui \
    layout/searchs.ui \
    layout/historiclayout.ui \
    layout/friendslayout.ui \
    layout/adslayout.ui
RESOURCES += \
    resources.qrc
