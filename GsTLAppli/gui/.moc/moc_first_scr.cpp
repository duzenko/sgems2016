/****************************************************************************
** Meta object code from reading C++ file 'first_scr.h'
**
** Created: Thu 23. Jun 17:50:32 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../variogram2/first_scr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'first_scr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_First_scr[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_First_scr[] = {
    "First_scr\0\0parameterChanged()\0"
};

const QMetaObject First_scr::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_First_scr,
      qt_meta_data_First_scr, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &First_scr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *First_scr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *First_scr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_First_scr))
        return static_cast<void*>(const_cast< First_scr*>(this));
    if (!strcmp(_clname, "Ui::First_scr_base"))
        return static_cast< Ui::First_scr_base*>(const_cast< First_scr*>(this));
    return QWidget::qt_metacast(_clname);
}

int First_scr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: parameterChanged(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void First_scr::parameterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
