/****************************************************************************
** Meta object code from reading C++ file 'adminpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Ipiranga_GUI/adminpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminPage_t {
    QByteArrayData data[11];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminPage_t qt_meta_stringdata_AdminPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AdminPage"
QT_MOC_LITERAL(1, 10, 30), // "on_Button_search_users_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 34), // "on_line_search_users_returnPr..."
QT_MOC_LITERAL(4, 77, 39), // "on_line_search_transation_ret..."
QT_MOC_LITERAL(5, 117, 35), // "on_Button_search_transation_c..."
QT_MOC_LITERAL(6, 153, 30), // "on_Button_delete_users_clicked"
QT_MOC_LITERAL(7, 184, 36), // "on_Button_delete_transations_..."
QT_MOC_LITERAL(8, 221, 33), // "on_Button_delete_historic_cli..."
QT_MOC_LITERAL(9, 255, 32), // "on_line_search_users_textChanged"
QT_MOC_LITERAL(10, 288, 37) // "on_line_search_transation_tex..."

    },
    "AdminPage\0on_Button_search_users_clicked\0"
    "\0on_line_search_users_returnPressed\0"
    "on_line_search_transation_returnPressed\0"
    "on_Button_search_transation_clicked\0"
    "on_Button_delete_users_clicked\0"
    "on_Button_delete_transations_clicked\0"
    "on_Button_delete_historic_clicked\0"
    "on_line_search_users_textChanged\0"
    "on_line_search_transation_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
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

void AdminPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminPage *_t = static_cast<AdminPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Button_search_users_clicked(); break;
        case 1: _t->on_line_search_users_returnPressed(); break;
        case 2: _t->on_line_search_transation_returnPressed(); break;
        case 3: _t->on_Button_search_transation_clicked(); break;
        case 4: _t->on_Button_delete_users_clicked(); break;
        case 5: _t->on_Button_delete_transations_clicked(); break;
        case 6: _t->on_Button_delete_historic_clicked(); break;
        case 7: _t->on_line_search_users_textChanged(); break;
        case 8: _t->on_line_search_transation_textChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AdminPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdminPage.data,
      qt_meta_data_AdminPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdminPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminPage.stringdata0))
        return static_cast<void*>(const_cast< AdminPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdminPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
