#ifndef HC_YEVMIYE_PRXYMODEL_D_H
#define HC_YEVMIYE_PRXYMODEL_D_H

#include <QDate>
#include <QSortFilterProxyModel>

class hC_YEVMIYE_D_PRXYModel : public QSortFilterProxyModel
    {
        Q_OBJECT

    public:
        explicit hC_YEVMIYE_D_PRXYModel(QObject *parent=nullptr);

        QDate filterMinimumDate() const { return minDate; }
        void setFilterMinimumDate(QDate date);

        QDate filterMaximumDate() const { return maxDate; }
        void setFilterMaximumDate(QDate date);

    protected:
        bool filterAcceptsRow(int sourceRow, const QModelIndex &sourceParent) const override;
        bool lessThan(const QModelIndex &left, const QModelIndex &right) const override;

    private:
        bool dateInRange(QDate date) const;

        QDate minDate;
        QDate maxDate;
};

#endif // HC_YEVMIYE_PRXYMODEL_H
