/****************************************************************************
** Meta object code from reading C++ file 'hsp_filter_wgt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../aa/hsap/hsp_filter_wgt.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hsp_filter_wgt.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASShsp_filter_wgtENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASShsp_filter_wgtENDCLASS = QtMocHelpers::stringData(
    "hsp_filter_wgt",
    "filterChanged",
    "",
    "caseSensitivity",
    "Qt::CaseSensitivity",
    "patternSyntax",
    "PatternSyntax",
    "RegularExpression",
    "Wildcard",
    "FixedString"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASShsp_filter_wgtENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[15];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[20];
    char stringdata5[14];
    char stringdata6[14];
    char stringdata7[18];
    char stringdata8[9];
    char stringdata9[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASShsp_filter_wgtENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASShsp_filter_wgtENDCLASS_t qt_meta_stringdata_CLASShsp_filter_wgtENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "hsp_filter_wgt"
        QT_MOC_LITERAL(15, 13),  // "filterChanged"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 15),  // "caseSensitivity"
        QT_MOC_LITERAL(46, 19),  // "Qt::CaseSensitivity"
        QT_MOC_LITERAL(66, 13),  // "patternSyntax"
        QT_MOC_LITERAL(80, 13),  // "PatternSyntax"
        QT_MOC_LITERAL(94, 17),  // "RegularExpression"
        QT_MOC_LITERAL(112, 8),  // "Wildcard"
        QT_MOC_LITERAL(121, 11)   // "FixedString"
    },
    "hsp_filter_wgt",
    "filterChanged",
    "",
    "caseSensitivity",
    "Qt::CaseSensitivity",
    "patternSyntax",
    "PatternSyntax",
    "RegularExpression",
    "Wildcard",
    "FixedString"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASShsp_filter_wgtENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   21, // properties
       1,   31, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0001510b, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    3,   36,

 // enum data: key, value
       7, uint(hsp_filter_wgt::RegularExpression),
       8, uint(hsp_filter_wgt::Wildcard),
       9, uint(hsp_filter_wgt::FixedString),

       0        // eod
};

Q_CONSTINIT const QMetaObject hsp_filter_wgt::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASShsp_filter_wgtENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASShsp_filter_wgtENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASShsp_filter_wgtENDCLASS_t,
        // property 'caseSensitivity'
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::true_type>,
        // property 'patternSyntax'
        QtPrivate::TypeAndForceComplete<PatternSyntax, std::true_type>,
        // enum 'PatternSyntax'
        QtPrivate::TypeAndForceComplete<hsp_filter_wgt::PatternSyntax, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<hsp_filter_wgt, std::true_type>,
        // method 'filterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void hsp_filter_wgt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<hsp_filter_wgt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->filterChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (hsp_filter_wgt::*)();
            if (_t _q_method = &hsp_filter_wgt::filterChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<hsp_filter_wgt *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = _t->caseSensitivity(); break;
        case 1: *reinterpret_cast< PatternSyntax*>(_v) = _t->patternSyntax(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<hsp_filter_wgt *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        case 1: _t->setPatternSyntax(*reinterpret_cast< PatternSyntax*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *hsp_filter_wgt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hsp_filter_wgt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASShsp_filter_wgtENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int hsp_filter_wgt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void hsp_filter_wgt::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
