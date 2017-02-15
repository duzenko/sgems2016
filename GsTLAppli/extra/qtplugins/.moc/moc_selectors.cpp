/****************************************************************************
** Meta object code from reading C++ file 'selectors.h'
**
** Created: Thu 23. Jun 17:49:16 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../selectors.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GridSelectorBasic[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   19,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GridSelectorBasic[] = {
    "GridSelectorBasic\0\0obj\0"
    "new_object_available(QString)\0"
};

const QMetaObject GridSelectorBasic::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_GridSelectorBasic,
      qt_meta_data_GridSelectorBasic, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GridSelectorBasic::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GridSelectorBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GridSelectorBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GridSelectorBasic))
        return static_cast<void*>(const_cast< GridSelectorBasic*>(this));
    if (!strcmp(_clname, "Project_view"))
        return static_cast< Project_view*>(const_cast< GridSelectorBasic*>(this));
    return QComboBox::qt_metacast(_clname);
}

int GridSelectorBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: new_object_available((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GridSelectorBasic::new_object_available(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_SinglePropertySelector[] = {

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
      34,   24,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SinglePropertySelector[] = {
    "SinglePropertySelector\0\0grid_name\0"
    "show_properties(QString)\0"
};

const QMetaObject SinglePropertySelector::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_SinglePropertySelector,
      qt_meta_data_SinglePropertySelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SinglePropertySelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SinglePropertySelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SinglePropertySelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SinglePropertySelector))
        return static_cast<void*>(const_cast< SinglePropertySelector*>(this));
    return QComboBox::qt_metacast(_clname);
}

int SinglePropertySelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show_properties((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MultiPropertySelector[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   43,   22,   22, 0x0a,
      78,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MultiPropertySelector[] = {
    "MultiPropertySelector\0\0selected_count(int)\0"
    "grid_name\0show_properties(QString)\0"
    "selection_size()\0"
};

const QMetaObject MultiPropertySelector::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_MultiPropertySelector,
      qt_meta_data_MultiPropertySelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiPropertySelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiPropertySelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiPropertySelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiPropertySelector))
        return static_cast<void*>(const_cast< MultiPropertySelector*>(this));
    return QListWidget::qt_metacast(_clname);
}

int MultiPropertySelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selected_count((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: show_properties((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: selection_size(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MultiPropertySelector::selected_count(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PropertySelectorNoRegion[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   26,   25,   25, 0x05,
      59,   26,   25,   25, 0x05,
      87,   83,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PropertySelectorNoRegion[] = {
    "PropertySelectorNoRegion\0\0string\0"
    "property_changed(QString)\0"
    "object_changed(QString)\0obj\0"
    "new_object_available(QString)\0"
    "forward_property_changed()\0"
};

const QMetaObject PropertySelectorNoRegion::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PropertySelectorNoRegion,
      qt_meta_data_PropertySelectorNoRegion, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertySelectorNoRegion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertySelectorNoRegion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertySelectorNoRegion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertySelectorNoRegion))
        return static_cast<void*>(const_cast< PropertySelectorNoRegion*>(this));
    return QWidget::qt_metacast(_clname);
}

int PropertySelectorNoRegion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: property_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: object_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: new_object_available((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: forward_property_changed(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PropertySelectorNoRegion::property_changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PropertySelectorNoRegion::object_changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PropertySelectorNoRegion::new_object_available(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_Ordered_property_selector_dialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   33,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   66,   33,   33, 0x0a,
     106,  101,   33,   33, 0x0a,
     141,   33,   33,   33, 0x09,
     165,   33,   33,   33, 0x09,
     191,   33,   33,   33, 0x09,
     204,   33,   33,   33, 0x09,
     217,   33,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Ordered_property_selector_dialog[] = {
    "Ordered_property_selector_dialog\0\0"
    "selectedProperties(QStringList)\0"
    "grid_name\0show_properties(QString)\0"
    "list\0set_current_selection(QStringList)\0"
    "move_selected_item_up()\0"
    "move_selected_item_down()\0left2right()\0"
    "right2left()\0remove_selected_item()\0"
};

const QMetaObject Ordered_property_selector_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Ordered_property_selector_dialog,
      qt_meta_data_Ordered_property_selector_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ordered_property_selector_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ordered_property_selector_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ordered_property_selector_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ordered_property_selector_dialog))
        return static_cast<void*>(const_cast< Ordered_property_selector_dialog*>(this));
    if (!strcmp(_clname, "Ui::Ordered_property_selector_dialog_base"))
        return static_cast< Ui::Ordered_property_selector_dialog_base*>(const_cast< Ordered_property_selector_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Ordered_property_selector_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectedProperties((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: show_properties((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: set_current_selection((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: move_selected_item_up(); break;
        case 4: move_selected_item_down(); break;
        case 5: left2right(); break;
        case 6: right2left(); break;
        case 7: remove_selected_item(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Ordered_property_selector_dialog::selectedProperties(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_GsTLGroupBox[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       3,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   14,   13,   13, 0x0a,
      41,   33,   13,   13, 0x0a,
      60,   14,   13,   13, 0x0a,
      75,   33,   13,   13, 0x0a,
      93,   14,   13,   13, 0x0a,
     114,   33,   13,   13, 0x0a,
     138,   14,   13,   13, 0x0a,
     157,   33,   13,   13, 0x0a,
     179,   14,   13,   13, 0x0a,
     196,   33,   13,   13, 0x0a,
     216,   14,   13,   13, 0x0a,
     234,   33,   13,   13, 0x0a,

 // properties: name, type, flags
      33,  255, 0x0a095003,
     268,  263, 0x01095003,
     278,  263, 0x01095003,

       0        // eod
};

static const char qt_meta_stringdata_GsTLGroupBox[] = {
    "GsTLGroupBox\0\0on\0setHidden(bool)\0"
    "keyword\0setHidden(QString)\0setShown(bool)\0"
    "setShown(QString)\0setDeActivated(bool)\0"
    "setDeActivated(QString)\0setActivated(bool)\0"
    "setActivated(QString)\0setEnabled(bool)\0"
    "setEnabled(QString)\0setDisabled(bool)\0"
    "setDisabled(QString)\0QString\0bool\0"
    "displayed\0activated\0"
};

const QMetaObject GsTLGroupBox::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_GsTLGroupBox,
      qt_meta_data_GsTLGroupBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GsTLGroupBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GsTLGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GsTLGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GsTLGroupBox))
        return static_cast<void*>(const_cast< GsTLGroupBox*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int GsTLGroupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: setHidden((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: setShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: setShown((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: setDeActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: setDeActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: setActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: setActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: setEnabled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: setDisabled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = keyword(); break;
        case 1: *reinterpret_cast< bool*>(_v) = is_displayed(); break;
        case 2: *reinterpret_cast< bool*>(_v) = is_activated(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: set_keyword(*reinterpret_cast< QString*>(_v)); break;
        case 1: set_displayed(*reinterpret_cast< bool*>(_v)); break;
        case 2: set_activated(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_GsTLButtonGroup[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   17,   16,   16, 0x0a,
      44,   36,   16,   16, 0x0a,
      63,   17,   16,   16, 0x0a,
      78,   36,   16,   16, 0x0a,
      96,   17,   16,   16, 0x0a,
     117,   36,   16,   16, 0x0a,
     141,   17,   16,   16, 0x0a,
     160,   36,   16,   16, 0x0a,

 // properties: name, type, flags
      36,  182, 0x0a095003,
     195,  190, 0x01095003,
     205,  190, 0x01095003,

       0        // eod
};

static const char qt_meta_stringdata_GsTLButtonGroup[] = {
    "GsTLButtonGroup\0\0on\0setHidden(bool)\0"
    "keyword\0setHidden(QString)\0setShown(bool)\0"
    "setShown(QString)\0setDeActivated(bool)\0"
    "setDeActivated(QString)\0setActivated(bool)\0"
    "setActivated(QString)\0QString\0bool\0"
    "displayed\0activated\0"
};

const QMetaObject GsTLButtonGroup::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_GsTLButtonGroup,
      qt_meta_data_GsTLButtonGroup, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GsTLButtonGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GsTLButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GsTLButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GsTLButtonGroup))
        return static_cast<void*>(const_cast< GsTLButtonGroup*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int GsTLButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setHidden((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: setHidden((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: setShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: setShown((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: setDeActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: setDeActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: setActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: setActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = keyword(); break;
        case 1: *reinterpret_cast< bool*>(_v) = is_displayed(); break;
        case 2: *reinterpret_cast< bool*>(_v) = is_activated(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: set_keyword(*reinterpret_cast< QString*>(_v)); break;
        case 1: set_displayed(*reinterpret_cast< bool*>(_v)); break;
        case 2: set_activated(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
static const uint qt_meta_data_CloneGroupBox[] = {

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
      17,   15,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CloneGroupBox[] = {
    "CloneGroupBox\0\0n\0set_count(int)\0"
};

const QMetaObject CloneGroupBox::staticMetaObject = {
    { &GsTLGroupBox::staticMetaObject, qt_meta_stringdata_CloneGroupBox,
      qt_meta_data_CloneGroupBox, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CloneGroupBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CloneGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CloneGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CloneGroupBox))
        return static_cast<void*>(const_cast< CloneGroupBox*>(this));
    return GsTLGroupBox::qt_metacast(_clname);
}

int CloneGroupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GsTLGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: set_count((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_OrderedPropertySelector[] = {

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
      25,   24,   24,   24, 0x05,
      45,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   84,   24,   24, 0x0a,
     119,   24,   24,   24, 0x0a,
     143,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrderedPropertySelector[] = {
    "OrderedPropertySelector\0\0selected_count(int)\0"
    "forwardSelectedProperties(QStringList)\0"
    "grid_name\0show_properties(QString)\0"
    "show_selection_dialog()\0forwardSelection(int)\0"
};

const QMetaObject OrderedPropertySelector::staticMetaObject = {
    { &GsTLGroupBox::staticMetaObject, qt_meta_stringdata_OrderedPropertySelector,
      qt_meta_data_OrderedPropertySelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrderedPropertySelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrderedPropertySelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrderedPropertySelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrderedPropertySelector))
        return static_cast<void*>(const_cast< OrderedPropertySelector*>(this));
    return GsTLGroupBox::qt_metacast(_clname);
}

int OrderedPropertySelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GsTLGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selected_count((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: forwardSelectedProperties((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: show_properties((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: show_selection_dialog(); break;
        case 4: forwardSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OrderedPropertySelector::selected_count(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OrderedPropertySelector::forwardSelectedProperties(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_SingleRegionSelector[] = {

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
      32,   22,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SingleRegionSelector[] = {
    "SingleRegionSelector\0\0grid_name\0"
    "show_regions(QString)\0"
};

const QMetaObject SingleRegionSelector::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_SingleRegionSelector,
      qt_meta_data_SingleRegionSelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SingleRegionSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SingleRegionSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SingleRegionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SingleRegionSelector))
        return static_cast<void*>(const_cast< SingleRegionSelector*>(this));
    return QComboBox::qt_metacast(_clname);
}

int SingleRegionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show_regions((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MultiRegionSelector[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   41,   20,   20, 0x0a,
      73,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MultiRegionSelector[] = {
    "MultiRegionSelector\0\0selected_count(int)\0"
    "grid_name\0show_regions(QString)\0"
    "selection_size()\0"
};

const QMetaObject MultiRegionSelector::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_MultiRegionSelector,
      qt_meta_data_MultiRegionSelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiRegionSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiRegionSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiRegionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiRegionSelector))
        return static_cast<void*>(const_cast< MultiRegionSelector*>(this));
    return QListWidget::qt_metacast(_clname);
}

int MultiRegionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selected_count((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: show_regions((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: selection_size(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MultiRegionSelector::selected_count(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_GridSelector[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   14,   13,   13, 0x05,
      45,   14,   13,   13, 0x05,
      73,   69,   13,   13, 0x05,
     103,   69,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     122,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_GridSelector[] = {
    "GridSelector\0\0string\0region_changed(QString)\0"
    "object_changed(QString)\0obj\0"
    "new_object_available(QString)\0"
    "activated(QString)\0forward_region_changed()\0"
};

const QMetaObject GridSelector::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_GridSelector,
      qt_meta_data_GridSelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GridSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GridSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GridSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GridSelector))
        return static_cast<void*>(const_cast< GridSelector*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int GridSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: region_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: object_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: new_object_available((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: forward_region_changed(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GridSelector::region_changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GridSelector::object_changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GridSelector::new_object_available(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GridSelector::activated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_PropertySelector[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   18,   17,   17, 0x05,
      51,   18,   17,   17, 0x05,
      75,   18,   17,   17, 0x05,
     103,   99,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     133,   17,   17,   17, 0x09,
     160,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PropertySelector[] = {
    "PropertySelector\0\0string\0"
    "property_changed(QString)\0"
    "region_changed(QString)\0object_changed(QString)\0"
    "obj\0new_object_available(QString)\0"
    "forward_property_changed()\0"
    "forward_region_changed()\0"
};

const QMetaObject PropertySelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PropertySelector,
      qt_meta_data_PropertySelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertySelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertySelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertySelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertySelector))
        return static_cast<void*>(const_cast< PropertySelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int PropertySelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: property_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: region_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: object_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: new_object_available((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: forward_property_changed(); break;
        case 5: forward_region_changed(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PropertySelector::property_changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PropertySelector::region_changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PropertySelector::object_changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PropertySelector::new_object_available(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
