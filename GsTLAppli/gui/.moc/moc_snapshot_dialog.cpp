/****************************************************************************
** Meta object code from reading C++ file 'snapshot_dialog.h'
**
** Created: Thu 23. Jun 17:50:29 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/snapshot_dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snapshot_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Snapshot_dialog[] = {

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
      17,   16,   16,   16, 0x0a,
      49,   33,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Snapshot_dialog[] = {
    "Snapshot_dialog\0\0take_snapshot()\0"
    "filename,format\0take_snapshot(QString,QString)\0"
};

const QMetaObject Snapshot_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Snapshot_dialog,
      qt_meta_data_Snapshot_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Snapshot_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Snapshot_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Snapshot_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Snapshot_dialog))
        return static_cast<void*>(const_cast< Snapshot_dialog*>(this));
    if (!strcmp(_clname, "Ui::Snapshot_dialog_base"))
        return static_cast< Ui::Snapshot_dialog_base*>(const_cast< Snapshot_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Snapshot_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: take_snapshot(); break;
        case 1: take_snapshot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
