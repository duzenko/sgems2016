/****************************************************************************
** Meta object code from reading C++ file 'histogram_gui.h'
**
** Created: Thu 23. Jun 17:50:32 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/histogram_gui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'histogram_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Histogram_gui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      38,   14,   14,   14, 0x0a,
      62,   14,   14,   14, 0x0a,
      92,   86,   14,   14, 0x0a,
     111,  109,   14,   14, 0x0a,
     166,   14,   14,   14, 0x2a,
     202,  199,   14,   14, 0x0a,
     228,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Histogram_gui[] = {
    "Histogram_gui\0\0update_low_clip(float)\0"
    "update_high_clip(float)\0reset_clipping_values()\0"
    "count\0update_bins(int)\0,\0"
    "get_data_from(GsTLGridProperty*,const GsTLGridRegion*)\0"
    "get_data_from(GsTLGridProperty*)\0on\0"
    "set_x_axis_logscale(bool)\0"
    "changeCurve(QString)\0"
};

const QMetaObject Histogram_gui::staticMetaObject = {
    { &Data_analysis_gui::staticMetaObject, qt_meta_stringdata_Histogram_gui,
      qt_meta_data_Histogram_gui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Histogram_gui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Histogram_gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Histogram_gui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Histogram_gui))
        return static_cast<void*>(const_cast< Histogram_gui*>(this));
    return Data_analysis_gui::qt_metacast(_clname);
}

int Histogram_gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Data_analysis_gui::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update_low_clip((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: update_high_clip((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: reset_clipping_values(); break;
        case 3: update_bins((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: get_data_from((*reinterpret_cast< GsTLGridProperty*(*)>(_a[1])),(*reinterpret_cast< const GsTLGridRegion*(*)>(_a[2]))); break;
        case 5: get_data_from((*reinterpret_cast< GsTLGridProperty*(*)>(_a[1]))); break;
        case 6: set_x_axis_logscale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: changeCurve((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
