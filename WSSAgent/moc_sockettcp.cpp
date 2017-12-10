/****************************************************************************
** Meta object code from reading C++ file 'sockettcp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sockettcp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sockettcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_socketTCP[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   11,   10,   10, 0x05,
      40,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   58,   10,   10, 0x0a,
      90,   58,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_socketTCP[] = {
    "socketTCP\0\0sock\0newrequest(QTcpSocket*)\0"
    "newslave(QString)\0,\0sendtext(QTcpSocket*,QString)\0"
    "onReceive(QTcpSocket*,QString)\0"
};

void socketTCP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        socketTCP *_t = static_cast<socketTCP *>(_o);
        switch (_id) {
        case 0: _t->newrequest((*reinterpret_cast< QTcpSocket*(*)>(_a[1]))); break;
        case 1: _t->newslave((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendtext((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->onReceive((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData socketTCP::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject socketTCP::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_socketTCP,
      qt_meta_data_socketTCP, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &socketTCP::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *socketTCP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *socketTCP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_socketTCP))
        return static_cast<void*>(const_cast< socketTCP*>(this));
    return QObject::qt_metacast(_clname);
}

int socketTCP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void socketTCP::newrequest(QTcpSocket * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void socketTCP::newslave(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
