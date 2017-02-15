/****************************************************************************
** Meta object code from reading C++ file 'group_selectors.h'
**
** Created: Thu 23. Jun 17:49:17 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../group_selectors.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'group_selectors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SinglePropertyGroupSelector[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   29,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SinglePropertyGroupSelector[] = {
    "SinglePropertyGroupSelector\0\0grid_name\0"
    "show_property_groups(QString)\0"
};

const QMetaObject SinglePropertyGroupSelector::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_SinglePropertyGroupSelector,
      qt_meta_data_SinglePropertyGroupSelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SinglePropertyGroupSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SinglePropertyGroupSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SinglePropertyGroupSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SinglePropertyGroupSelector))
        return static_cast<void*>(const_cast< SinglePropertyGroupSelector*>(this));
    return QComboBox::qt_metacast(_clname);
}

int SinglePropertyGroupSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show_property_groups((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MultiPropertyGroupSelector[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   48,   27,   27, 0x0a,
      88,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MultiPropertyGroupSelector[] = {
    "MultiPropertyGroupSelector\0\0"
    "selected_count(int)\0grid_name\0"
    "show_property_groups(QString)\0"
    "selection_size()\0"
};

const QMetaObject MultiPropertyGroupSelector::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_MultiPropertyGroupSelector,
      qt_meta_data_MultiPropertyGroupSelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiPropertyGroupSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiPropertyGroupSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiPropertyGroupSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiPropertyGroupSelector))
        return static_cast<void*>(const_cast< MultiPropertyGroupSelector*>(this));
    return QListWidget::qt_metacast(_clname);
}

int MultiPropertyGroupSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selected_count((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: show_property_groups((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: selection_size(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MultiPropertyGroupSelector::selected_count(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
