/****************************************************************************
** Meta object code from reading C++ file 'ajustemensaje.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ajustemensaje.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ajustemensaje.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ajusteMensaje_t {
    QByteArrayData data[12];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ajusteMensaje_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ajusteMensaje_t qt_meta_stringdata_ajusteMensaje = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ajusteMensaje"
QT_MOC_LITERAL(1, 14, 14), // "guardarCambios"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "Contacto"
QT_MOC_LITERAL(4, 39, 3), // "con"
QT_MOC_LITERAL(5, 43, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 67, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(7, 91, 23), // "on_btnRemitente_clicked"
QT_MOC_LITERAL(8, 115, 26), // "on_btnDestinatario_clicked"
QT_MOC_LITERAL(9, 142, 19), // "on_btnFondo_clicked"
QT_MOC_LITERAL(10, 162, 21), // "on_btnGuardar_clicked"
QT_MOC_LITERAL(11, 184, 26) // "on_btnReestablecer_clicked"

    },
    "ajusteMensaje\0guardarCambios\0\0Contacto\0"
    "con\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_btnRemitente_clicked\0"
    "on_btnDestinatario_clicked\0"
    "on_btnFondo_clicked\0on_btnGuardar_clicked\0"
    "on_btnReestablecer_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ajusteMensaje[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ajusteMensaje::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ajusteMensaje *_t = static_cast<ajusteMensaje *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->guardarCambios((*reinterpret_cast< Contacto(*)>(_a[1]))); break;
        //case 1: _t->on_pushButton_2_clicked(); break;
        //case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_btnRemitente_clicked(); break;
        case 4: _t->on_btnDestinatario_clicked(); break;
        case 5: _t->on_btnFondo_clicked(); break;
        case 6: _t->on_btnGuardar_clicked(); break;
        case 7: _t->on_btnReestablecer_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ajusteMensaje::*)(Contacto );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ajusteMensaje::guardarCambios)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ajusteMensaje::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ajusteMensaje.data,
    qt_meta_data_ajusteMensaje,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ajusteMensaje::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ajusteMensaje::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ajusteMensaje.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ajusteMensaje::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ajusteMensaje::guardarCambios(Contacto _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
