/****************************************************************************
** Meta object code from reading C++ file 'basic_setup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ConfigPanel/basic_setup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basic_setup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_basic_setup_t {
    QByteArrayData data[3];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_basic_setup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_basic_setup_t qt_meta_stringdata_basic_setup = {
    {
QT_MOC_LITERAL(0, 0, 11), // "basic_setup"
QT_MOC_LITERAL(1, 12, 35), // "on_pushButton_ChangeSetting_c..."
QT_MOC_LITERAL(2, 48, 0) // ""

    },
    "basic_setup\0on_pushButton_ChangeSetting_clicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_basic_setup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void basic_setup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        basic_setup *_t = static_cast<basic_setup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_ChangeSetting_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject basic_setup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_basic_setup.data,
      qt_meta_data_basic_setup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *basic_setup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *basic_setup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_basic_setup.stringdata0))
        return static_cast<void*>(const_cast< basic_setup*>(this));
    return QWidget::qt_metacast(_clname);
}

int basic_setup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
