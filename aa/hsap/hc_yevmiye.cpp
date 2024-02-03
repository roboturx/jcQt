#include "hsap/hc_yevmiye.h"
#include "hsap/cm_dlg_cb_htur.h"
#include "hsap/dlg/dlg_date.h"
#include "hsap/dlg/dlg_hlist.h"
#include "hsap/dlg/dlg_r.h"

//#include "uniqueproxymodel.h"



hC_YEVMIYE::hC_YEVMIYE() : hC_tBcreator ()
{
    qDebug ()<<"Constructor HESAP DETAY **************************";
    //************************************************************
    //************  H E S A P  D E T A Y L A R I  ****************

    win_Label->setText ( "HESAP DETAY KAYITLARI");
    *tb_name   = "yvmye_dbtb" ;
    *tb_ndex  = "yvmye_ad";
    tb_flds = new hC_ArrD (10, 4);

    /// setvalue  field no, dbf değişkeni, dbfTYPE, view header, viewda görünür

    tb_flds->setValue ( 0, "f_yvmye_id"      , "INTEGER", "YEVMIYE_ID"/*, "0"*/);
    tb_flds->setValue ( 1, "f_yvmye_hspid"   , "INTEGER", "HESAP_ID"/*, "0"*/);
    // hesaplar ile hesap detay arası key

    tb_flds->setValue ( 2, "f_yvmye_tarih"   , "TEXT"   , "Tarih" );
    tb_flds->setValue ( 3, "f_yvmye_no"      , "TEXT"   , "Kayıt No" );
    tb_flds->setValue ( 4, "f_yvmye_aciklama", "TEXT"   , "Açıklama");
    tb_flds->setValue ( 5, "f_yvmye_transfer", "TEXT"   , "İlgili Hesap");
    tb_flds->setValue ( 6, "f_yvmye_r"       , "TEXT"   , "R");
    tb_flds->setValue ( 7, "f_yvmye_borc"    , "TEXT"   , "BORC");
    tb_flds->setValue ( 8, "f_yvmye_alacak"  , "TEXT"   , "ALACAK");
    tb_flds->setValue ( 9, "f_yvmye_resim"   , "BLOB"   , "Resim","0");

    tb_wdgts = new QList <QWidget*> ;

    tb_wdgts->append ( lE_yvmyeID  = new QLineEdit   ) ; //  id
    tb_wdgts->append ( lE_hspID  = new QLineEdit   ) ; // parent id
    tb_wdgts->append ( dE_tarih = new QDateEdit   ) ;
    tb_wdgts->append ( lE_no  = new QLineEdit   ) ;

    tb_wdgts->append ( lE_aciklama = new QLineEdit  ) ;
    // bağlantılı hesap
    tb_wdgts->append ( cB_transferHesap = new QComboBox ) ;
    // consilidate
    tb_wdgts->append ( lE_r = new QLineEdit  ) ;
    tb_wdgts->append ( lE_borc = new QLineEdit  ) ;
    tb_wdgts->append ( lE_alacak = new QLineEdit  ) ;

    tb_wdgts->append ( win_Rsm  = new QLabel    ) ;

}


void hC_YEVMIYE::tbsetup()
{
    qDebug() << "0100 yvmye::tbsetup ------------------------- begins";
    tbCreate ( tb_flds );
    tbModel  ( tb_flds );
    tbView   ( tb_flds );
    tbMap    ( tb_flds, tb_wdgts );

    tbwdgt  ();
    tbui();
    tbkntrl ();
    qDebug() << "0100 yvmye::tbsetup ------------------------- end";
}


void hC_YEVMIYE::tbwdgt()
{
    qDebug() << "   0110 yvmye::tbwdgt ---- begin";



    //cls_mdl_TreeFromXml:: den hesap listesi gelecek


    auto *lB_tarih  = new QLabel("Açılış Tarihi"        );
    //  dE_tarih->setPlaceholderText ("Tarih");
    lB_tarih->setBuddy(dE_tarih);
    dE_tarih->setSpecialValueText ("  ");
    dE_tarih->setLocale (QLocale::Turkish);
    dE_tarih->setMinimumDate(QDate::currentDate().addYears (-25));
    dE_tarih->setMaximumDate(QDate::currentDate().addYears(25));
    dE_tarih->setDisplayFormat ("dd-MM-yyyy");
    dE_tarih->setCalendarPopup (true);
    lB_tarih->setBuddy(dE_tarih);

    auto *lB_no = new QLabel("Kayıt No"       );
    lB_no->setBuddy(lE_no);

    auto *lB_aciklama    = new QLabel("Açıklama" );
    lB_aciklama->setBuddy(lE_aciklama);

    auto *lB_transfer    = new QLabel("Transfer Hesap" );
    auto *cB_transferHesap = new QComboBox;

    auto *lB_r = new QLabel("R"  );
    lB_r->setBuddy(lE_r);

    auto *lB_borc = new QLabel("BORC ");
    lB_borc->setBuddy(lE_borc);

    auto *lB_alacak  = new QLabel("ALACAK "  );
    lB_alacak->setBuddy(lE_alacak);


    hC_Rs resim(win_Rsm);


    ///////////////////////////////////////

    win_Wdgt->adjustSize ();
    win_Grid = new QGridLayout();
    win_Wdgt->setLayout(win_Grid);

    ///////////////////////////////////////

    //tb_view->table->setMinimumWidth (200);
    //   lB_ad->setMinimumSize (100,25);
    //  lE_ad->setMinimumSize (100,25);
    lB_aciklama->setMinimumSize (200,25);
    // lB_alacak->setMinimumSize (150,25);


    win_Grid->addWidget(lB_tarih      , 0, 0, 1, 1);
    win_Grid->addWidget(dE_tarih      , 0, 1, 1, 2);
    win_Grid->addWidget(lB_no     , 1, 0, 1, 1);
    win_Grid->addWidget(lE_no     , 1, 1, 1, 2);
    win_Grid->addWidget(lB_aciklama        , 2, 0, 1, 1);
    win_Grid->addWidget(lE_aciklama        , 2, 1, 1, 2);
    win_Grid->addWidget(lB_transfer     , 3, 0, 1, 1);
    win_Grid->addWidget(cB_transferHesap     , 3, 1, 1, 2);
    win_Grid->addWidget(lB_r     , 4, 0, 1, 1);
    win_Grid->addWidget(lE_r     , 4, 1, 1, 2);
    win_Grid->addWidget(lB_borc      , 5, 0, 1, 1);
    win_Grid->addWidget(lE_borc      , 5, 1, 1, 2);
    win_Grid->addWidget(lB_alacak    , 6, 0, 1, 1);
    win_Grid->addWidget(lE_alacak    , 6, 1, 1, 2);
    win_Grid->addWidget(cB_transferHesap    , 7, 1, 1, 2);

    //  xx2=1;
    win_Grid->addWidget(win_Rsm       , 7, 4, 3, 2);
    qDebug() << "   0110 yvmye::wdgt ---- end";
}


void hC_YEVMIYE::tbui()
{

    qDebug() << "   0120 yvmye::tbui ---- begins";

    hC_YEVMIYE::setWindowTitle (win_Label->text ());
    this->setGeometry (20,20,1200,600);

    QSplitter *splitter = new QSplitter(this);
    splitter->setMinimumWidth(600);

    splitter->addWidget(tb_view);
    //splitter->addWidget(win_hC_hsp);

    splitter->setOrientation(Qt::Horizontal);

    auto *win_grid = new QGridLayout(this);
    win_grid->addWidget (splitter  , 0, 0, 1, 1);
    // win_grid->addWidget (win_Wdgt   , 0, 1, 1, 1);
    // win_grid->addWidget (win_hC_hsp   , 0, 0, 2, 1);
    qDebug() << "   0120 yvmye::tbui ---- end";
}




void hC_YEVMIYE::tbkntrl()
{
    qDebug() << "   0130 yvmye::tbkntrl ---- begin";

    dlg_Date *clndr = new dlg_Date;
    dlg_R *cb_R = new dlg_R();
    dlG_hList *cb_hlist = new dlG_hList();

    tb_view->table->setItemDelegateForColumn(2, clndr);

    tb_view->table->setItemDelegateForColumn(5, cb_hlist);
    tb_view->table->setItemDelegateForColumn(6, cb_R);

    //////////////// filtering
    proxyModel_dty = new hc_YEVMIYE_PRXYModel  (this);
    // setting proxyModel_dty to view
    proxyModel_dty->setSourceModel (tb_model); // proxy için hesap detay baz alındı

    tb_view->table->setModel (proxyModel_dty); // view için proxy model
    for (int i = 0; i < proxyModel_dty->columnCount(); ++i)
        tb_view->table->resizeColumnToContents(i);

    // sorting proxy model1
    //tb_view->table->setSortingEnabled (true);

    //proxyModel->sort(0, Qt::AscendingOrder);

    //////////////// filtering end
    tb_view->table->setFocus();

    // pB 001 yeni ekle
    connect(tb_view->pB_ekle, &QPushButton::clicked , this,
            [this]()
    {

        ////////////////////////////////////////////////
        /// \brief maxID
        ///
        /// Eklenecek kayıt için hdp_id oluştur.
        /// Dosyada bulunan max id yi bulur ve
        /// bir üstünü getirir
        ///
        hC_Nr maxID;
        int* max_id = new int{};
        *max_id = maxID.hC_NrMax ( tb_name, tb_flds->value (0,0));
        if (*max_id==1)
            *max_id = 30001; // yevmiye kayıtları 3 ile başlasın
        ////////////////////////////////////////////////


        qDebug() << "  hc_YEVMIYE yeni kayıt KOD : "
                 << *max_id
                 << QString::number (hc_hsp_currentHesapItem->hesapKod ());

        QSqlQuery query;
        QString qStr, mesaj("");

       // curIndex = tb_view->table->currentIndex ();
        //reccount=tb_model->rowCount();

       // qDebug() << *tb_name;
       // qDebug() << curIndex;
       // qDebug() << reccount;
       // qDebug() << hc_hsp_currentHesapItem->hesapKod ();
        qDebug() << "  hc_YEVMIYE yeni kayıt KOD xxxx  ";
        qStr = QString("INSERT INTO "
                       + *tb_name
                       + " ( f_yvmye_hspid, f_yvmye_id) values ( '"

                       + QString::number (hc_hsp_currentHesapItem->hesapKod ())      // kod 100000 den başlasın

                       + "' , '"

                       + QString::number (*max_id)
                       + "' )")  ;

        qDebug() << "  hc_YEVMIYE yeni kayıt KOD : ";
        if ( !query.exec(qStr) )
        {
            mesaj = mesaj + "002x- İlk node e k l e n e m e d i .x.X.x:  "+
                    query.lastError().text ();
        }
        else
        {
            mesaj = mesaj + "Ana yevmiye Kaydı eklendi ---> ";
        }



        if (tb_model->submitAll())
        {
            mesaj = mesaj +" -- SUBMITTED -- "    ;

            ////////////////////////////////////////////////
            /// son eklenen kayda git
            maxID.hC_NrGo (tb_view, tb_model, *max_id , 0);
            ////////////////////////////////////////////////

        }
        else
        {
            mesaj = mesaj + " Yevmiye ana kaydı e k l e n e m e d i ."  ;
        }
            tb_view->table->setFocus();
        qDebug()<<mesaj ;

    });// connect ekle sonu

    /////////////////////////////////////////////////////////////////////
    // pB 002 yeni resim ekle
    connect(tb_view->pB_eklersm, &QPushButton::clicked, this,
            [this]()
    {
        qDebug() << "new resim";
        hC_Rs resim( win_Rsm, tb_view, tb_model, tbx_slctnMdl,
                     "resim", "ekle");
    });

    // -- 003   yvmye  değiştiğnde resmide değiştirelim
    connect(  tbx_slctnMdl , &QItemSelectionModel::currentRowChanged,
              this, [this]()
    {
        hC_Rs resim ( win_Rsm, tb_view, tb_model, tbx_slctnMdl,
                      "resim", "değiştir" ) ;
    });


    // pB 004 yeni camera resim ekle


    // pB 005 sil

    connect(tb_view->pB_sil, &QPushButton::clicked, this,
            [this]()
    {
        QModelIndex indx =   tb_view->table->currentIndex();
        if( indx.row() >= 0 )
        {
            qDebug()<< "Silinecek row no: "<< indx.row()+1;

            //         tb_view->table->selectionModel()->setCurrentIndex
            //             (sample,QItemSelectionModel::NoUpdate);

            QString yvmyeID = tb_model->data
                    (tb_model->index
                     (indx.row (),
                      tb_model->fieldIndex ("yvmye_ID"))).toString ();

            QString hesapad = tb_model->data
                    (tb_model->index
                     (indx.row (),
                      tb_model->fieldIndex ("yvmye_ad"))).toString ();


            QMessageBox::StandardButton dlg;
            dlg = QMessageBox::question(this,
                                        "KAYIT SİL", yvmyeID+" - "+hesapad ,
                                        QMessageBox::Yes | QMessageBox::No);

            if(dlg == QMessageBox::Yes)
            {
                QModelIndex indx2;
                if (tb_model->checkIndex(tb_view->table->model()->
                                         index(tb_view->table->currentIndex().row()  - 1, 0)))
                {
                    indx2= tb_view->table->model()->
                            index(tb_view->table->currentIndex().row()  - 1, 0);
                    qDebug() << "checkindex edddddddddddd";                }



                // remove the current index
                // pmodel->beginRemoveColumn();
                tb_model->removeRow(indx.row());
                //pmodel->endRemoveColumns();
                tb_model->select();
                tb_view->table->setSelectionMode (QAbstractItemView::SingleSelection);
                tb_view->table->setSelectionBehavior (QAbstractItemView::SelectRows);
                tb_view->table->scrollTo (indx2);
                tb_view->table->selectRow (indx2.row()-1);
                tb_view->table->scrollTo (indx2);
                tb_view->table->setSelectionBehavior (QAbstractItemView::SelectItems);

            }
        }
    });
    // --- 011 row değiştiğinde 2 şey olsun
    connect(  tbx_slctnMdl , &QItemSelectionModel::currentRowChanged,
              this, [this]( QModelIndex Index )
    {
        // 011-01 mapper indexi ayarla
        tb_mapper->setCurrentModelIndex(Index);
        if (!Index.isValid())
        {
            qDebug() <<"index is invalid - tb mappper setCurrentModelIndex";
        }
        // 011-02 yevmiye defterinde row değiştiğinde yevmiye noyu etrafa yayınlayalım
        // yevmiye detayları detay dosyasında filtrelensin

        qDebug() << "yevm:: *-- 376 --* : heyooo emitting yevm no: " << tb_view->table->model()->index( Index.row() ,
                                         tb_model->fieldIndex ("f_yvmye_id") ).data().toInt();

        emit sgnYevmiyeNo(tb_view->table->model()->index( Index.row() ,
         tb_model->fieldIndex ("f_yvmye_id") ).data().toInt()) ;

        qDebug() << "yevm:: *-- 380 --* : heyooo emitted yevm no: " << tb_view->table->model()->index( Index.row() ,
                     tb_model->fieldIndex ("f_yvmye_id") ).data().toInt();
    });

    // --- 012 kolon değiştiğinde indexte değişsin
    connect(  tbx_slctnMdl ,
              &QItemSelectionModel::currentColumnChanged, this,
              [this]( QModelIndex Index )
    {
        tb_mapper->setCurrentModelIndex(Index);


    });


    qDebug() << "   0130 yvmye::tbkntrl ---- end";
}


void hC_YEVMIYE::showEvent(QShowEvent *)
{
    qDebug() << "   0140 yvmye::showevent ";
}

void hC_YEVMIYE::closeEvent(QCloseEvent *)
{
   qDebug() << "yvmye:: close ()";
}

void hC_YEVMIYE::slt_hesapChanged(HesapItem *currHspItem)
{
    /// hesap değiştiğinde filtre değişsin
    qDebug() << "   0150 hC_YEVMIYE::slt_hesapChanged ******************************* x x x x x x x x "
             << currHspItem;
    hc_hsp_currentHesapItem = currHspItem;

    /// yevmiye no yu bul
    QModelIndex indx =   tb_view->table->currentIndex();
    qint64 yvmye_ID {};
    if( indx.row() >= 0 )
    {
        //qDebug()<< ": "<< indx.row()+1;

        yvmye_ID = tb_model->data(tb_model->index(indx.row (),
                   tb_model->fieldIndex ("f_yvmye_id"))).toInt ();
    }
    qDebug() << "yevm:: *-- 426 --* : heyooo emitting yevm no: " << yvmye_ID;
    emit sgnYevmiyeNo (yvmye_ID);
    qDebug() << "yevm:: *-- 426 --* : emitted yevm no: " << yvmye_ID;


 //   tb_model->setFilter(
  //      QString("f_yvmye_hspID = '%1'")
     //      .arg(hc_hsp_currentHesapItem->hesapKod ()) );
   // tb_model->select ();



    qDebug() << "13 hesap değiştiğinde proxy regular exp değişsin "
             << "pattern hesapkod olduğundan current hesap item kod patterne"
        << QString::number(hc_hsp_currentHesapItem->hesapKod ());
            //
    // filtering proxy model1

    QString pattern = QString::number(hc_hsp_currentHesapItem->hesapKod ());
    pattern = QRegularExpression::escape (pattern);
    QRegularExpression::PatternOptions options =
        QRegularExpression::NoPatternOption
        | QRegularExpression::CaseInsensitiveOption;
    QRegularExpression regularExpression(pattern, options);
    proxyModel_dty->setFilterRegularExpression(regularExpression);

    //QRegularExpression arananIfade("[0-9]");
    //QRegularExpressionMatch match = arananIfade.match (hc_hsp_currentHesapItem->hesapKod ());

//    qint64 xxx = hc_hsp_currentHesapItem->hesapKod ();
//    QString xx = QString::number (xxx);

    //proxyModel_dty->setFilterRegularExpression("[0-9]");
    //proxyModel->setFilterFixedString ("[0-9]");
        //QString::number(hc_hsp_currentHesapItem->hesapKod ()));
    qDebug() << "131";
    proxyModel_dty->setFilterKeyColumn(1);




}



hC_YEVMIYE::~hC_YEVMIYE()
{
    qDebug() << "yvmye:: ~ destructor ";
}



//void hC_YEVMIYE::debugger(QString num)
//{
//    curIndex = tb_view->table->currentIndex ();
//    qDebug() << num+num+num
//             << " rCnt =" <<  tb_model->rowCount()
//             << "  r:" << tb_view->table->rowAt(0)
//             << "  id:"<< tb_model->data(tb_model->index(curIndex.row (),
//                                                         tb_model->fieldIndex ("yvmye_id")),Qt::DisplayRole).toString()
//             << "  pid:"<<  tb_model->data(tb_model->index(curIndex.row (),
//                                                           tb_model->fieldIndex ("yvmye_parentid")),Qt::DisplayRole).toString()
//             << "  ad:"<<  tb_model->data(tb_model->index(curIndex.row (),
//                                                          tb_model->fieldIndex ("yvmye_ad")),Qt::DisplayRole).toString()
//             << "  lft:"<<  tb_model->data(tb_model->index(curIndex.row (),
//                                                           tb_model->fieldIndex ("yvmye_lft")),Qt::DisplayRole).toString()
//             << "  rgt:"<<  tb_model->data(tb_model->index(curIndex.row (),
//                                                           tb_model->fieldIndex ("yvmye_rgt")),Qt::DisplayRole).toString()
//             <<"  *-*\n"   ;
//}
