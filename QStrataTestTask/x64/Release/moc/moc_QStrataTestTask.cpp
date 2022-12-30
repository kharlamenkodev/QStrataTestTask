/****************************************************************************
** Meta object code from reading C++ file 'QStrataTestTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../QStrataTestTask.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QStrataTestTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QStrataTestTask_t {
    const uint offsetsAndSize[34];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QStrataTestTask_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QStrataTestTask_t qt_meta_stringdata_QStrataTestTask = {
    {
QT_MOC_LITERAL(0, 15), // "QStrataTestTask"
QT_MOC_LITERAL(16, 15), // "startGenerating"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 14), // "stopGenerating"
QT_MOC_LITERAL(48, 15), // "setSampleLength"
QT_MOC_LITERAL(64, 5), // "value"
QT_MOC_LITERAL(70, 6), // "setFps"
QT_MOC_LITERAL(77, 18), // "startButtonClicked"
QT_MOC_LITERAL(96, 17), // "stopButtonClicked"
QT_MOC_LITERAL(114, 27), // "sampleLengthSliderTriggered"
QT_MOC_LITERAL(142, 18), // "fpsSliderTriggered"
QT_MOC_LITERAL(161, 13), // "threadStarted"
QT_MOC_LITERAL(175, 14), // "threadFinished"
QT_MOC_LITERAL(190, 9), // "dataReady"
QT_MOC_LITERAL(200, 13), // "QList<double>"
QT_MOC_LITERAL(214, 4), // "keys"
QT_MOC_LITERAL(219, 6) // "values"

    },
    "QStrataTestTask\0startGenerating\0\0"
    "stopGenerating\0setSampleLength\0value\0"
    "setFps\0startButtonClicked\0stopButtonClicked\0"
    "sampleLengthSliderTriggered\0"
    "fpsSliderTriggered\0threadStarted\0"
    "threadFinished\0dataReady\0QList<double>\0"
    "keys\0values"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QStrataTestTask[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,
       4,    1,   82,    2, 0x06,    3 /* Public */,
       6,    1,   85,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   88,    2, 0x08,    7 /* Private */,
       8,    0,   89,    2, 0x08,    8 /* Private */,
       9,    1,   90,    2, 0x08,    9 /* Private */,
      10,    1,   93,    2, 0x08,   11 /* Private */,
      11,    0,   96,    2, 0x08,   13 /* Private */,
      12,    0,   97,    2, 0x08,   14 /* Private */,
      13,    2,   98,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   15,   16,

       0        // eod
};

void QStrataTestTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QStrataTestTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startGenerating(); break;
        case 1: _t->stopGenerating(); break;
        case 2: _t->setSampleLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setFps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->startButtonClicked(); break;
        case 5: _t->stopButtonClicked(); break;
        case 6: _t->sampleLengthSliderTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->fpsSliderTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->threadStarted(); break;
        case 9: _t->threadFinished(); break;
        case 10: _t->dataReady((*reinterpret_cast< const QList<double>(*)>(_a[1])),(*reinterpret_cast< const QList<double>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
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
            using _t = void (QStrataTestTask::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QStrataTestTask::startGenerating)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QStrataTestTask::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QStrataTestTask::stopGenerating)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QStrataTestTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QStrataTestTask::setSampleLength)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QStrataTestTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QStrataTestTask::setFps)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QStrataTestTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_QStrataTestTask.offsetsAndSize,
    qt_meta_data_QStrataTestTask,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QStrataTestTask_t
, QtPrivate::TypeAndForceComplete<QStrataTestTask, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<const QVector<double>, std::false_type>


>,
    nullptr
} };


const QMetaObject *QStrataTestTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStrataTestTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QStrataTestTask.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QStrataTestTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QStrataTestTask::startGenerating()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QStrataTestTask::stopGenerating()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QStrataTestTask::setSampleLength(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QStrataTestTask::setFps(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
