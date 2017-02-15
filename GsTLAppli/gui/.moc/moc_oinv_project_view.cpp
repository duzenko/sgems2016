/****************************************************************************
** Meta object code from reading C++ file 'oinv_project_view.h'
**
** Created: Thu 23. Jun 17:50:31 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/oinv_project_view.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oinv_project_view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ObjectTree[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   12,   11,   11, 0x05,
      60,   57,   11,   11, 0x05,
     100,   11,   11,   11, 0x05,
     128,   11,   11,   11, 0x05,
     149,  147,   11,   11, 0x05,
     191,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     234,  223,   11,   11, 0x0a,
     281,  273,   11,   11, 0x0a,
     318,  273,   11,   11, 0x0a,
     347,  273,   11,   11, 0x0a,
     377,  273,   11,   11, 0x0a,
     412,  273,   11,   11, 0x0a,
     447,  273,   11,   11, 0x0a,
     476,  273,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ObjectTree[] = {
    "ObjectTree\0\0_action_name,_params\0"
    "action(QString,QString)\0,,\0"
    "rename_finished(string,QString,QString)\0"
    "swap_display(BaseTreeItem*)\0"
    "project_modified()\0,\0"
    "delete_property_finished(QString,QString)\0"
    "delete_object_finished(QString)\0"
    "_item,_col\0slotItemSelected(QTreeWidgetItem*,int)\0"
    "_action\0onPropertyContextMenuClick(QAction*)\0"
    "onUnaryActionClick(QAction*)\0"
    "onPythonScriptClick(QAction*)\0"
    "onPythonGroupScriptClick(QAction*)\0"
    "onObjectContextMenuClick(QAction*)\0"
    "onTrendActionClick(QAction*)\0"
    "onUnaryGroupActionClick(QAction*)\0"
};

const QMetaObject ObjectTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_ObjectTree,
      qt_meta_data_ObjectTree, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ObjectTree::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ObjectTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ObjectTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectTree))
        return static_cast<void*>(const_cast< ObjectTree*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int ObjectTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: action((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: rename_finished((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: swap_display((*reinterpret_cast< BaseTreeItem*(*)>(_a[1]))); break;
        case 3: project_modified(); break;
        case 4: delete_property_finished((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: delete_object_finished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: slotItemSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: onPropertyContextMenuClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: onUnaryActionClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 9: onPythonScriptClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 10: onPythonGroupScriptClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 11: onObjectContextMenuClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 12: onTrendActionClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 13: onUnaryGroupActionClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ObjectTree::action(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ObjectTree::rename_finished(string _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ObjectTree::swap_display(BaseTreeItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ObjectTree::project_modified()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ObjectTree::delete_property_finished(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ObjectTree::delete_object_finished(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
static const uint qt_meta_data_Project_view_gui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      48,   17,   17,   17, 0x0a,
      87,   83,   17,   17, 0x0a,
     118,   83,   17,   17, 0x0a,
     153,  143,   17,   17, 0x0a,
     191,   17,   17,   17, 0x0a,
     202,   17,   17,   17, 0x0a,
     218,   17,   17,   17, 0x0a,
     230,   17,   17,   17, 0x0a,
     242,   17,   17,   17, 0x0a,
     254,   17,   17,   17, 0x0a,
     265,   17,   17,   17, 0x0a,
     285,  276,   17,   17, 0x0a,
     318,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Project_view_gui[] = {
    "Project_view_gui\0\0update_display(BaseTreeItem*)\0"
    "object_clicked_slot(BaseTreeItem*)\0"
    "obj\0show_preference_panel(QString)\0"
    "show_info_panel(QString)\0grid,prop\0"
    "toggle_grid_property(QString,QString)\0"
    "view_all()\0set_home_view()\0home_view()\0"
    "face_view()\0side_view()\0top_view()\0"
    "snapshot()\0filename\0"
    "save_scenegraph_to_file(QString)\0"
    "reRender()\0"
};

const QMetaObject Project_view_gui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Project_view_gui,
      qt_meta_data_Project_view_gui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Project_view_gui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Project_view_gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Project_view_gui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Project_view_gui))
        return static_cast<void*>(const_cast< Project_view_gui*>(this));
    if (!strcmp(_clname, "Ui::Project_view_form"))
        return static_cast< Ui::Project_view_form*>(const_cast< Project_view_gui*>(this));
    return QWidget::qt_metacast(_clname);
}

int Project_view_gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update_display((*reinterpret_cast< BaseTreeItem*(*)>(_a[1]))); break;
        case 1: object_clicked_slot((*reinterpret_cast< BaseTreeItem*(*)>(_a[1]))); break;
        case 2: show_preference_panel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: show_info_panel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: toggle_grid_property((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: view_all(); break;
        case 6: set_home_view(); break;
        case 7: home_view(); break;
        case 8: face_view(); break;
        case 9: side_view(); break;
        case 10: top_view(); break;
        case 11: snapshot(); break;
        case 12: save_scenegraph_to_file((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: reRender(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
static const uint qt_meta_data_Oinv_view[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x0a,
      78,   57,   10,   10, 0x0a,
     110,   10,   10,   10, 0x0a,
     127,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Oinv_view[] = {
    "Oinv_view\0\0,,\0object_rename_slot(string,QString,QString)\0"
    "_action_name,_params\0"
    "execute_action(QString,QString)\0"
    "update_project()\0slot_delete_object(QString)\0"
};

const QMetaObject Oinv_view::staticMetaObject = {
    { &Project_view_gui::staticMetaObject, qt_meta_stringdata_Oinv_view,
      qt_meta_data_Oinv_view, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Oinv_view::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Oinv_view::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Oinv_view::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Oinv_view))
        return static_cast<void*>(const_cast< Oinv_view*>(this));
    if (!strcmp(_clname, "Project_view"))
        return static_cast< Project_view*>(const_cast< Oinv_view*>(this));
    return Project_view_gui::qt_metacast(_clname);
}

int Oinv_view::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Project_view_gui::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: object_rename_slot((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: execute_action((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: update_project(); break;
        case 3: slot_delete_object((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
