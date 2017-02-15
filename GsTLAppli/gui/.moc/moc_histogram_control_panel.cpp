/****************************************************************************
** Meta object code from reading C++ file 'histogram_control_panel.h'
**
** Created: Thu 23. Jun 17:50:32 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/histogram_control_panel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'histogram_control_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Histogram_control_panel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      49,   47,   24,   24, 0x05,
     102,   24,   24,   24, 0x05,
     126,   24,   24,   24, 0x05,
     151,   24,   24,   24, 0x05,
     183,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     216,  207,   24,   24, 0x0a,
     249,   24,   24,   24, 0x09,
     278,   24,   24,   24, 0x09,
     305,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Histogram_control_panel[] = {
    "Histogram_control_panel\0\0comboChanged(QString)\0"
    ",\0var_changed(GsTLGridProperty*,const GsTLGridRegion*)\0"
    "low_clip_changed(float)\0"
    "high_clip_changed(float)\0"
    "reset_clipping_values_clicked()\0"
    "bins_count_changed(int)\0low,high\0"
    "set_clipping_values(float,float)\0"
    "forward_var_changed(QString)\0"
    "forward_low_clip_changed()\0"
    "forward_high_clip_changed()\0"
};

const QMetaObject Histogram_control_panel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Histogram_control_panel,
      qt_meta_data_Histogram_control_panel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Histogram_control_panel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Histogram_control_panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Histogram_control_panel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Histogram_control_panel))
        return static_cast<void*>(const_cast< Histogram_control_panel*>(this));
    if (!strcmp(_clname, "Ui::Histogram_control_panel_base"))
        return static_cast< Ui::Histogram_control_panel_base*>(const_cast< Histogram_control_panel*>(this));
    return QWidget::qt_metacast(_clname);
}

int Histogram_control_panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: comboChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: var_changed((*reinterpret_cast< GsTLGridProperty*(*)>(_a[1])),(*reinterpret_cast< const GsTLGridRegion*(*)>(_a[2]))); break;
        case 2: low_clip_changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: high_clip_changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: reset_clipping_values_clicked(); break;
        case 5: bins_count_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: set_clipping_values((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 7: forward_var_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: forward_low_clip_changed(); break;
        case 9: forward_high_clip_changed(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Histogram_control_panel::comboChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Histogram_control_panel::var_changed(GsTLGridProperty * _t1, const GsTLGridRegion * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Histogram_control_panel::low_clip_changed(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Histogram_control_panel::high_clip_changed(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Histogram_control_panel::reset_clipping_values_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Histogram_control_panel::bins_count_changed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
