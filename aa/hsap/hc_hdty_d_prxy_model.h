#ifndef HC_HDTY_PRXYMODEL_D_H
#define HC_HDTY_PRXYMODEL_D_H

#include <QDate>
#include <QSortFilterProxyModel>

class hC_hDty_D_PRXYModel : public QSortFilterProxyModel
    {
        Q_OBJECT

    public:
        explicit hC_hDty_D_PRXYModel(QObject *parent=nullptr);

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

#endif // HC_HDTY_PRXYMODEL_H
