/****************************************************************************
** Meta object code from reading C++ file 'variogram_controls.h'
**
** Created: Thu 23. Jun 17:50:29 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../variogram2/variogram_controls.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'variogram_controls.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Variogram_controls[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   40,   19,   19, 0x0a,
      70,   66,   19,   19, 0x0a,
      99,   19,   19,   19, 0x0a,
     112,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Variogram_controls[] = {
    "Variogram_controls\0\0variogram_changed()\0"
    "s\0nugget_changed(QString)\0val\0"
    "update_structures_count(int)\0load_model()\0"
    "save_model()\0"
};

const QMetaObject Variogram_controls::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Variogram_controls,
      qt_meta_data_Variogram_controls, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Variogram_controls::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Variogram_controls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Variogram_controls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Variogram_controls))
        return static_cast<void*>(const_cast< Variogram_controls*>(this));
    return QWidget::qt_metacast(_clname);
}

int Variogram_controls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: variogram_changed(); break;
        case 1: nugget_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: update_structures_count((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: load_model(); break;
        case 4: save_model(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Variogram_controls::variogram_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Variogram_structure_controls[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   60,   29,   29, 0x0a,
      84,   60,   29,   29, 0x0a,
     107,   60,   29,   29, 0x0a,
     130,   60,   29,   29, 0x0a,
     157,  153,   29,   29, 0x0a,
     179,  153,   29,   29, 0x0a,
     202,  153,   29,   29, 0x0a,
     276,  224,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Variogram_structure_controls[] = {
    "Variogram_structure_controls\0\0"
    "variogram_structure_changed()\0d\0"
    "range_changed(double)\0range1_changed(double)\0"
    "range2_changed(double)\0range3_changed(double)\0"
    "str\0sill_changed(QString)\0"
    "angle_changed(QString)\0type_changed(QString)\0"
    "sill,type,range1,range2,range3,angle1,angle2,angle3\0"
    "set_structure(double,QString,double,double,double,double,double,double"
    ")\0"
};

const QMetaObject Variogram_structure_controls::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Variogram_structure_controls,
      qt_meta_data_Variogram_structure_controls, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Variogram_structure_controls::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Variogram_structure_controls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Variogram_structure_controls::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Variogram_structure_controls))
        return static_cast<void*>(const_cast< Variogram_structure_controls*>(this));
    if (!strcmp(_clname, "Ui::Variogram_structure_controls_base"))
        return static_cast< Ui::Variogram_structure_controls_base*>(const_cast< Variogram_structure_controls*>(this));
    return QWidget::qt_metacast(_clname);
}

int Variogram_structure_controls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: variogram_structure_changed(); break;
        case 1: range_changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: range1_changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: range2_changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: range3_changed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: sill_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: angle_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: type_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: set_structure((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Variogram_structure_controls::variogram_structure_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_Line_separator[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Line_separator[] = {
    "Line_separator\0"
};

const QMetaObject Line_separator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Line_separator,
      qt_meta_data_Line_separator, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Line_separator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Line_separator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Line_separator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Line_separator))
        return static_cast<void*>(const_cast< Line_separator*>(this));
    return QWidget::qt_metacast(_clname);
}

int Line_separator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
