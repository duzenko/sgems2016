/****************************************************************************
** Meta object code from reading C++ file 'object_tree_context_menu.h'
**
** Created: Thu 23. Jun 17:50:31 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appli/object_tree_context_menu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'object_tree_context_menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BaseTreeItemMenu[] = {

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
      26,   18,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BaseTreeItemMenu[] = {
    "BaseTreeItemMenu\0\0_action\0"
    "onContextMenuClick(QAction*)\0"
};

const QMetaObject BaseTreeItemMenu::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_BaseTreeItemMenu,
      qt_meta_data_BaseTreeItemMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BaseTreeItemMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BaseTreeItemMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BaseTreeItemMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BaseTreeItemMenu))
        return static_cast<void*>(const_cast< BaseTreeItemMenu*>(this));
    return QMenu::qt_metacast(_clname);
}

int BaseTreeItemMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onContextMenuClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ObjectTreeItemMenu[] = {

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
      28,   20,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ObjectTreeItemMenu[] = {
    "ObjectTreeItemMenu\0\0_action\0"
    "onTrendActionClick(QAction*)\0"
};

const QMetaObject ObjectTreeItemMenu::staticMetaObject = {
    { &BaseTreeItemMenu::staticMetaObject, qt_meta_stringdata_ObjectTreeItemMenu,
      qt_meta_data_ObjectTreeItemMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ObjectTreeItemMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ObjectTreeItemMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ObjectTreeItemMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectTreeItemMenu))
        return static_cast<void*>(const_cast< ObjectTreeItemMenu*>(this));
    return BaseTreeItemMenu::qt_metacast(_clname);
}

int ObjectTreeItemMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTreeItemMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onTrendActionClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_PropertyTreeItemMenu_Single[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   29,   28,   28, 0x0a,
      66,   29,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PropertyTreeItemMenu_Single[] = {
    "PropertyTreeItemMenu_Single\0\0_action\0"
    "onUnaryActionClick(QAction*)\0"
    "onPythonScriptAction(QAction*)\0"
};

const QMetaObject PropertyTreeItemMenu_Single::staticMetaObject = {
    { &BaseTreeItemMenu::staticMetaObject, qt_meta_stringdata_PropertyTreeItemMenu_Single,
      qt_meta_data_PropertyTreeItemMenu_Single, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertyTreeItemMenu_Single::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertyTreeItemMenu_Single::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertyTreeItemMenu_Single::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyTreeItemMenu_Single))
        return static_cast<void*>(const_cast< PropertyTreeItemMenu_Single*>(this));
    return BaseTreeItemMenu::qt_metacast(_clname);
}

int PropertyTreeItemMenu_Single::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTreeItemMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onUnaryActionClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: onPythonScriptAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_PropertyTreeItemMenu_Multiple[] = {

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
      39,   31,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PropertyTreeItemMenu_Multiple[] = {
    "PropertyTreeItemMenu_Multiple\0\0_action\0"
    "onPythonScriptAction(QAction*)\0"
};

const QMetaObject PropertyTreeItemMenu_Multiple::staticMetaObject = {
    { &BaseTreeItemMenu::staticMetaObject, qt_meta_stringdata_PropertyTreeItemMenu_Multiple,
      qt_meta_data_PropertyTreeItemMenu_Multiple, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertyTreeItemMenu_Multiple::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertyTreeItemMenu_Multiple::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertyTreeItemMenu_Multiple::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyTreeItemMenu_Multiple))
        return static_cast<void*>(const_cast< PropertyTreeItemMenu_Multiple*>(this));
    return BaseTreeItemMenu::qt_metacast(_clname);
}

int PropertyTreeItemMenu_Multiple::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTreeItemMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onPythonScriptAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_PropertyGroupTreeItemMenu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   27,   26,   26, 0x0a,
      66,   27,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PropertyGroupTreeItemMenu[] = {
    "PropertyGroupTreeItemMenu\0\0_action\0"
    "onPythonScriptAction(QAction*)\0"
    "onUnaryGroupActionClick(QAction*)\0"
};

const QMetaObject PropertyGroupTreeItemMenu::staticMetaObject = {
    { &BaseTreeItemMenu::staticMetaObject, qt_meta_stringdata_PropertyGroupTreeItemMenu,
      qt_meta_data_PropertyGroupTreeItemMenu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertyGroupTreeItemMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertyGroupTreeItemMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertyGroupTreeItemMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyGroupTreeItemMenu))
        return static_cast<void*>(const_cast< PropertyGroupTreeItemMenu*>(this));
    return BaseTreeItemMenu::qt_metacast(_clname);
}

int PropertyGroupTreeItemMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTreeItemMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onPythonScriptAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: onUnaryGroupActionClick((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
