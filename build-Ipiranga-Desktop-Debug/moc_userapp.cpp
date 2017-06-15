/****************************************************************************
** Meta object code from reading C++ file 'userapp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Ipiranga_GUI/userapp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserApp_t {
    QByteArrayData data[10];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserApp_t qt_meta_stringdata_UserApp = {
    {
QT_MOC_LITERAL(0, 0, 7), // "UserApp"
QT_MOC_LITERAL(1, 8, 22), // "on_Button_edit_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 22), // "on_Button_home_clicked"
QT_MOC_LITERAL(4, 55, 25), // "on_Button_friends_clicked"
QT_MOC_LITERAL(5, 81, 26), // "on_Button_historic_clicked"
QT_MOC_LITERAL(6, 108, 27), // "on_Button_advertise_clicked"
QT_MOC_LITERAL(7, 136, 24), // "on_Button_logout_clicked"
QT_MOC_LITERAL(8, 161, 28), // "on_line_search_returnPressed"
QT_MOC_LITERAL(9, 190, 24) // "on_Button_search_clicked"

    },
    "UserApp\0on_Button_edit_clicked\0\0"
    "on_Button_home_clicked\0on_Button_friends_clicked\0"
    "on_Button_historic_clicked\0"
    "on_Button_advertise_clicked\0"
    "on_Button_logout_clicked\0"
    "on_line_search_returnPressed\0"
    "on_Button_search_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserApp *_t = static_cast<UserApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Button_edit_clicked(); break;
        case 1: _t->on_Button_home_clicked(); break;
        case 2: _t->on_Button_friends_clicked(); break;
        case 3: _t->on_Button_historic_clicked(); break;
        case 4: _t->on_Button_advertise_clicked(); break;
        case 5: _t->on_Button_logout_clicked(); break;
        case 6: _t->on_line_search_returnPressed(); break;
        case 7: _t->on_Button_search_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject UserApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UserApp.data,
      qt_meta_data_UserApp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserApp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UserApp.stringdata0))
        return static_cast<void*>(const_cast< UserApp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int UserApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
