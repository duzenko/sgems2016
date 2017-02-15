/****************************************************************************
** Meta object code from reading C++ file 'scatterplot_control_panel.h'
**
** Created: Thu 23. Jun 17:50:30 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/scatterplot_control_panel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scatterplot_control_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Scatterplot_control_panel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   27,   26,   26, 0x05,
      83,   27,   26,   26, 0x05,
     137,   26,   26,   26, 0x05,
     166,   26,   26,   26, 0x05,
     195,   26,   26,   26, 0x05,
     225,   26,   26,   26, 0x05,
     255,   26,   26,   26, 0x05,
     292,   26,   26,   26, 0x05,
     329,   26,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
     356,  347,   26,   26, 0x0a,
     394,  347,   26,   26, 0x0a,
     432,   26,   26,   26, 0x09,
     462,   26,   26,   26, 0x09,
     492,   26,   26,   26, 0x09,
     524,   26,   26,   26, 0x09,
     557,   26,   26,   26, 0x09,
     589,   26,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Scatterplot_control_panel[] = {
    "Scatterplot_control_panel\0\0,\0"
    "var1_changed(GsTLGridProperty*,const GsTLGridRegion*)\0"
    "var2_changed(GsTLGridProperty*,const GsTLGridRegion*)\0"
    "var1_low_clip_changed(float)\0"
    "var2_low_clip_changed(float)\0"
    "var1_high_clip_changed(float)\0"
    "var2_high_clip_changed(float)\0"
    "reset_var1_clipping_values_clicked()\0"
    "reset_var2_clipping_values_clicked()\0"
    "show_ls_fit(bool)\0low,high\0"
    "set_var1_clipping_values(float,float)\0"
    "set_var2_clipping_values(float,float)\0"
    "forward_var1_changed(QString)\0"
    "forward_var2_changed(QString)\0"
    "forward_var1_low_clip_changed()\0"
    "forward_var1_high_clip_changed()\0"
    "forward_var2_low_clip_changed()\0"
    "forward_var2_high_clip_changed()\0"
};

const QMetaObject Scatterplot_control_panel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Scatterplot_control_panel,
      qt_meta_data_Scatterplot_control_panel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Scatterplot_control_panel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Scatterplot_control_panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Scatterplot_control_panel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Scatterplot_control_panel))
        return static_cast<void*>(const_cast< Scatterplot_control_panel*>(this));
    if (!strcmp(_clname, "Ui::Scatterplot_control_panel_base"))
        return static_cast< Ui::Scatterplot_control_panel_base*>(const_cast< Scatterplot_control_panel*>(this));
    return QWidget::qt_metacast(_clname);
}

int Scatterplot_control_panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: var1_changed((*reinterpret_cast< GsTLGridProperty*(*)>(_a[1])),(*reinterpret_cast< const GsTLGridRegion*(*)>(_a[2]))); break;
        case 1: var2_changed((*reinterpret_cast< GsTLGridProperty*(*)>(_a[1])),(*reinterpret_cast< const GsTLGridRegion*(*)>(_a[2]))); break;
        case 2: var1_low_clip_changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: var2_low_clip_changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: var1_high_clip_changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: var2_high_clip_changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: reset_var1_clipping_values_clicked(); break;
        case 7: reset_var2_clipping_values_clicked(); break;
        case 8: show_ls_fit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: set_var1_clipping_values((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 10: set_var2_clipping_values((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 11: forward_var1_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: forward_var2_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: forward_var1_low_clip_changed(); break;
        case 14: forward_var1_high_clip_changed(); break;
        case 15: forward_var2_low_clip_changed(); break;
        case 16: forward_var2_high_clip_changed(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Scatterplot_control_panel::var1_changed(GsTLGridProperty * _t1, const GsTLGridRegion * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Scatterplot_control_panel::var2_changed(GsTLGridProperty * _t1, const GsTLGridRegion * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Scatterplot_control_panel::var1_low_clip_changed(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Scatterplot_control_panel::var2_low_clip_changed(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Scatterplot_control_panel::var1_high_clip_changed(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Scatterplot_control_panel::var2_high_clip_changed(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Scatterplot_control_panel::reset_var1_clipping_values_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Scatterplot_control_panel::reset_var2_clipping_values_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void Scatterplot_control_panel::show_ls_fit(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
