#ifndef hC_HSPDTY_D_H
#define hC_HSPDTY_D_H
//#include "hc_hsp.h"
//#include "cls_dlgt_combobox.h"
#include "libs/globals.h"
#include "libs/hc_.h"

#include "hsap/hc_hdty_d_filter_wgt.h"
#include "hsap/hc_hdty_d_prxy_model.h"
#include "hsap/hesapitem.h"
namespace nSHsp
{
class hC_hDTY_D;
}
class hC_hDTY_D : public hC_tBcreator
{
    Q_OBJECT
public:
    explicit hC_hDTY_D();
    ~hC_hDTY_D();

  //  QPair <quint64,QString> pair_Hesaplar;


    hC_ArrD                  * tb_flds   {} ;
    QList <QWidget*>         * tb_wdgts    {} ;

//    hC_hsp* win_hC_hsp;

    HesapItem* hc_hsp_currentHesapItem{};
    qint64  *SGNDhesapKod ;
    QString *SGNDhesapAd  ;

    QLineEdit   *lE_hspdtyID=nullptr    ;
    QLineEdit   *lE_hspID=nullptr    ;
    QDateEdit   *dE_tarih=nullptr   ;
    QLineEdit   *lE_no=nullptr    ;
    QLineEdit   *lE_aciklama{};
    QComboBox   *cB_transferHesap=nullptr;
    QLineEdit   *lE_r{};
    QLineEdit   *lE_borc{};
    QLineEdit   *lE_alacak{}   ;

    QGridLayout* win_Grid;
    int hspdtyID{};

//    quint64* m_hesapID{};
 //   QString* m_hesapAd{};

    QDate hspdtyTarih = QDate::currentDate();// fromString("1MM12car2003", "d'MM'MMcaryyyy");
    int reccount{};
    QModelIndex curIndex;

    void tbsetup () ;

private:
    void tbwdgt  () ;
    void tbui    () ;
    void tbkntrl () ;
  //  void debugger(QString num) ;
    hC_hDty_D_PRXYModel *proxyModel1;
    hC_hDty_D_filter_wgt *filter_wgt ;

protected:
    void showEvent(QShowEvent *);
    void closeEvent(QCloseEvent*);

public slots:
    //connect selectionmodel change
    void slt_hesapChanged(int *yevmiyeNo);
    void slt_yevmiye(int *yevmiyeNo);
};

#endif // hC_HSPDTY_H
