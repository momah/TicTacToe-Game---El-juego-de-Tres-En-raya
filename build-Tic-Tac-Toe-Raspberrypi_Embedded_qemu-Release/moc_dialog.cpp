/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Tue Jul 4 15:21:11 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Tic-Tac-Toe/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      34,    7,    7,    7, 0x08,
      59,    7,    7,    7, 0x08,
      84,    7,    7,    7, 0x08,
     111,    7,    7,    7, 0x08,
     138,    7,    7,    7, 0x08,
     161,    7,    7,    7, 0x08,
     189,    7,    7,    7, 0x08,
     219,    7,    7,    7, 0x08,
     248,    7,    7,    7, 0x08,
     279,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0on_upLeftButton_clicked()\0"
    "on_resetButton_clicked()\0"
    "on_upMidButton_clicked()\0"
    "on_upRightButton_clicked()\0"
    "on_midLeftButton_clicked()\0"
    "on_midButton_clicked()\0"
    "on_midRightButton_clicked()\0"
    "on_bottomLeftButton_clicked()\0"
    "on_bottomMidButton_clicked()\0"
    "on_bottomRightButton_clicked()\0"
    "on_pushButton_clicked()\0"
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog *_t = static_cast<Dialog *>(_o);
        switch (_id) {
        case 0: _t->on_upLeftButton_clicked(); break;
        case 1: _t->on_resetButton_clicked(); break;
        case 2: _t->on_upMidButton_clicked(); break;
        case 3: _t->on_upRightButton_clicked(); break;
        case 4: _t->on_midLeftButton_clicked(); break;
        case 5: _t->on_midButton_clicked(); break;
        case 6: _t->on_midRightButton_clicked(); break;
        case 7: _t->on_bottomLeftButton_clicked(); break;
        case 8: _t->on_bottomMidButton_clicked(); break;
        case 9: _t->on_bottomRightButton_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
