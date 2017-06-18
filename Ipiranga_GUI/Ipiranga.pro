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
    formregister.cpp \
    loginuser.cpp \
    main.cpp \
    userapp.cpp \
    UserPages/advertise.cpp \
    UserPages/editprofile.cpp \
    UserPages/friendspage.cpp \
    UserPages/historicpage.cpp \
    UserPages/initialpage.cpp \
    UserPages/searchresult.cpp \
    layout/adslayout.cpp \
    layout/friendslayout.cpp \
    layout/historiclayout.cpp \
    ../src/Account.cpp \
    ../src/Ads.cpp \
    ../src/Callbacks.cpp \
    ../src/Deals.cpp \
    ../src/Historic.cpp \
    ../src/Payment.cpp \
    ../src/Search.cpp \
    ../src/Security.cpp \
    ../src/User.cpp \
    layout/serachfriends.cpp \
    layout/searchads.cpp



HEADERS += \
    formregister.h \
    loginuser.h \
    userapp.h \
    UserPages/advertise.h \
    UserPages/editprofile.h \
    UserPages/friendspage.h \
    UserPages/historicpage.h \
    UserPages/initialpage.h \
    UserPages/searchresult.h \
    layout/adslayout.h \
    layout/friendslayout.h \
    layout/historiclayout.h \
    ../include/Account.hpp \
    ../include/Ads.hpp \
    ../include/Callbacks.hpp \
    ../include/Deals.hpp \
    ../include/Historic.hpp \
    ../include/Payment.hpp \
    ../include/Search.hpp \
    ../include/Security.hpp \
    ../include/User.hpp \
    layout/serachfriends.h \
    layout/searchads.h



FORMS += \
    formregister.ui \
    loginuser.ui \
    userapp.ui \
    UserPages/advertise.ui \
    UserPages/editprofile.ui \
    UserPages/friendspage.ui \
    UserPages/historicpage.ui \
    UserPages/initialpage.ui \
    UserPages/searchresult.ui \
    layout/adslayout.ui \
    layout/friendslayout.ui \
    layout/historiclayout.ui \
    layout/serachfriends.ui \
    layout/searchads.ui

RESOURCES += \
    resources.qrc
