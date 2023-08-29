/****************************************************************************
** Meta object code from reading C++ file 'allwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../allwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'allwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_allWidget_t {
    QByteArrayData data[10];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_allWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_allWidget_t qt_meta_stringdata_allWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "allWidget"
QT_MOC_LITERAL(1, 10, 27), // "on_pushButton_close_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "on_pushButton_hide_clicked"
QT_MOC_LITERAL(4, 66, 25), // "on_pushButton_max_clicked"
QT_MOC_LITERAL(5, 92, 38), // "on_horizontalSlider_music_val..."
QT_MOC_LITERAL(6, 131, 5), // "value"
QT_MOC_LITERAL(7, 137, 26), // "on_pushButton_stop_clicked"
QT_MOC_LITERAL(8, 164, 7), // "checked"
QT_MOC_LITERAL(9, 172, 29) // "on_pushButton_message_clicked"

    },
    "allWidget\0on_pushButton_close_clicked\0"
    "\0on_pushButton_hide_clicked\0"
    "on_pushButton_max_clicked\0"
    "on_horizontalSlider_music_valueChanged\0"
    "value\0on_pushButton_stop_clicked\0"
    "checked\0on_pushButton_message_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_allWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void allWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        allWidget *_t = static_cast<allWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_close_clicked(); break;
        case 1: _t->on_pushButton_hide_clicked(); break;
        case 2: _t->on_pushButton_max_clicked(); break;
        case 3: _t->on_horizontalSlider_music_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_stop_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_message_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject allWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_allWidget.data,
      qt_meta_data_allWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *allWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *allWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_allWidget.stringdata0))
        return static_cast<void*>(const_cast< allWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int allWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
