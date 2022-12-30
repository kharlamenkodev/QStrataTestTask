/****************************************************************************
** Meta object code from reading C++ file 'QDataGenerator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../Components/DataGenerator/QDataGenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QDataGenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDataGenerator_t {
    const uint offsetsAndSize[24];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QDataGenerator_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QDataGenerator_t qt_meta_stringdata_QDataGenerator = {
    {
QT_MOC_LITERAL(0, 14), // "QDataGenerator"
QT_MOC_LITERAL(15, 9), // "dataReady"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 13), // "QList<double>"
QT_MOC_LITERAL(40, 4), // "keys"
QT_MOC_LITERAL(45, 6), // "values"
QT_MOC_LITERAL(52, 5), // "start"
QT_MOC_LITERAL(58, 4), // "stop"
QT_MOC_LITERAL(63, 15), // "setSampleLength"
QT_MOC_LITERAL(79, 5), // "value"
QT_MOC_LITERAL(85, 6), // "setFps"
QT_MOC_LITERAL(92, 8) // "generate"

    },
    "QDataGenerator\0dataReady\0\0QList<double>\0"
    "keys\0values\0start\0stop\0setSampleLength\0"
    "value\0setFps\0generate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDataGenerator[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   55,    2, 0x0a,    4 /* Public */,
       7,    0,   56,    2, 0x0a,    5 /* Public */,
       8,    1,   57,    2, 0x0a,    6 /* Public */,
      10,    1,   60,    2, 0x0a,    8 /* Public */,
      11,    0,   63,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

       0        // eod
};

void QDataGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QDataGenerator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataReady((*reinterpret_cast< const QList<double>(*)>(_a[1])),(*reinterpret_cast< const QList<double>(*)>(_a[2]))); break;
        case 1: _t->start(); break;
        case 2: _t->stop(); break;
        case 3: _t->setSampleLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setFps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->generate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QDataGenerator::*)(const QVector<double> , const QVector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDataGenerator::dataReady)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QDataGenerator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QDataGenerator.offsetsAndSize,
    qt_meta_data_QDataGenerator,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QDataGenerator_t
, QtPrivate::TypeAndForceComplete<QDataGenerator, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<const QVector<double>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QDataGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDataGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDataGenerator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDataGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QDataGenerator::dataReady(const QVector<double> _t1, const QVector<double> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
