/****************************************************************************
** Meta object code from reading C++ file 'hsp_tree_view.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../aa/hsap/hsp_tree_view.h"
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
#error "The header file 'hsp_tree_view.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASShsp_Tree_viewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASShsp_Tree_viewENDCLASS = QtMocHelpers::stringData(
    "hsp_Tree_view",
    "sgnHesap",
    "",
    "HesapItem*",
    "currentHesapItem",
    "stopTiming",
    "updateUi",
    "fileNew",
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
struct qt_meta_stringdata_CLASShsp_Tree_viewENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[14];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[17];
    char stringdata5[11];
    char stringdata6[9];
    char stringdata7[8];
    char stringdata8[9];
    char stringdata9[9];
    char stringdata10[11];
    char stringdata11[8];
    char stringdata12[11];
    char stringdata13[8];
    char stringdata14[10];
    char stringdata15[11];
    char stringdata16[13];
    char stringdata17[12];
    char stringdata18[11];
    char stringdata19[16];
    char stringdata20[6];
    char stringdata21[24];
    char stringdata22[5];
    char stringdata23[9];
    char stringdata24[6];
    char stringdata25[5];
    char stringdata26[9];
    char stringdata27[9];
    char stringdata28[8];
    char stringdata29[11];
    char stringdata30[6];
    char stringdata31[27];
    char stringdata32[4];
    char stringdata33[17];
    char stringdata34[19];
    char stringdata35[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASShsp_Tree_viewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASShsp_Tree_viewENDCLASS_t qt_meta_stringdata_CLASShsp_Tree_viewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "hsp_Tree_view"
        QT_MOC_LITERAL(14, 8),  // "sgnHesap"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 10),  // "HesapItem*"
        QT_MOC_LITERAL(35, 16),  // "currentHesapItem"
        QT_MOC_LITERAL(52, 10),  // "stopTiming"
        QT_MOC_LITERAL(63, 8),  // "updateUi"
        QT_MOC_LITERAL(72, 7),  // "fileNew"
        QT_MOC_LITERAL(80, 8),  // "fileOpen"
        QT_MOC_LITERAL(89, 8),  // "fileSave"
        QT_MOC_LITERAL(98, 10),  // "fileSaveAs"
        QT_MOC_LITERAL(109, 7),  // "editAdd"
        QT_MOC_LITERAL(117, 10),  // "editDelete"
        QT_MOC_LITERAL(128, 7),  // "editCut"
        QT_MOC_LITERAL(136, 9),  // "editPaste"
        QT_MOC_LITERAL(146, 10),  // "editMoveUp"
        QT_MOC_LITERAL(157, 12),  // "editMoveDown"
        QT_MOC_LITERAL(170, 11),  // "editPromote"
        QT_MOC_LITERAL(182, 10),  // "editDemote"
        QT_MOC_LITERAL(193, 15),  // "editStartOrStop"
        QT_MOC_LITERAL(209, 5),  // "start"
        QT_MOC_LITERAL(215, 23),  // "editHideOrShowDoneTasks"
        QT_MOC_LITERAL(239, 4),  // "hide"
        QT_MOC_LITERAL(244, 8),  // "setDirty"
        QT_MOC_LITERAL(253, 5),  // "dirty"
        QT_MOC_LITERAL(259, 4),  // "load"
        QT_MOC_LITERAL(264, 8),  // "filename"
        QT_MOC_LITERAL(273, 8),  // "taskPath"
        QT_MOC_LITERAL(282, 7),  // "timeout"
        QT_MOC_LITERAL(290, 10),  // "updateIcon"
        QT_MOC_LITERAL(301, 5),  // "frame"
        QT_MOC_LITERAL(307, 26),  // "customContextMenuRequested"
        QT_MOC_LITERAL(334, 3),  // "pos"
        QT_MOC_LITERAL(338, 16),  // "contextMenuEvent"
        QT_MOC_LITERAL(355, 18),  // "QContextMenuEvent*"
        QT_MOC_LITERAL(374, 5)   // "event"
    },
    "hsp_Tree_view",
    "sgnHesap",
    "",
    "HesapItem*",
    "currentHesapItem",
    "stopTiming",
    "updateUi",
    "fileNew",
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

Q_CONSTINIT static const uint qt_meta_data_CLASShsp_Tree_viewENDCLASS[] = {

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
       5,    0,  167,    2, 0x0a,    3 /* Public */,
       6,    0,  168,    2, 0x0a,    4 /* Public */,
       7,    0,  169,    2, 0x08,    5 /* Private */,
       8,    0,  170,    2, 0x08,    6 /* Private */,
       9,    0,  171,    2, 0x08,    7 /* Private */,
      10,    0,  172,    2, 0x08,    8 /* Private */,
      11,    0,  173,    2, 0x08,    9 /* Private */,
      12,    0,  174,    2, 0x08,   10 /* Private */,
      13,    0,  175,    2, 0x08,   11 /* Private */,
      14,    0,  176,    2, 0x08,   12 /* Private */,
      15,    0,  177,    2, 0x08,   13 /* Private */,
      16,    0,  178,    2, 0x08,   14 /* Private */,
      17,    0,  179,    2, 0x08,   15 /* Private */,
      18,    0,  180,    2, 0x08,   16 /* Private */,
      19,    1,  181,    2, 0x08,   17 /* Private */,
      21,    1,  184,    2, 0x08,   19 /* Private */,
      23,    1,  187,    2, 0x08,   21 /* Private */,
      23,    0,  190,    2, 0x28,   23 /* Private | MethodCloned */,
      25,    2,  191,    2, 0x08,   24 /* Private */,
      25,    1,  196,    2, 0x28,   27 /* Private | MethodCloned */,
      28,    0,  199,    2, 0x08,   29 /* Private */,
      29,    1,  200,    2, 0x08,   30 /* Private */,
      31,    1,  203,    2, 0x08,   32 /* Private */,
      33,    1,  206,    2, 0x08,   34 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
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
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   26,   27,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void, QMetaType::QPoint,   32,
    QMetaType::Void, 0x80000000 | 34,   35,

       0        // eod
};

Q_CONSTINIT const QMetaObject hsp_Tree_view::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASShsp_Tree_viewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASShsp_Tree_viewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASShsp_Tree_viewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<hsp_Tree_view, std::true_type>,
        // method 'sgnHesap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<HesapItem *, std::false_type>,
        // method 'stopTiming'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateUi'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileNew'
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

void hsp_Tree_view::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<hsp_Tree_view *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sgnHesap((*reinterpret_cast< std::add_pointer_t<HesapItem*>>(_a[1]))); break;
        case 1: _t->stopTiming(); break;
        case 2: _t->updateUi(); break;
        case 3: _t->fileNew(); break;
        case 4: _t->fileOpen(); break;
        case 5: { bool _r = _t->fileSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->fileSaveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->editAdd(); break;
        case 8: _t->editDelete(); break;
        case 9: _t->editCut(); break;
        case 10: _t->editPaste(); break;
        case 11: _t->editMoveUp(); break;
        case 12: _t->editMoveDown(); break;
        case 13: _t->editPromote(); break;
        case 14: _t->editDemote(); break;
        case 15: _t->editStartOrStop((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->editHideOrShowDoneTasks((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->setDirty((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->setDirty(); break;
        case 19: _t->load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 20: _t->load((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->timeout(); break;
        case 22: _t->updateIcon((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 24: _t->contextMenuEvent((*reinterpret_cast< std::add_pointer_t<QContextMenuEvent*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (hsp_Tree_view::*)(HesapItem * );
            if (_t _q_method = &hsp_Tree_view::sgnHesap; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *hsp_Tree_view::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hsp_Tree_view::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASShsp_Tree_viewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int hsp_Tree_view::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void hsp_Tree_view::sgnHesap(HesapItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
