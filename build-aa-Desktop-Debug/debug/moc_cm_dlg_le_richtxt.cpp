/****************************************************************************
** Meta object code from reading C++ file 'cm_dlg_le_richtxt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../aa/hsap/cm_dlg_le_richtxt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cm_dlg_le_richtxt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASScm_dlG_le_RichTxtENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASScm_dlG_le_RichTxtENDCLASS = QtMocHelpers::stringData(
    "cm_dlG_le_RichTxt",
    "returnPressed",
    "",
    "toggleItalic",
    "toggleBold",
    "customContextMenuRequested",
    "pos",
    "applyTextEffect",
    "applyColor",
    "QAction*",
    "action"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScm_dlG_le_RichTxtENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[18];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[11];
    char stringdata5[27];
    char stringdata6[4];
    char stringdata7[16];
    char stringdata8[11];
    char stringdata9[9];
    char stringdata10[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScm_dlG_le_RichTxtENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScm_dlG_le_RichTxtENDCLASS_t qt_meta_stringdata_CLASScm_dlG_le_RichTxtENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "cm_dlG_le_RichTxt"
        QT_MOC_LITERAL(18, 13),  // "returnPressed"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 12),  // "toggleItalic"
        QT_MOC_LITERAL(46, 10),  // "toggleBold"
        QT_MOC_LITERAL(57, 26),  // "customContextMenuRequested"
        QT_MOC_LITERAL(84, 3),  // "pos"
        QT_MOC_LITERAL(88, 15),  // "applyTextEffect"
        QT_MOC_LITERAL(104, 10),  // "applyColor"
        QT_MOC_LITERAL(115, 8),  // "QAction*"
        QT_MOC_LITERAL(124, 6)   // "action"
    },
    "cm_dlG_le_RichTxt",
    "returnPressed",
    "",
    "toggleItalic",
    "toggleBold",
    "customContextMenuRequested",
    "pos",
    "applyTextEffect",
    "applyColor",
    "QAction*",
    "action"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScm_dlG_le_RichTxtENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x0a,    2 /* Public */,
       4,    0,   52,    2, 0x0a,    3 /* Public */,
       5,    1,   53,    2, 0x08,    4 /* Private */,
       7,    0,   56,    2, 0x08,    6 /* Private */,
       8,    1,   57,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject cm_dlG_le_RichTxt::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASScm_dlG_le_RichTxtENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScm_dlG_le_RichTxtENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScm_dlG_le_RichTxtENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<cm_dlG_le_RichTxt, std::true_type>,
        // method 'returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleItalic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleBold'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'applyTextEffect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'applyColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>
    >,
    nullptr
} };

void cm_dlG_le_RichTxt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cm_dlG_le_RichTxt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->returnPressed(); break;
        case 1: _t->toggleItalic(); break;
        case 2: _t->toggleBold(); break;
        case 3: _t->customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 4: _t->applyTextEffect(); break;
        case 5: _t->applyColor((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (cm_dlG_le_RichTxt::*)();
            if (_t _q_method = &cm_dlG_le_RichTxt::returnPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *cm_dlG_le_RichTxt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cm_dlG_le_RichTxt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScm_dlG_le_RichTxtENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int cm_dlG_le_RichTxt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void cm_dlG_le_RichTxt::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
