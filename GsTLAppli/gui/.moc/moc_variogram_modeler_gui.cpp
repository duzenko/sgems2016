/****************************************************************************
** Meta object code from reading C++ file 'variogram_modeler_gui.h'
**
** Created: Thu 23. Jun 17:50:29 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../variogram2/variogram_modeler_gui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'variogram_modeler_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Variogram_modeler_gui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   22,   22,   22, 0x0a,
      70,   22,   22,   22, 0x0a,
      98,   22,   22,   22, 0x0a,
     105,   22,   22,   22, 0x0a,
     112,   23,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Variogram_modeler_gui[] = {
    "Variogram_modeler_gui\0\0text\0"
    "error_message(QString)\0parameterChanged()\0"
    "disable_next_button_focus()\0next()\0"
    "back()\0message(QString)\0"
};

const QMetaObject Variogram_modeler_gui::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Variogram_modeler_gui,
      qt_meta_data_Variogram_modeler_gui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Variogram_modeler_gui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Variogram_modeler_gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Variogram_modeler_gui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Variogram_modeler_gui))
        return static_cast<void*>(const_cast< Variogram_modeler_gui*>(this));
    if (!strcmp(_clname, "Ui::variogram_modeler_gui_base"))
        return static_cast< Ui::variogram_modeler_gui_base*>(const_cast< Variogram_modeler_gui*>(this));
    return QDialog::qt_metacast(_clname);
}

int Variogram_modeler_gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: error_message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: parameterChanged(); break;
        case 2: disable_next_button_focus(); break;
        case 3: next(); break;
        case 4: back(); break;
        case 5: message((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Variogram_modeler_gui::error_message(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
