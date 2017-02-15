/****************************************************************************
** Meta object code from reading C++ file 'display_pref_panel.h'
**
** Created: Thu 23. Jun 17:50:32 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/display_pref_panel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display_pref_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qcolormap_bitmap[] = {

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
      23,   18,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Qcolormap_bitmap[] = {
    "Qcolormap_bitmap\0\0cmap\0"
    "draw_color_scale(const Colormap*)\0"
};

const QMetaObject Qcolormap_bitmap::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Qcolormap_bitmap,
      qt_meta_data_Qcolormap_bitmap, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qcolormap_bitmap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qcolormap_bitmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qcolormap_bitmap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qcolormap_bitmap))
        return static_cast<void*>(const_cast< Qcolormap_bitmap*>(this));
    return QWidget::qt_metacast(_clname);
}

int Qcolormap_bitmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: draw_color_scale((*reinterpret_cast< const Colormap*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_QTransparency_colormap_bitmap[] = {

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
      35,   31,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QTransparency_colormap_bitmap[] = {
    "QTransparency_colormap_bitmap\0\0str\0"
    "paint_transparent_intervals(QString)\0"
};

const QMetaObject QTransparency_colormap_bitmap::staticMetaObject = {
    { &Qcolormap_bitmap::staticMetaObject, qt_meta_stringdata_QTransparency_colormap_bitmap,
      qt_meta_data_QTransparency_colormap_bitmap, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTransparency_colormap_bitmap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTransparency_colormap_bitmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTransparency_colormap_bitmap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTransparency_colormap_bitmap))
        return static_cast<void*>(const_cast< QTransparency_colormap_bitmap*>(this));
    return Qcolormap_bitmap::qt_metacast(_clname);
}

int QTransparency_colormap_bitmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qcolormap_bitmap::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: paint_transparent_intervals((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_Slice_display_control[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      36,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   50,   22,   22, 0x0a,
      74,   70,   22,   22, 0x0a,
      94,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Slice_display_control[] = {
    "Slice_display_control\0\0removed(int)\0"
    "sliceUpdate()\0on\0show_slice(bool)\0pos\0"
    "slice_position(int)\0delete_slice()\0"
};

const QMetaObject Slice_display_control::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Slice_display_control,
      qt_meta_data_Slice_display_control, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Slice_display_control::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Slice_display_control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Slice_display_control::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Slice_display_control))
        return static_cast<void*>(const_cast< Slice_display_control*>(this));
    return QWidget::qt_metacast(_clname);
}

int Slice_display_control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: removed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: sliceUpdate(); break;
        case 2: show_slice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: slice_position((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: delete_slice(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Slice_display_control::removed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Slice_display_control::sliceUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_Display_pref_panel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   20,   19,   19, 0x05,
      74,   20,   19,   19, 0x05,
     116,   19,   19,   19, 0x05,
     150,   19,   19,   19, 0x05,
     180,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     199,  196,   19,   19, 0x0a,
     215,  196,   19,   19, 0x0a,
     231,   19,   19,   19, 0x0a,
     253,  248,   19,   19, 0x0a,
     275,  248,   19,   19, 0x0a,
     297,   19,   19,   19, 0x0a,
     322,   19,   19,   19, 0x0a,
     347,   19,   19,   19, 0x0a,
     371,  196,   19,   19, 0x0a,
     400,  196,   19,   19, 0x0a,
     418,   19,   19,   19, 0x0a,
     437,  196,   19,   19, 0x0a,
     455,   19,   19,   19, 0x0a,
     472,  467,   19,   19, 0x0a,
     503,  494,   19,   19, 0x0a,
     521,  196,   19,   19, 0x0a,
     549,  248,   19,   19, 0x0a,
     588,  583,   19,   19, 0x0a,
     611,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Display_pref_panel[] = {
    "Display_pref_panel\0\0grid,prop\0"
    "displayed_property_changed(QString,QString)\0"
    "property_painted_toggled(QString,QString)\0"
    "colormap_changed(const Colormap*)\0"
    "transparency_changed(QString)\0"
    "renderRequest()\0on\0show_bbox(bool)\0"
    "show_mesh(bool)\0paint_property()\0prop\0"
    "set_property(QString)\0set_colormap(QString)\0"
    "set_colormap_min_value()\0"
    "set_colormap_max_value()\0"
    "recompute_cmap_bounds()\0"
    "enable_volume_explorer(bool)\0"
    "hide_volume(bool)\0set_transparency()\0"
    "show_slices(bool)\0add_slice()\0axis\0"
    "add_slice(Oinv::Axis)\0slice_id\0"
    "remove_slice(int)\0toggle_paint_property(bool)\0"
    "change_selected_property(QString)\0"
    "size\0change_point_size(int)\0sliceUpdated()\0"
};

const QMetaObject Display_pref_panel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Display_pref_panel,
      qt_meta_data_Display_pref_panel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Display_pref_panel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Display_pref_panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Display_pref_panel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Display_pref_panel))
        return static_cast<void*>(const_cast< Display_pref_panel*>(this));
    if (!strcmp(_clname, "Ui::DisplayPrefPanelBase"))
        return static_cast< Ui::DisplayPrefPanelBase*>(const_cast< Display_pref_panel*>(this));
    return QWidget::qt_metacast(_clname);
}

int Display_pref_panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displayed_property_changed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: property_painted_toggled((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: colormap_changed((*reinterpret_cast< const Colormap*(*)>(_a[1]))); break;
        case 3: transparency_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: renderRequest(); break;
        case 5: show_bbox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: show_mesh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: paint_property(); break;
        case 8: set_property((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: set_colormap((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: set_colormap_min_value(); break;
        case 11: set_colormap_max_value(); break;
        case 12: recompute_cmap_bounds(); break;
        case 13: enable_volume_explorer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: hide_volume((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: set_transparency(); break;
        case 16: show_slices((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: add_slice(); break;
        case 18: add_slice((*reinterpret_cast< Oinv::Axis(*)>(_a[1]))); break;
        case 19: remove_slice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: toggle_paint_property((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: change_selected_property((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: change_point_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: sliceUpdated(); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void Display_pref_panel::displayed_property_changed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Display_pref_panel::property_painted_toggled(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Display_pref_panel::colormap_changed(const Colormap * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Display_pref_panel::transparency_changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Display_pref_panel::renderRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
