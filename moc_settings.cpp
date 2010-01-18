/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created: Thu Jan 7 23:35:11 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "settings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_settings[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      31,    9,    9,    9, 0x08,
      51,    9,    9,    9, 0x08,
      67,    9,    9,    9, 0x08,
      93,    9,    9,    9, 0x08,
     118,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_settings[] = {
    "settings\0\0on_new_btn_clicked()\0"
    "on_Cancel_clicked()\0on_OK_clicked()\0"
    "on_local_button_clicked()\0"
    "on_local_radio_clicked()\0"
    "on_remote_radio_clicked()\0"
};

const QMetaObject settings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_settings,
      qt_meta_data_settings, 0 }
};

const QMetaObject *settings::metaObject() const
{
    return &staticMetaObject;
}

void *settings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_settings))
        return static_cast<void*>(const_cast< settings*>(this));
    return QDialog::qt_metacast(_clname);
}

int settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_new_btn_clicked(); break;
        case 1: on_Cancel_clicked(); break;
        case 2: on_OK_clicked(); break;
        case 3: on_local_button_clicked(); break;
        case 4: on_local_radio_clicked(); break;
        case 5: on_remote_radio_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
