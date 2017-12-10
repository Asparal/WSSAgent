/****************************************************************************
** Meta object code from reading C++ file 'mainobject.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainobject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mainobject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x08,
      36,   34,   11,   11, 0x08,
      60,   55,   11,   11, 0x08,
      87,   11,   11,   11, 0x08,
      95,   34,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mainobject[] = {
    "mainobject\0\0m\0set_master(QString)\0s\0"
    "set_slave(QString)\0sock\0"
    "perform_slave(QTcpSocket*)\0error()\0"
    "reloaded(QString)\0"
};

void mainobject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mainobject *_t = static_cast<mainobject *>(_o);
        switch (_id) {
        case 0: _t->set_master((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->set_slave((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->perform_slave((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 3: _t->error(); break;
        case 4: _t->reloaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mainobject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mainobject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mainobject,
      qt_meta_data_mainobject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mainobject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mainobject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mainobject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mainobject))
        return static_cast<void*>(const_cast< mainobject*>(this));
    return QObject::qt_metacast(_clname);
}

int mainobject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
