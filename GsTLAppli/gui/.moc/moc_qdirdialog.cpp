/****************************************************************************
** Meta object code from reading C++ file 'qdirdialog.h'
**
** Created: Thu 23. Jun 17:50:30 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../utils/qdirdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdirdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDirDialog[] = {

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
      20,   12,   11,   11, 0x09,
      54,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QDirDialog[] = {
    "QDirDialog\0\0dirName\0"
    "check_selected_directory(QString)\0"
    "accept()\0"
};

const QMetaObject QDirDialog::staticMetaObject = {
    { &QFileDialog::staticMetaObject, qt_meta_stringdata_QDirDialog,
      qt_meta_data_QDirDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDirDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDirDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDirDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDirDialog))
        return static_cast<void*>(const_cast< QDirDialog*>(this));
    return QFileDialog::qt_metacast(_clname);
}

int QDirDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: check_selected_directory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: accept(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
