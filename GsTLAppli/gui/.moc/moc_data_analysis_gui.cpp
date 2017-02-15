/****************************************************************************
** Meta object code from reading C++ file 'data_analysis_gui.h'
**
** Created: Thu 23. Jun 17:50:32 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/data_analysis_gui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data_analysis_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Data_analysis_gui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      36,   18,   18,   18, 0x0a,
      53,   18,   18,   18, 0x0a,
      70,   18,   18,   18, 0x0a,
      87,   18,   18,   18, 0x0a,
     102,   18,   18,   18, 0x0a,
     120,  117,   18,   18, 0x0a,
     146,  117,   18,   18, 0x0a,
     172,   18,   18,   18, 0x0a,
     187,   18,   18,   18, 0x0a,
     212,  203,   18,   18, 0x0a,
     273,  271,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Data_analysis_gui[] = {
    "Data_analysis_gui\0\0set_x_axis_min()\0"
    "set_x_axis_max()\0set_y_axis_min()\0"
    "set_y_axis_max()\0reset_x_axis()\0"
    "reset_y_axis()\0on\0set_x_axis_logscale(bool)\0"
    "set_y_axis_logscale(bool)\0close_window()\0"
    "save_as_image()\0pcurve,,\0"
    "refresh_plot(QwtPlotCurve*,std::pair<double*,double*>,int)\0"
    ",\0refresh_plot(std::pair<double*,double*>,int)\0"
};

const QMetaObject Data_analysis_gui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Data_analysis_gui,
      qt_meta_data_Data_analysis_gui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Data_analysis_gui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Data_analysis_gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Data_analysis_gui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Data_analysis_gui))
        return static_cast<void*>(const_cast< Data_analysis_gui*>(this));
    if (!strcmp(_clname, "Ui::Data_analysis_gui_base"))
        return static_cast< Ui::Data_analysis_gui_base*>(const_cast< Data_analysis_gui*>(this));
    return QWidget::qt_metacast(_clname);
}

int Data_analysis_gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: set_x_axis_min(); break;
        case 1: set_x_axis_max(); break;
        case 2: set_y_axis_min(); break;
        case 3: set_y_axis_max(); break;
        case 4: reset_x_axis(); break;
        case 5: reset_y_axis(); break;
        case 6: set_x_axis_logscale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: set_y_axis_logscale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: close_window(); break;
        case 9: save_as_image(); break;
        case 10: refresh_plot((*reinterpret_cast< QwtPlotCurve*(*)>(_a[1])),(*reinterpret_cast< std::pair<double*,double*>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: refresh_plot((*reinterpret_cast< std::pair<double*,double*>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
