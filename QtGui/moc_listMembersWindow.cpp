/****************************************************************************
** Meta object code from reading C++ file 'listMembersWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "listMembersWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listMembersWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_listMembersWindow_t {
    QByteArrayData data[12];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_listMembersWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_listMembersWindow_t qt_meta_stringdata_listMembersWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "listMembersWindow"
QT_MOC_LITERAL(1, 18, 21), // "on_BackButton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "on_Logout_clicked"
QT_MOC_LITERAL(4, 59, 27), // "on_allMembersButton_clicked"
QT_MOC_LITERAL(5, 87, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(6, 109, 5), // "index"
QT_MOC_LITERAL(7, 115, 33), // "on_searchExpirationButton_cli..."
QT_MOC_LITERAL(8, 149, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(9, 173, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 195, 35), // "on_getMemberPurchasesButton_c..."
QT_MOC_LITERAL(11, 231, 27) // "on_getRebatesButton_clicked"

    },
    "listMembersWindow\0on_BackButton_clicked\0"
    "\0on_Logout_clicked\0on_allMembersButton_clicked\0"
    "on_comboBox_activated\0index\0"
    "on_searchExpirationButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_clicked\0"
    "on_getMemberPurchasesButton_clicked\0"
    "on_getRebatesButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_listMembersWindow[] = {

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
       5,    1,   62,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void listMembersWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        listMembersWindow *_t = static_cast<listMembersWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BackButton_clicked(); break;
        case 1: _t->on_Logout_clicked(); break;
        case 2: _t->on_allMembersButton_clicked(); break;
        case 3: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_searchExpirationButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_getMemberPurchasesButton_clicked(); break;
        case 8: _t->on_getRebatesButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject listMembersWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_listMembersWindow.data,
      qt_meta_data_listMembersWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *listMembersWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *listMembersWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_listMembersWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int listMembersWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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