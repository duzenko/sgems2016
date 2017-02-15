/****************************************************************************
** Meta object code from reading C++ file 'categorical_selectors.h'
**
** Created: Thu 23. Jun 17:49:17 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../categorical_selectors.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'categorical_selectors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SingleCategoricalPropertySelector[] = {

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
      45,   35,   34,   34, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SingleCategoricalPropertySelector[] = {
    "SingleCategoricalPropertySelector\0\0"
    "grid_name\0show_properties(QString)\0"
};

const QMetaObject SingleCategoricalPropertySelector::staticMetaObject = {
    { &SinglePropertySelector::staticMetaObject, qt_meta_stringdata_SingleCategoricalPropertySelector,
      qt_meta_data_SingleCategoricalPropertySelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SingleCategoricalPropertySelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SingleCategoricalPropertySelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SingleCategoricalPropertySelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SingleCategoricalPropertySelector))
        return static_cast<void*>(const_cast< SingleCategoricalPropertySelector*>(this));
    return SinglePropertySelector::qt_metacast(_clname);
}

int SingleCategoricalPropertySelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinglePropertySelector::qt_metacall(_c, _id, _a);
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
static const uint qt_meta_data_MultiCategoricalPropertySelector[] = {

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
      44,   34,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MultiCategoricalPropertySelector[] = {
    "MultiCategoricalPropertySelector\0\0"
    "grid_name\0show_properties(QString)\0"
};

const QMetaObject MultiCategoricalPropertySelector::staticMetaObject = {
    { &MultiPropertySelector::staticMetaObject, qt_meta_stringdata_MultiCategoricalPropertySelector,
      qt_meta_data_MultiCategoricalPropertySelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiCategoricalPropertySelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiCategoricalPropertySelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiCategoricalPropertySelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiCategoricalPropertySelector))
        return static_cast<void*>(const_cast< MultiCategoricalPropertySelector*>(this));
    return MultiPropertySelector::qt_metacast(_clname);
}

int MultiCategoricalPropertySelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MultiPropertySelector::qt_metacall(_c, _id, _a);
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
static const uint qt_meta_data_Ordered_categorical_property_selector_dialog[] = {

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
      56,   46,   45,   45, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Ordered_categorical_property_selector_dialog[] = {
    "Ordered_categorical_property_selector_dialog\0"
    "\0grid_name\0show_properties(QString)\0"
};

const QMetaObject Ordered_categorical_property_selector_dialog::staticMetaObject = {
    { &Ordered_property_selector_dialog::staticMetaObject, qt_meta_stringdata_Ordered_categorical_property_selector_dialog,
      qt_meta_data_Ordered_categorical_property_selector_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ordered_categorical_property_selector_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ordered_categorical_property_selector_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ordered_categorical_property_selector_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ordered_categorical_property_selector_dialog))
        return static_cast<void*>(const_cast< Ordered_categorical_property_selector_dialog*>(this));
    return Ordered_property_selector_dialog::qt_metacast(_clname);
}

int Ordered_categorical_property_selector_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Ordered_property_selector_dialog::qt_metacall(_c, _id, _a);
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
static const uint qt_meta_data_OrderedCategoricalPropertySelector[] = {

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
      36,   35,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OrderedCategoricalPropertySelector[] = {
    "OrderedCategoricalPropertySelector\0\0"
    "show_selection_dialog()\0"
};

const QMetaObject OrderedCategoricalPropertySelector::staticMetaObject = {
    { &OrderedPropertySelector::staticMetaObject, qt_meta_stringdata_OrderedCategoricalPropertySelector,
      qt_meta_data_OrderedCategoricalPropertySelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OrderedCategoricalPropertySelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OrderedCategoricalPropertySelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OrderedCategoricalPropertySelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OrderedCategoricalPropertySelector))
        return static_cast<void*>(const_cast< OrderedCategoricalPropertySelector*>(this));
    return OrderedPropertySelector::qt_metacast(_clname);
}

int OrderedCategoricalPropertySelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OrderedPropertySelector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show_selection_dialog(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_CategoricalDefinitionSelector[] = {

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
      31,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CategoricalDefinitionSelector[] = {
    "CategoricalDefinitionSelector\0\0"
    "show_definitons()\0"
};

const QMetaObject CategoricalDefinitionSelector::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_CategoricalDefinitionSelector,
      qt_meta_data_CategoricalDefinitionSelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CategoricalDefinitionSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CategoricalDefinitionSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CategoricalDefinitionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CategoricalDefinitionSelector))
        return static_cast<void*>(const_cast< CategoricalDefinitionSelector*>(this));
    return QComboBox::qt_metacast(_clname);
}

int CategoricalDefinitionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show_definitons(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MultiCategoricalDefinitionSelector[] = {

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
      36,   35,   35,   35, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   35,   35,   35, 0x0a,
      75,   35,   35,   35, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MultiCategoricalDefinitionSelector[] = {
    "MultiCategoricalDefinitionSelector\0\0"
    "selected_count(int)\0show_definitions()\0"
    "selection_size()\0"
};

const QMetaObject MultiCategoricalDefinitionSelector::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_MultiCategoricalDefinitionSelector,
      qt_meta_data_MultiCategoricalDefinitionSelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultiCategoricalDefinitionSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultiCategoricalDefinitionSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultiCategoricalDefinitionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultiCategoricalDefinitionSelector))
        return static_cast<void*>(const_cast< MultiCategoricalDefinitionSelector*>(this));
    return QListWidget::qt_metacast(_clname);
}

int MultiCategoricalDefinitionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selected_count((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: show_definitions(); break;
        case 2: selection_size(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MultiCategoricalDefinitionSelector::selected_count(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_CategoricalDefinitionViewer[] = {

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
      29,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CategoricalDefinitionViewer[] = {
    "CategoricalDefinitionViewer\0\0"
    "show_definition(QString)\0"
};

const QMetaObject CategoricalDefinitionViewer::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_CategoricalDefinitionViewer,
      qt_meta_data_CategoricalDefinitionViewer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CategoricalDefinitionViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CategoricalDefinitionViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CategoricalDefinitionViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CategoricalDefinitionViewer))
        return static_cast<void*>(const_cast< CategoricalDefinitionViewer*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int CategoricalDefinitionViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: show_definition((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_MultipleCategorySelector[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   46,   25,   25, 0x0a,
     103,   84,   25,   25, 0x0a,
     132,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MultipleCategorySelector[] = {
    "MultipleCategorySelector\0\0selected_count(int)\0"
    "cat_def_name\0show_categories(QString)\0"
    "number_of_category\0show_default_categories(int)\0"
    "selection_size()\0"
};

const QMetaObject MultipleCategorySelector::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_MultipleCategorySelector,
      qt_meta_data_MultipleCategorySelector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MultipleCategorySelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MultipleCategorySelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MultipleCategorySelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MultipleCategorySelector))
        return static_cast<void*>(const_cast< MultipleCategorySelector*>(this));
    return QListWidget::qt_metacast(_clname);
}

int MultipleCategorySelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selected_count((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: show_categories((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: show_default_categories((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: selection_size(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MultipleCategorySelector::selected_count(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
