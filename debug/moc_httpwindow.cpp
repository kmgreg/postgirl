/****************************************************************************
** Meta object code from reading C++ file 'httpwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Qt/Examples/Qt-6.2.4/network/http/httpwindow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProgressDialog_t {
    const uint offsetsAndSize[10];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ProgressDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ProgressDialog_t qt_meta_stringdata_ProgressDialog = {
    {
QT_MOC_LITERAL(0, 14), // "ProgressDialog"
QT_MOC_LITERAL(15, 20), // "networkReplyProgress"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 9), // "bytesRead"
QT_MOC_LITERAL(47, 10) // "totalBytes"

    },
    "ProgressDialog\0networkReplyProgress\0"
    "\0bytesRead\0totalBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgressDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,

       0        // eod
};

void ProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgressDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->networkReplyProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ProgressDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QProgressDialog::staticMetaObject>(),
    qt_meta_stringdata_ProgressDialog.offsetsAndSize,
    qt_meta_data_ProgressDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ProgressDialog_t
, QtPrivate::TypeAndForceComplete<ProgressDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>


>,
    nullptr
} };


const QMetaObject *ProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressDialog.stringdata0))
        return static_cast<void*>(this);
    return QProgressDialog::qt_metacast(_clname);
}

int ProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_HttpWindow_t {
    const uint offsetsAndSize[28];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_HttpWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_HttpWindow_t qt_meta_stringdata_HttpWindow = {
    {
QT_MOC_LITERAL(0, 10), // "HttpWindow"
QT_MOC_LITERAL(11, 12), // "downloadFile"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 14), // "cancelDownload"
QT_MOC_LITERAL(40, 12), // "httpFinished"
QT_MOC_LITERAL(53, 13), // "httpReadyRead"
QT_MOC_LITERAL(67, 20), // "enableDownloadButton"
QT_MOC_LITERAL(88, 26), // "slotAuthenticationRequired"
QT_MOC_LITERAL(115, 14), // "QNetworkReply*"
QT_MOC_LITERAL(130, 15), // "QAuthenticator*"
QT_MOC_LITERAL(146, 13), // "authenticator"
QT_MOC_LITERAL(160, 9), // "sslErrors"
QT_MOC_LITERAL(170, 16), // "QList<QSslError>"
QT_MOC_LITERAL(187, 6) // "errors"

    },
    "HttpWindow\0downloadFile\0\0cancelDownload\0"
    "httpFinished\0httpReadyRead\0"
    "enableDownloadButton\0slotAuthenticationRequired\0"
    "QNetworkReply*\0QAuthenticator*\0"
    "authenticator\0sslErrors\0QList<QSslError>\0"
    "errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    2,   61,    2, 0x08,    6 /* Private */,
      11,    1,   66,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 9,    2,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void HttpWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HttpWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->downloadFile(); break;
        case 1: _t->cancelDownload(); break;
        case 2: _t->httpFinished(); break;
        case 3: _t->httpReadyRead(); break;
        case 4: _t->enableDownloadButton(); break;
        case 5: _t->slotAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 6: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject HttpWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_HttpWindow.offsetsAndSize,
    qt_meta_data_HttpWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_HttpWindow_t
, QtPrivate::TypeAndForceComplete<HttpWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>


>,
    nullptr
} };


const QMetaObject *HttpWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HttpWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int HttpWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
