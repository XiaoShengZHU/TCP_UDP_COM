/****************************************************************************
** Meta object code from reading C++ file 'tcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../socket/tcpserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TCPServer_t {
    QByteArrayData data[7];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCPServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCPServer_t qt_meta_stringdata_TCPServer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TCPServer"
QT_MOC_LITERAL(1, 10, 8), // "formSmit"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "updateserver"
QT_MOC_LITERAL(4, 33, 16), // "updateSendStatus"
QT_MOC_LITERAL(5, 50, 17), // "serverReadMessage"
QT_MOC_LITERAL(6, 68, 23) // "on_OKpushButton_clicked"

    },
    "TCPServer\0formSmit\0\0updateserver\0"
    "updateSendStatus\0serverReadMessage\0"
    "on_OKpushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCPServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TCPServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TCPServer *_t = static_cast<TCPServer *>(_o);
        switch (_id) {
        case 0: _t->formSmit(); break;
        case 1: _t->updateserver(); break;
        case 2: _t->updateSendStatus(); break;
        case 3: _t->serverReadMessage(); break;
        case 4: _t->on_OKpushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TCPServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TCPServer::formSmit)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TCPServer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TCPServer.data,
      qt_meta_data_TCPServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TCPServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TCPServer.stringdata))
        return static_cast<void*>(const_cast< TCPServer*>(this));
    if (!strcmp(_clname, "TcpUdpComBase"))
        return static_cast< TcpUdpComBase*>(const_cast< TCPServer*>(this));
    return QDialog::qt_metacast(_clname);
}

int TCPServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TCPServer::formSmit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
