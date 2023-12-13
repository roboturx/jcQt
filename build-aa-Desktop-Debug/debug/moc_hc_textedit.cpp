/****************************************************************************
** Meta object code from reading C++ file 'hc_textedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../aa/libs/hc_textedit.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hc_textedit.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASShC_TextEditENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASShC_TextEditENDCLASS = QtMocHelpers::stringData(
    "hC_TextEdit",
    "yrdmTextChanged",
    "",
    "QTextEdit*",
    "fileNew",
    "textChanged",
    "fileOpen",
    "fileSave",
    "fileSaveAs",
    "filePrint",
    "filePrintPreview",
    "filePrintPdf",
    "textBold",
    "textUnderline",
    "textItalic",
    "textFamily",
    "f",
    "textSize",
    "p",
    "textStyle",
    "styleIndex",
    "textColor",
    "underlineColor",
    "textAlign",
    "QAction*",
    "a",
    "setChecked",
    "checked",
    "indent",
    "unindent",
    "currentCharFormatChanged",
    "QTextCharFormat",
    "format",
    "cursorPositionChanged",
    "clipboardDataChanged",
    "about"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASShC_TextEditENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[12];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[8];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[9];
    char stringdata8[11];
    char stringdata9[10];
    char stringdata10[17];
    char stringdata11[13];
    char stringdata12[9];
    char stringdata13[14];
    char stringdata14[11];
    char stringdata15[11];
    char stringdata16[2];
    char stringdata17[9];
    char stringdata18[2];
    char stringdata19[10];
    char stringdata20[11];
    char stringdata21[10];
    char stringdata22[15];
    char stringdata23[10];
    char stringdata24[9];
    char stringdata25[2];
    char stringdata26[11];
    char stringdata27[8];
    char stringdata28[7];
    char stringdata29[9];
    char stringdata30[25];
    char stringdata31[16];
    char stringdata32[7];
    char stringdata33[22];
    char stringdata34[21];
    char stringdata35[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASShC_TextEditENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASShC_TextEditENDCLASS_t qt_meta_stringdata_CLASShC_TextEditENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "hC_TextEdit"
        QT_MOC_LITERAL(12, 15),  // "yrdmTextChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 10),  // "QTextEdit*"
        QT_MOC_LITERAL(40, 7),  // "fileNew"
        QT_MOC_LITERAL(48, 11),  // "textChanged"
        QT_MOC_LITERAL(60, 8),  // "fileOpen"
        QT_MOC_LITERAL(69, 8),  // "fileSave"
        QT_MOC_LITERAL(78, 10),  // "fileSaveAs"
        QT_MOC_LITERAL(89, 9),  // "filePrint"
        QT_MOC_LITERAL(99, 16),  // "filePrintPreview"
        QT_MOC_LITERAL(116, 12),  // "filePrintPdf"
        QT_MOC_LITERAL(129, 8),  // "textBold"
        QT_MOC_LITERAL(138, 13),  // "textUnderline"
        QT_MOC_LITERAL(152, 10),  // "textItalic"
        QT_MOC_LITERAL(163, 10),  // "textFamily"
        QT_MOC_LITERAL(174, 1),  // "f"
        QT_MOC_LITERAL(176, 8),  // "textSize"
        QT_MOC_LITERAL(185, 1),  // "p"
        QT_MOC_LITERAL(187, 9),  // "textStyle"
        QT_MOC_LITERAL(197, 10),  // "styleIndex"
        QT_MOC_LITERAL(208, 9),  // "textColor"
        QT_MOC_LITERAL(218, 14),  // "underlineColor"
        QT_MOC_LITERAL(233, 9),  // "textAlign"
        QT_MOC_LITERAL(243, 8),  // "QAction*"
        QT_MOC_LITERAL(252, 1),  // "a"
        QT_MOC_LITERAL(254, 10),  // "setChecked"
        QT_MOC_LITERAL(265, 7),  // "checked"
        QT_MOC_LITERAL(273, 6),  // "indent"
        QT_MOC_LITERAL(280, 8),  // "unindent"
        QT_MOC_LITERAL(289, 24),  // "currentCharFormatChanged"
        QT_MOC_LITERAL(314, 15),  // "QTextCharFormat"
        QT_MOC_LITERAL(330, 6),  // "format"
        QT_MOC_LITERAL(337, 21),  // "cursorPositionChanged"
        QT_MOC_LITERAL(359, 20),  // "clipboardDataChanged"
        QT_MOC_LITERAL(380, 5)   // "about"
    },
    "hC_TextEdit",
    "yrdmTextChanged",
    "",
    "QTextEdit*",
    "fileNew",
    "textChanged",
    "fileOpen",
    "fileSave",
    "fileSaveAs",
    "filePrint",
    "filePrintPreview",
    "filePrintPdf",
    "textBold",
    "textUnderline",
    "textItalic",
    "textFamily",
    "f",
    "textSize",
    "p",
    "textStyle",
    "styleIndex",
    "textColor",
    "underlineColor",
    "textAlign",
    "QAction*",
    "a",
    "setChecked",
    "checked",
    "indent",
    "unindent",
    "currentCharFormatChanged",
    "QTextCharFormat",
    "format",
    "cursorPositionChanged",
    "clipboardDataChanged",
    "about"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASShC_TextEditENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  164,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  167,    2, 0x0a,    3 /* Public */,
       5,    0,  168,    2, 0x08,    4 /* Private */,
       6,    0,  169,    2, 0x08,    5 /* Private */,
       7,    0,  170,    2, 0x08,    6 /* Private */,
       8,    0,  171,    2, 0x08,    7 /* Private */,
       9,    0,  172,    2, 0x08,    8 /* Private */,
      10,    0,  173,    2, 0x08,    9 /* Private */,
      11,    0,  174,    2, 0x08,   10 /* Private */,
      12,    0,  175,    2, 0x08,   11 /* Private */,
      13,    0,  176,    2, 0x08,   12 /* Private */,
      14,    0,  177,    2, 0x08,   13 /* Private */,
      15,    1,  178,    2, 0x08,   14 /* Private */,
      17,    1,  181,    2, 0x08,   16 /* Private */,
      19,    1,  184,    2, 0x08,   18 /* Private */,
      21,    0,  187,    2, 0x08,   20 /* Private */,
      22,    0,  188,    2, 0x08,   21 /* Private */,
      23,    1,  189,    2, 0x08,   22 /* Private */,
      26,    1,  192,    2, 0x08,   24 /* Private */,
      28,    0,  195,    2, 0x08,   26 /* Private */,
      29,    0,  196,    2, 0x08,   27 /* Private */,
      30,    1,  197,    2, 0x08,   28 /* Private */,
      33,    0,  200,    2, 0x08,   30 /* Private */,
      34,    0,  201,    2, 0x08,   31 /* Private */,
      35,    0,  202,    2, 0x08,   32 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Bool,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject hC_TextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASShC_TextEditENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASShC_TextEditENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASShC_TextEditENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<hC_TextEdit, std::true_type>,
        // method 'yrdmTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTextEdit *, std::false_type>,
        // method 'fileNew'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileSave'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'fileSaveAs'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'filePrint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filePrintPreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filePrintPdf'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textBold'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textUnderline'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textItalic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textFamily'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'textSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'textStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'textColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'underlineColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textAlign'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'setChecked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'indent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'unindent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentCharFormatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTextCharFormat &, std::false_type>,
        // method 'cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clipboardDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'about'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void hC_TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<hC_TextEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->yrdmTextChanged((*reinterpret_cast< std::add_pointer_t<QTextEdit*>>(_a[1]))); break;
        case 1: _t->fileNew(); break;
        case 2: _t->textChanged(); break;
        case 3: _t->fileOpen(); break;
        case 4: { bool _r = _t->fileSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->fileSaveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->filePrint(); break;
        case 7: _t->filePrintPreview(); break;
        case 8: _t->filePrintPdf(); break;
        case 9: _t->textBold(); break;
        case 10: _t->textUnderline(); break;
        case 11: _t->textItalic(); break;
        case 12: _t->textFamily((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->textSize((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->textStyle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->textColor(); break;
        case 16: _t->underlineColor(); break;
        case 17: _t->textAlign((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 18: _t->setChecked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->indent(); break;
        case 20: _t->unindent(); break;
        case 21: _t->currentCharFormatChanged((*reinterpret_cast< std::add_pointer_t<QTextCharFormat>>(_a[1]))); break;
        case 22: _t->cursorPositionChanged(); break;
        case 23: _t->clipboardDataChanged(); break;
        case 24: _t->about(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QTextEdit* >(); break;
            }
            break;
        case 17:
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
            using _t = void (hC_TextEdit::*)(QTextEdit * );
            if (_t _q_method = &hC_TextEdit::yrdmTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *hC_TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hC_TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASShC_TextEditENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int hC_TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void hC_TextEdit::yrdmTextChanged(QTextEdit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
