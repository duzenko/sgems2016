/****************************************************************************
** Meta object code from reading C++ file 'csv_filter_qt_dialogs.h'
**
** Created: Thu 23. Jun 17:49:41 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../csv_filter_qt_dialogs.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csv_filter_qt_dialogs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Csv_infilter_dialog[] = {

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
      21,   20,   20,   20, 0x0a,
      56,   20,   20,   20, 0x09,
      65,   20,   20,   20, 0x09,
      79,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Csv_infilter_dialog[] = {
    "Csv_infilter_dialog\0\0"
    "create_specialized_filter(QString)\0"
    "accept()\0nextClicked()\0backClicked()\0"
};

const QMetaObject Csv_infilter_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Csv_infilter_dialog,
      qt_meta_data_Csv_infilter_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Csv_infilter_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Csv_infilter_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Csv_infilter_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Csv_infilter_dialog))
        return static_cast<void*>(const_cast< Csv_infilter_dialog*>(this));
    if (!strcmp(_clname, "Ui::ImportWizard"))
        return static_cast< Ui::ImportWizard*>(const_cast< Csv_infilter_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Csv_infilter_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: create_specialized_filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: accept(); break;
        case 2: nextClicked(); break;
        case 3: backClicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_Csv_input_mgrid_dialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Csv_input_mgrid_dialog[] = {
    "Csv_input_mgrid_dialog\0"
};

const QMetaObject Csv_input_mgrid_dialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Csv_input_mgrid_dialog,
      qt_meta_data_Csv_input_mgrid_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Csv_input_mgrid_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Csv_input_mgrid_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Csv_input_mgrid_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Csv_input_mgrid_dialog))
        return static_cast<void*>(const_cast< Csv_input_mgrid_dialog*>(this));
    if (!strcmp(_clname, "Ui::CsvMaskedImport"))
        return static_cast< Ui::CsvMaskedImport*>(const_cast< Csv_input_mgrid_dialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int Csv_input_mgrid_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Csv_input_grid_dialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Csv_input_grid_dialog[] = {
    "Csv_input_grid_dialog\0"
};

const QMetaObject Csv_input_grid_dialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Csv_input_grid_dialog,
      qt_meta_data_Csv_input_grid_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Csv_input_grid_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Csv_input_grid_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Csv_input_grid_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Csv_input_grid_dialog))
        return static_cast<void*>(const_cast< Csv_input_grid_dialog*>(this));
    if (!strcmp(_clname, "Ui::CsvGridImport"))
        return static_cast< Ui::CsvGridImport*>(const_cast< Csv_input_grid_dialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int Csv_input_grid_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Csv_input_pointset_dialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Csv_input_pointset_dialog[] = {
    "Csv_input_pointset_dialog\0"
};

const QMetaObject Csv_input_pointset_dialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Csv_input_pointset_dialog,
      qt_meta_data_Csv_input_pointset_dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Csv_input_pointset_dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Csv_input_pointset_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Csv_input_pointset_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Csv_input_pointset_dialog))
        return static_cast<void*>(const_cast< Csv_input_pointset_dialog*>(this));
    if (!strcmp(_clname, "Ui::CsvPointsetImport"))
        return static_cast< Ui::CsvPointsetImport*>(const_cast< Csv_input_pointset_dialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int Csv_input_pointset_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
