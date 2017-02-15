/****************************************************************************
** Meta object code from reading C++ file 'general_display_pref_panel.h'
**
** Created: Thu 23. Jun 17:50:32 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/general_display_pref_panel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'general_display_pref_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_General_display_pref_panel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      53,   27,   27,   27, 0x0a,
      81,   78,   27,   27, 0x0a,
     110,  104,   27,   27, 0x0a,
     125,   78,   27,   27, 0x0a,
     148,   27,   27,   27, 0x0a,
     166,   27,   27,   27, 0x0a,
     192,   27,   27,   27, 0x0a,
     209,   27,   27,   27, 0x0a,
     222,   27,   27,   27, 0x0a,
     238,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_General_display_pref_panel[] = {
    "General_display_pref_panel\0\0"
    "use_perspective_camera()\0"
    "use_orthotropic_camera()\0on\0"
    "white_background(bool)\0scale\0"
    "z_scaling(int)\0display_colorbar(bool)\0"
    "update_colorbar()\0enable_colorbar_display()\0"
    "redrawTicks(int)\0rotate(bool)\0"
    "save_colorbar()\0load_colorbar()\0"
};

const QMetaObject General_display_pref_panel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_General_display_pref_panel,
      qt_meta_data_General_display_pref_panel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &General_display_pref_panel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *General_display_pref_panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *General_display_pref_panel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_General_display_pref_panel))
        return static_cast<void*>(const_cast< General_display_pref_panel*>(this));
    if (!strcmp(_clname, "Ui::General_display_pref_panel_base"))
        return static_cast< Ui::General_display_pref_panel_base*>(const_cast< General_display_pref_panel*>(this));
    return QWidget::qt_metacast(_clname);
}

int General_display_pref_panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: use_perspective_camera(); break;
        case 1: use_orthotropic_camera(); break;
        case 2: white_background((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: z_scaling((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: display_colorbar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: update_colorbar(); break;
        case 6: enable_colorbar_display(); break;
        case 7: redrawTicks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: rotate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: save_colorbar(); break;
        case 10: load_colorbar(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
