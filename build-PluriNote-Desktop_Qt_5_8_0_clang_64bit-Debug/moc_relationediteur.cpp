/****************************************************************************
** Meta object code from reading C++ file 'relationediteur.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PluriNote/relationediteur.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'relationediteur.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RelationEditeur_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RelationEditeur_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RelationEditeur_t qt_meta_stringdata_RelationEditeur = {
    {
QT_MOC_LITERAL(0, 0, 15), // "RelationEditeur"
QT_MOC_LITERAL(1, 16, 11), // "setOriented"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "modifierLabel"
QT_MOC_LITERAL(4, 43, 9), // "addCouple"
QT_MOC_LITERAL(5, 53, 15), // "supprimerCouple"
QT_MOC_LITERAL(6, 69, 8), // "ssetList"
QT_MOC_LITERAL(7, 78, 18), // "afficherRafraichir"
QT_MOC_LITERAL(8, 97, 15) // "afficherBoutons"

    },
    "RelationEditeur\0setOriented\0\0modifierLabel\0"
    "addCouple\0supprimerCouple\0ssetList\0"
    "afficherRafraichir\0afficherBoutons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RelationEditeur[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RelationEditeur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RelationEditeur *_t = static_cast<RelationEditeur *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setOriented(); break;
        case 1: _t->modifierLabel(); break;
        case 2: _t->addCouple(); break;
        case 3: _t->supprimerCouple(); break;
        case 4: _t->ssetList(); break;
        case 5: _t->afficherRafraichir(); break;
        case 6: _t->afficherBoutons(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RelationEditeur::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RelationEditeur.data,
      qt_meta_data_RelationEditeur,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RelationEditeur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RelationEditeur::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RelationEditeur.stringdata0))
        return static_cast<void*>(const_cast< RelationEditeur*>(this));
    return QWidget::qt_metacast(_clname);
}

int RelationEditeur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_ReferenceEditeur_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReferenceEditeur_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReferenceEditeur_t qt_meta_stringdata_ReferenceEditeur = {
    {
QT_MOC_LITERAL(0, 0, 16) // "ReferenceEditeur"

    },
    "ReferenceEditeur"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReferenceEditeur[] = {

 // content:
       7,       // revision
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

void ReferenceEditeur::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ReferenceEditeur::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ReferenceEditeur.data,
      qt_meta_data_ReferenceEditeur,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReferenceEditeur::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReferenceEditeur::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReferenceEditeur.stringdata0))
        return static_cast<void*>(const_cast< ReferenceEditeur*>(this));
    return QWidget::qt_metacast(_clname);
}

int ReferenceEditeur::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
