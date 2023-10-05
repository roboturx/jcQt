#ifndef HC_TREEMODEL_H
#define HC_TREEMODEL_H

#include <QStandardItemModel>
#include <QObject>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QSortFilterProxyModel>
#include "mysqlmodel.h"

//enum RelationRoles{
//    CodeRole = Qt::UserRole + 1000,
//};

class hC_TreeModel //: public QAbstractItemModel
{
public:
    explicit hC_TreeModel(/*QObject *parent=nullptr*/);
    QStandardItemModel *stdmodel;
    QSortFilterProxyModel *proxymodel;
signals:
};

#endif // HC_TREEMODEL_H
