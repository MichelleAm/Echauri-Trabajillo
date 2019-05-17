/****************************************************************************
** Meta object code from reading C++ file 'ventanadeconversaciondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ventanadeconversaciondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ventanadeconversaciondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VentanadeConversacionDialog_t {
    QByteArrayData data[13];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VentanadeConversacionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VentanadeConversacionDialog_t qt_meta_stringdata_VentanadeConversacionDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "VentanadeConversacionDialog"
QT_MOC_LITERAL(1, 28, 8), // "saveConv"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 27), // "on_EnviarpushButton_clicked"
QT_MOC_LITERAL(4, 66, 30), // "on_MensajelineEdit_textChanged"
QT_MOC_LITERAL(5, 97, 4), // "arg1"
QT_MOC_LITERAL(6, 102, 38), // "on_BusquedaMensajelineEdit_te..."
QT_MOC_LITERAL(7, 141, 34), // "on_BuscarMensajepushButton_cl..."
QT_MOC_LITERAL(8, 176, 27), // "on_BuscarpushButton_clicked"
QT_MOC_LITERAL(9, 204, 32), // "on_ConfiguracionesButton_clicked"
QT_MOC_LITERAL(10, 237, 14), // "guardarAjustes"
QT_MOC_LITERAL(11, 252, 8), // "Contacto"
QT_MOC_LITERAL(12, 261, 3) // "con"

    },
    "VentanadeConversacionDialog\0saveConv\0"
    "\0on_EnviarpushButton_clicked\0"
    "on_MensajelineEdit_textChanged\0arg1\0"
    "on_BusquedaMensajelineEdit_textChanged\0"
    "on_BuscarMensajepushButton_clicked\0"
    "on_BuscarpushButton_clicked\0"
    "on_ConfiguracionesButton_clicked\0"
    "guardarAjustes\0Contacto\0con"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VentanadeConversacionDialog[] = {

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
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void VentanadeConversacionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VentanadeConversacionDialog *_t = static_cast<VentanadeConversacionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveConv(); break;
        case 1: _t->on_EnviarpushButton_clicked(); break;
        case 2: _t->on_MensajelineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_BusquedaMensajelineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        //case 4: _t->on_BuscarMensajepushButton_clicked(); break;
        case 5: _t->on_BuscarpushButton_clicked(); break;
        case 6: _t->on_ConfiguracionesButton_clicked(); break;
        case 7: _t->guardarAjustes((*reinterpret_cast< Contacto(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VentanadeConversacionDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VentanadeConversacionDialog::saveConv)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VentanadeConversacionDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_VentanadeConversacionDialog.data,
    qt_meta_data_VentanadeConversacionDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VentanadeConversacionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VentanadeConversacionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VentanadeConversacionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int VentanadeConversacionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void VentanadeConversacionDialog::saveConv()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
