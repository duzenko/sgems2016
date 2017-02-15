/****************************************************************************
** Meta object code from reading C++ file 'new_region_from_property_dialog.h'
**
** Created: Thu 23. Jun 17:50:31 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../utils/new_region_from_property_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'new_region_from_property_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_New_region_from_property_dialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x09,
      55,   32,   32,   32, 0x09,
      78,   32,   73,   32, 0x09,
      94,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_New_region_from_property_dialog[] = {
    "New_region_from_property_dialog\0\0"
    "populate_categories()\0set_filter_type()\0"
    "bool\0create_region()\0create_region_and_close()\0"
};

const QMetaObject New_region_from_property_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_New_region_from_property_dialog,
      qt_meta_data_New_region_from_property_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &New_region_from_property_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *New_region_from_property_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *New_region_from_property_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_New_region_from_property_dialog))
        return static_cast<void*>(const_cast< New_region_from_property_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int New_region_from_property_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: populate_categories(); break;
        case 1: set_filter_type(); break;
        case 2: { bool _r = create_region();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: create_region_and_close(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
