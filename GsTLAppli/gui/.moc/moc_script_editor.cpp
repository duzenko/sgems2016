/****************************************************************************
** Meta object code from reading C++ file 'script_editor.h'
**
** Created: Thu 23. Jun 17:50:29 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../utils/script_editor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'script_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Script_editor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      28,   14,   14,   14, 0x0a,
      42,   14,   14,   14, 0x0a,
      56,   14,   14,   14, 0x0a,
      73,   14,   14,   14, 0x0a,
      86,   14,   14,   14, 0x0a,
     101,   99,   14,   14, 0x0a,
     121,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Script_editor[] = {
    "Script_editor\0\0new_script()\0load_script()\0"
    "save_script()\0save_script_as()\0"
    "go_to_line()\0run_script()\0s\0"
    "set_point_size(int)\0close_slot()\0"
};

const QMetaObject Script_editor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Script_editor,
      qt_meta_data_Script_editor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Script_editor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Script_editor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Script_editor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Script_editor))
        return static_cast<void*>(const_cast< Script_editor*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Script_editor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: new_script(); break;
        case 1: load_script(); break;
        case 2: save_script(); break;
        case 3: save_script_as(); break;
        case 4: go_to_line(); break;
        case 5: run_script(); break;
        case 6: set_point_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: close_slot(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
