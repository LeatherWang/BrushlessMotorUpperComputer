/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BrushlessMotor/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[402];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 34), // "on_action_TransToEnglish_trig..."
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 34), // "on_action_TransToChinese_trig..."
QT_MOC_LITERAL(4, 82, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 106, 29), // "on_action_OpenScope_triggered"
QT_MOC_LITERAL(6, 136, 28), // "on_action_NewModel_triggered"
QT_MOC_LITERAL(7, 165, 50), // "on_treeWidget_Brushless_custo..."
QT_MOC_LITERAL(8, 216, 3), // "pos"
QT_MOC_LITERAL(9, 220, 10), // "deleteItem"
QT_MOC_LITERAL(10, 231, 10), // "renameWell"
QT_MOC_LITERAL(11, 242, 11), // "nameChanged"
QT_MOC_LITERAL(12, 254, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(13, 271, 35), // "on_treeWidget_Brushless_itemC..."
QT_MOC_LITERAL(14, 307, 4), // "item"
QT_MOC_LITERAL(15, 312, 6), // "column"
QT_MOC_LITERAL(16, 319, 12), // "AddTreeChild"
QT_MOC_LITERAL(17, 332, 4), // "name"
QT_MOC_LITERAL(18, 337, 28), // "on_pushbutton_I_loop_clicked"
QT_MOC_LITERAL(19, 366, 35) // "on_pushbutton_MotorFeedback_c..."

    },
    "MainWindow\0on_action_TransToEnglish_triggered\0"
    "\0on_action_TransToChinese_triggered\0"
    "on_pushButton_2_clicked\0"
    "on_action_OpenScope_triggered\0"
    "on_action_NewModel_triggered\0"
    "on_treeWidget_Brushless_customContextMenuRequested\0"
    "pos\0deleteItem\0renameWell\0nameChanged\0"
    "QTreeWidgetItem*\0on_treeWidget_Brushless_itemClicked\0"
    "item\0column\0AddTreeChild\0name\0"
    "on_pushbutton_I_loop_clicked\0"
    "on_pushbutton_MotorFeedback_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    1,   84,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      13,    2,   92,    2, 0x08 /* Private */,
      16,    1,   97,    2, 0x08 /* Private */,
      18,    0,  100,    2, 0x08 /* Private */,
      19,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_action_TransToEnglish_triggered(); break;
        case 1: _t->on_action_TransToChinese_triggered(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_action_OpenScope_triggered(); break;
        case 4: _t->on_action_NewModel_triggered(); break;
        case 5: _t->on_treeWidget_Brushless_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->deleteItem(); break;
        case 7: _t->renameWell(); break;
        case 8: _t->nameChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->on_treeWidget_Brushless_itemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->AddTreeChild((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_pushbutton_I_loop_clicked(); break;
        case 12: _t->on_pushbutton_MotorFeedback_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
