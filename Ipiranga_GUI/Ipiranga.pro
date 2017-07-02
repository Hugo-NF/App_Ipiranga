#------------------------------------------------------------
#
# IPIRANGA Project, created by QtCreator 2017-06-09T18:48:08
#
#------------------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ipiranga
TEMPLATE = app

CCFLAG  +=  -ftest-coverage -fprofile-arcs #gcov

LIBS += -lm ../lib/libsqlite3.a -ldl -l sqlite3 #SQLite3

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
    formregister.cpp \
    loginuser.cpp \
    main.cpp \
    userapp.cpp \
    adminpage.cpp \
    UserPages/advertise.cpp \
    UserPages/editprofile.cpp \
    UserPages/friendspage.cpp \
    UserPages/historicpage.cpp \
    UserPages/initialpage.cpp \
    UserPages/searchresult.cpp \
    layout/adslayout.cpp \
    layout/friendslayout.cpp \
    layout/historiclayout.cpp \
    layout/searchads.cpp \
    layout/serachfriends.cpp \
    ../src/Account.cpp \
    ../src/Ads.cpp \
    ../src/Callbacks.cpp \
    ../src/Deals.cpp \
    ../src/Friendship.cpp \
    ../src/Historic.cpp \
    ../src/Payment.cpp \
    ../src/Search.cpp \
    ../src/Security.cpp \
    ../src/User.cpp


HEADERS += \
    formregister.h \
    loginuser.h \
    userapp.h \
    adminpage.h \
    UserPages/advertise.h \
    UserPages/editprofile.h \
    UserPages/friendspage.h \
    UserPages/historicpage.h \
    UserPages/initialpage.h \
    UserPages/searchresult.h \
    layout/adslayout.h \
    layout/friendslayout.h \
    layout/historiclayout.h \
    layout/searchads.h \
    layout/serachfriends.h \
    ../include/Account.hpp \
    ../include/Ads.hpp \
    ../include/Callbacks.hpp \
    ../include/Deals.hpp \
    ../include/Friendship.hpp \
    ../include/Historic.hpp \
    ../include/Payment.hpp \
    ../include/Search.hpp \
    ../include/Security.hpp \
    ../include/User.hpp


FORMS += \
    formregister.ui \
    loginuser.ui \
    userapp.ui \
    adminpage.ui \
    UserPages/advertise.ui \
    UserPages/editprofile.ui \
    UserPages/friendspage.ui \
    UserPages/historicpage.ui \
    UserPages/initialpage.ui \
    UserPages/searchresult.ui \
    layout/adslayout.ui \
    layout/friendslayout.ui \
    layout/historiclayout.ui \
    layout/searchads.ui \
    layout/serachfriends.ui


RESOURCES += \
    resources.qrc
