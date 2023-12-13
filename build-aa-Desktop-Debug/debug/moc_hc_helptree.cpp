/****************************************************************************
** Meta object code from reading C++ file 'hc_helptree.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../aa/libs/hc_helptree.h"
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
#error "The header file 'hc_helptree.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASShC_helpTreeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASShC_helpTreeENDCLASS = QtMocHelpers::stringData(
    "hC_helpTree",
    "sgnHelp",
    "",
    "HelpItem*",
    "currentHelpItem",
    "stopTiming",
    "updateUi",
    "fileNew",
    "fileDBNew",
    "fileOpen",
    "fileSave",
    "fileSaveAs",
    "editAdd",
    "editDelete",
    "editCut",
    "editPaste",
    "editMoveUp",
    "editMoveDown",
    "editPromote",
    "editDemote",
    "editStartOrStop",
    "start",
    "editHideOrShowDoneTasks",
    "hide",
    "setDirty",
    "dirty",
    "load",
    "filename",
    "taskPath",
    "timeout",
    "updateIcon",
    "frame",
    "customContextMenuRequested",
    "pos",
    "contextMenuEvent",
    "QContextMenuEvent*",
    "event"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASShC_helpTreeENDCLASS_t {
    uint offsetsAndSizes[74];
    char stringdata0[12];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[16];
    char stringdata5[11];
    char stringdata6[9];
    char stringdata7[8];
    char stringdata8[10];
    char stringdata9[9];
    char stringdata10[9];
    char stringdata11[11];
    char stringdata12[8];
    char stringdata13[11];
    char stringdata14[8];
    char stringdata15[10];
    char stringdata16[11];
    char stringdata17[13];
    char stringdata18[12];
    char stringdata19[11];
    char stringdata20[16];
    char stringdata21[6];
    char stringdata22[24];
    char stringdata23[5];
    char stringdata24[9];
    char stringdata25[6];
    char stringdata26[5];
    char stringdata27[9];
    char stringdata28[9];
    char stringdata29[8];
    char stringdata30[11];
    char stringdata31[6];
    char stringdata32[27];
    char stringdata33[4];
    char stringdata34[17];
    char stringdata35[19];
    char stringdata36[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASShC_helpTreeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASShC_helpTreeENDCLASS_t qt_meta_stringdata_CLASShC_helpTreeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "hC_helpTree"
        QT_MOC_LITERAL(12, 7),  // "sgnHelp"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 9),  // "HelpItem*"
        QT_MOC_LITERAL(31, 15),  // "currentHelpItem"
        QT_MOC_LITERAL(47, 10),  // "stopTiming"
        QT_MOC_LITERAL(58, 8),  // "updateUi"
        QT_MOC_LITERAL(67, 7),  // "fileNew"
        QT_MOC_LITERAL(75, 9),  // "fileDBNew"
        QT_MOC_LITERAL(85, 8),  // "fileOpen"
        QT_MOC_LITERAL(94, 8),  // "fileSave"
        QT_MOC_LITERAL(103, 10),  // "fileSaveAs"
        QT_MOC_LITERAL(114, 7),  // "editAdd"
        QT_MOC_LITERAL(122, 10),  // "editDelete"
        QT_MOC_LITERAL(133, 7),  // "editCut"
        QT_MOC_LITERAL(141, 9),  // "editPaste"
        QT_MOC_LITERAL(151, 10),  // "editMoveUp"
        QT_MOC_LITERAL(162, 12),  // "editMoveDown"
        QT_MOC_LITERAL(175, 11),  // "editPromote"
        QT_MOC_LITERAL(187, 10),  // "editDemote"
        QT_MOC_LITERAL(198, 15),  // "editStartOrStop"
        QT_MOC_LITERAL(214, 5),  // "start"
        QT_MOC_LITERAL(220, 23),  // "editHideOrShowDoneTasks"
        QT_MOC_LITERAL(244, 4),  // "hide"
        QT_MOC_LITERAL(249, 8),  // "setDirty"
        QT_MOC_LITERAL(258, 5),  // "dirty"
        QT_MOC_LITERAL(264, 4),  // "load"
        QT_MOC_LITERAL(269, 8),  // "filename"
        QT_MOC_LITERAL(278, 8),  // "taskPath"
        QT_MOC_LITERAL(287, 7),  // "timeout"
        QT_MOC_LITERAL(295, 10),  // "updateIcon"
        QT_MOC_LITERAL(306, 5),  // "frame"
        QT_MOC_LITERAL(312, 26),  // "customContextMenuRequested"
        QT_MOC_LITERAL(339, 3),  // "pos"
        QT_MOC_LITERAL(343, 16),  // "contextMenuEvent"
        QT_MOC_LITERAL(360, 18),  // "QContextMenuEvent*"
        QT_MOC_LITERAL(379, 5)   // "event"
    },
    "hC_helpTree",
    "sgnHelp",
    "",
    "HelpItem*",
    "currentHelpItem",
    "stopTiming",
    "updateUi",
    "fileNew",
    "fileDBNew",
    "fileOpen",
    "fileSave",
    "fileSaveAs",
    "editAdd",
    "editDelete",
    "editCut",
    "editPaste",
    "editMoveUp",
    "editMoveDown",
    "editPromote",
    "editDemote",
    "editStartOrStop",
    "start",
    "editHideOrShowDoneTasks",
    "hide",
    "setDirty",
    "dirty",
    "load",
    "filename",
    "taskPath",
    "timeout",
    "updateIcon",
    "frame",
    "customContextMenuRequested",
    "pos",
    "contextMenuEvent",
    "QContextMenuEvent*",
    "event"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASShC_helpTreeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  170,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,  173,    2, 0x0a,    3 /* Public */,
       6,    0,  174,    2, 0x0a,    4 /* Public */,
       7,    0,  175,    2, 0x08,    5 /* Private */,
       8,    0,  176,    2, 0x08,    6 /* Private */,
       9,    0,  177,    2, 0x08,    7 /* Private */,
      10,    0,  178,    2, 0x08,    8 /* Private */,
      11,    0,  179,    2, 0x08,    9 /* Private */,
      12,    0,  180,    2, 0x08,   10 /* Private */,
      13,    0,  181,    2, 0x08,   11 /* Private */,
      14,    0,  182,    2, 0x08,   12 /* Private */,
      15,    0,  183,    2, 0x08,   13 /* Private */,
      16,    0,  184,    2, 0x08,   14 /* Private */,
      17,    0,  185,    2, 0x08,   15 /* Private */,
      18,    0,  186,    2, 0x08,   16 /* Private */,
      19,    0,  187,    2, 0x08,   17 /* Private */,
      20,    1,  188,    2, 0x08,   18 /* Private */,
      22,    1,  191,    2, 0x08,   20 /* Private */,
      24,    1,  194,    2, 0x08,   22 /* Private */,
      24,    0,  197,    2, 0x28,   24 /* Private | MethodCloned */,
      26,    2,  198,    2, 0x08,   25 /* Private */,
      26,    1,  203,    2, 0x28,   28 /* Private | MethodCloned */,
      29,    0,  206,    2, 0x08,   30 /* Private */,
      30,    1,  207,    2, 0x08,   31 /* Private */,
      32,    1,  210,    2, 0x08,   33 /* Private */,
      34,    1,  213,    2, 0x08,   35 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   27,   28,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::QPoint,   33,
    QMetaType::Void, 0x80000000 | 35,   36,

       0        // eod
};

Q_CONSTINIT const QMetaObject hC_helpTree::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASShC_helpTreeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASShC_helpTreeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASShC_helpTreeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<hC_helpTree, std::true_type>,
        // method 'sgnHelp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<HelpItem *, std::false_type>,
        // method 'stopTiming'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateUi'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileNew'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileDBNew'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileSave'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'fileSaveAs'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'editAdd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editDelete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editCut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editPaste'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editMoveUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editMoveDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editPromote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editDemote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editStartOrStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'editHideOrShowDoneTasks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDirty'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'contextMenuEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QContextMenuEvent *, std::false_type>
    >,
    nullptr
} };

void hC_helpTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<hC_helpTree *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sgnHelp((*reinterpret_cast< std::add_pointer_t<HelpItem*>>(_a[1]))); break;
        case 1: _t->stopTiming(); break;
        case 2: _t->updateUi(); break;
        case 3: _t->fileNew(); break;
        case 4: _t->fileDBNew(); break;
        case 5: _t->fileOpen(); break;
        case 6: { bool _r = _t->fileSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->fileSaveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->editAdd(); break;
        case 9: _t->editDelete(); break;
        case 10: _t->editCut(); break;
        case 11: _t->editPaste(); break;
        case 12: _t->editMoveUp(); break;
        case 13: _t->editMoveDown(); break;
        case 14: _t->editPromote(); break;
        case 15: _t->editDemote(); break;
        case 16: _t->editStartOrStop((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->editHideOrShowDoneTasks((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->setDirty((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->setDirty(); break;
        case 20: _t->load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 21: _t->load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->timeout(); break;
        case 23: _t->updateIcon((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 25: _t->contextMenuEvent((*reinterpret_cast< std::add_pointer_t<QContextMenuEvent*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (hC_helpTree::*)(HelpItem * );
            if (_t _q_method = &hC_helpTree::sgnHelp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *hC_helpTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hC_helpTree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASShC_helpTreeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int hC_helpTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void hC_helpTree::sgnHelp(HelpItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
