#ifndef hC_yvmye_H
#define hC_yvmye_H


#include "libs/globals.h"
#include "libs/hc_.h"
//#include "hc_hsp.h"
//#include "cls_dlgt_combobox.h"
#include "hsap/hc_yevmiye_filter_wgt.h"
#include "hsap/hc_yevmiye_prxy_model.h"
#include "hsap/hesapitem.h"
namespace nSHsp
{
class hC_YEVMIYE;
}
class hC_YEVMIYE : public hC_tBcreator
{
    Q_OBJECT
public:
    explicit hC_YEVMIYE();
    ~hC_YEVMIYE();

  //  QPair <quint64,QString> pair_Hesaplar;


    hC_ArrD                  * tb_flds   {} ;
    QList <QWidget*>         * tb_wdgts    {} ;

//    hC_hsp* win_hC_hsp;

    HesapItem* hc_hsp_currentHesapItem{};
    qint64  *SGNDhesapKod ;
    QString *SGNDhesapAd  ;

    QLineEdit   *lE_yvmyeID=nullptr    ;
    QLineEdit   *lE_hspID=nullptr    ;
    QDateEdit   *dE_tarih=nullptr   ;
    QLineEdit   *lE_no=nullptr    ;
    QLineEdit   *lE_aciklama{};
    QComboBox   *cB_transferHesap=nullptr;
    QLineEdit   *lE_r{};
    QLineEdit   *lE_borc{};
    QLineEdit   *lE_alacak{}   ;

    QGridLayout* win_Grid;
    int yvmyeID{};

//    quint64* m_hesapID{};
 //   QString* m_hesapAd{};

    QDate yvmyeTarih = QDate::currentDate();// fromString("1MM12car2003", "d'MM'MMcaryyyy");
    int reccount{};
    QModelIndex curIndex;

    void tbsetup () ;

private:
    void tbwdgt  () ;
    void tbui    () ;
    void tbkntrl () ;
  //  void debugger(QString num) ;
    hc_YEVMIYE_PRXYModel *proxyModel_dty;
    hC_YEVMIYE_filter_wgt *filter_wgt_dty ;

signals:
    void sgnYevmiyeNo (const qint64 *sgnYevmiyeNo); //Yevmiye Noyu detay hsap_d için emitle

protected:
    void showEvent(QShowEvent *);
    void closeEvent(QCloseEvent*);

public slots:
    //connect selectionmodel change
    void slt_hesapChanged(HesapItem* currHspItem);
};

#endif // hC_yvmye_H
