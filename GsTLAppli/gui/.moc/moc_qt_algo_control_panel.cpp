/****************************************************************************
** Meta object code from reading C++ file 'qt_algo_control_panel.h'
**
** Created: Thu 23. Jun 17:50:30 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/qt_algo_control_panel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_algo_control_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GsTL_QListView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   81,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GsTL_QListView[] = {
    "GsTL_QListView\0\0b,i,col\0"
    "mouseButtonClicked(Qt::MouseButton,QTreeWidgetItem*,int)\0"
    "it,col\0pass(QTreeWidgetItem*,int)\0"
};

const QMetaObject GsTL_QListView::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_GsTL_QListView,
      qt_meta_data_GsTL_QListView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GsTL_QListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GsTL_QListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GsTL_QListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GsTL_QListView))
        return static_cast<void*>(const_cast< GsTL_QListView*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int GsTL_QListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mouseButtonClicked((*reinterpret_cast< Qt::MouseButton(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: pass((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GsTL_QListView::mouseButtonClicked(Qt::MouseButton _t1, QTreeWidgetItem * _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_Controls_panel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      36,   15,   15,   15, 0x05,
      53,   15,   15,   15, 0x05,
      69,   15,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Controls_panel[] = {
    "Controls_panel\0\0run_algo_selected()\0"
    "clear_selected()\0load_selected()\0"
    "save_selected()\0"
};

const QMetaObject Controls_panel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Controls_panel,
      qt_meta_data_Controls_panel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Controls_panel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Controls_panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Controls_panel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Controls_panel))
        return static_cast<void*>(const_cast< Controls_panel*>(this));
    if (!strcmp(_clname, "Ui::ControlsWidget"))
        return static_cast< Ui::ControlsWidget*>(const_cast< Controls_panel*>(this));
    return QWidget::qt_metacast(_clname);
}

int Controls_panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: run_algo_selected(); break;
        case 1: clear_selected(); break;
        case 2: load_selected(); break;
        case 3: save_selected(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Controls_panel::run_algo_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Controls_panel::clear_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Controls_panel::load_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Controls_panel::save_selected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_Algo_control_panel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   20,   19,   19, 0x0a,
     110,   93,   19,   19, 0x0a,
     143,   19,   19,   19, 0x0a,
     162,   19,   19,   19, 0x0a,
     180,   19,   19,   19, 0x0a,
     205,   19,   19,   19, 0x0a,
     224,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Algo_control_panel[] = {
    "Algo_control_panel\0\0button,item,\0"
    "prompt_for_parameters(Qt::MouseButton,QTreeWidgetItem*,int)\0"
    "top_level_filter\0filter_algo_by_category(QString)\0"
    "run_geostat_algo()\0load_parameters()\0"
    "load_parameters(QString)\0clear_parameters()\0"
    "save_parameters()\0"
};

const QMetaObject Algo_control_panel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Algo_control_panel,
      qt_meta_data_Algo_control_panel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Algo_control_panel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Algo_control_panel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Algo_control_panel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Algo_control_panel))
        return static_cast<void*>(const_cast< Algo_control_panel*>(this));
    if (!strcmp(_clname, "Ui::Algo_control_panel_base"))
        return static_cast< Ui::Algo_control_panel_base*>(const_cast< Algo_control_panel*>(this));
    return QWidget::qt_metacast(_clname);
}

int Algo_control_panel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: prompt_for_parameters((*reinterpret_cast< Qt::MouseButton(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: filter_algo_by_category((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: run_geostat_algo(); break;
        case 3: load_parameters(); break;
        case 4: load_parameters((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: clear_parameters(); break;
        case 6: save_parameters(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
