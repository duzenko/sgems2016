/****************************************************************************
** Meta object code from reading C++ file 'categorical_definition_dialog.h'
**
** Created: Thu 23. Jun 17:50:33 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../utils/categorical_definition_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'categorical_definition_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_View_category_definition_dialog[] = {

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
      42,   33,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_View_category_definition_dialog[] = {
    "View_category_definition_dialog\0\0"
    "def_name\0display_properties(QString)\0"
};

const QMetaObject View_category_definition_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_View_category_definition_dialog,
      qt_meta_data_View_category_definition_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &View_category_definition_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *View_category_definition_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *View_category_definition_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_View_category_definition_dialog))
        return static_cast<void*>(const_cast< View_category_definition_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int View_category_definition_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: display_properties((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_New_category_definition_dialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x09,
      40,   31,   31,   31, 0x09,
      60,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_New_category_definition_dialog[] = {
    "New_category_definition_dialog\0\0clear()\0"
    "create_definition()\0create_definition_close()\0"
};

const QMetaObject New_category_definition_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_New_category_definition_dialog,
      qt_meta_data_New_category_definition_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &New_category_definition_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *New_category_definition_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *New_category_definition_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_New_category_definition_dialog))
        return static_cast<void*>(const_cast< New_category_definition_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int New_category_definition_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clear(); break;
        case 1: create_definition(); break;
        case 2: create_definition_close(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_Assign_category_definition_dialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   34,   34,   34, 0x0a,
      55,   34,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Assign_category_definition_dialog[] = {
    "Assign_category_definition_dialog\0\0"
    "assign_definition()\0assign_definition_close()\0"
};

const QMetaObject Assign_category_definition_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Assign_category_definition_dialog,
      qt_meta_data_Assign_category_definition_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Assign_category_definition_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Assign_category_definition_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Assign_category_definition_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Assign_category_definition_dialog))
        return static_cast<void*>(const_cast< Assign_category_definition_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Assign_category_definition_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: assign_definition(); break;
        case 1: assign_definition_close(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
