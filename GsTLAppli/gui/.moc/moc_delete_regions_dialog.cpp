/****************************************************************************
** Meta object code from reading C++ file 'delete_regions_dialog.h'
**
** Created: Thu 23. Jun 17:50:32 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../utils/delete_regions_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delete_regions_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Delete_regions_dialog[] = {

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

static const char qt_meta_stringdata_Delete_regions_dialog[] = {
    "Delete_regions_dialog\0"
};

const QMetaObject Delete_regions_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Delete_regions_dialog,
      qt_meta_data_Delete_regions_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Delete_regions_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Delete_regions_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Delete_regions_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Delete_regions_dialog))
        return static_cast<void*>(const_cast< Delete_regions_dialog*>(this));
    if (!strcmp(_clname, "Ui::Delete_regions_dialog_base"))
        return static_cast< Ui::Delete_regions_dialog_base*>(const_cast< Delete_regions_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Delete_regions_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
