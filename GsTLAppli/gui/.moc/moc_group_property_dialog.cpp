/****************************************************************************
** Meta object code from reading C++ file 'group_property_dialog.h'
**
** Created: Thu 23. Jun 17:50:32 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../utils/group_property_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'group_property_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_View_group_property_dialog[] = {

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
      39,   28,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_View_group_property_dialog[] = {
    "View_group_property_dialog\0\0group_name\0"
    "display_properties(QString)\0"
};

const QMetaObject View_group_property_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_View_group_property_dialog,
      qt_meta_data_View_group_property_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &View_group_property_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *View_group_property_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *View_group_property_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_View_group_property_dialog))
        return static_cast<void*>(const_cast< View_group_property_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int View_group_property_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_New_group_property_dialog[] = {

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
      27,   26,   26,   26, 0x09,
      35,   26,   26,   26, 0x09,
      50,   26,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_New_group_property_dialog[] = {
    "New_group_property_dialog\0\0clear()\0"
    "create_group()\0create_group_close()\0"
};

const QMetaObject New_group_property_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_New_group_property_dialog,
      qt_meta_data_New_group_property_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &New_group_property_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *New_group_property_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *New_group_property_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_New_group_property_dialog))
        return static_cast<void*>(const_cast< New_group_property_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int New_group_property_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clear(); break;
        case 1: create_group(); break;
        case 2: create_group_close(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_Modify_group_property_dialog[] = {

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
      41,   30,   29,   29, 0x0a,
      69,   29,   29,   29, 0x0a,
      93,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Modify_group_property_dialog[] = {
    "Modify_group_property_dialog\0\0group_name\0"
    "display_properties(QString)\0"
    "modify_group_property()\0"
    "modify_group_property_close()\0"
};

const QMetaObject Modify_group_property_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Modify_group_property_dialog,
      qt_meta_data_Modify_group_property_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Modify_group_property_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Modify_group_property_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Modify_group_property_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Modify_group_property_dialog))
        return static_cast<void*>(const_cast< Modify_group_property_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Modify_group_property_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: display_properties((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: modify_group_property(); break;
        case 2: modify_group_property_close(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_Delete_group_property_dialog[] = {

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
      30,   29,   29,   29, 0x0a,
      54,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Delete_group_property_dialog[] = {
    "Delete_group_property_dialog\0\0"
    "Delete_group_property()\0"
    "Delete_group_property_close()\0"
};

const QMetaObject Delete_group_property_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Delete_group_property_dialog,
      qt_meta_data_Delete_group_property_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Delete_group_property_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Delete_group_property_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Delete_group_property_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Delete_group_property_dialog))
        return static_cast<void*>(const_cast< Delete_group_property_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Delete_group_property_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Delete_group_property(); break;
        case 1: Delete_group_property_close(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
