#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    /*QPixmap bkgnd("C:/Users/OUMAIMA/Downloads/back.png");
            bkgnd=bkgnd.scaled(this->size(),Qt::IgnoreAspectRatio);
            QPalette p;
            p.setBrush(QPalette::Background, bkgnd);
            this->setPalette(p);
*/
            // creation d'un QStandardItemModel et affichage dans un QTableView

            model = new QStandardItemModel(4,3,this);
            model->setHorizontalHeaderLabels({"ID ","libelle ","prix",});

              // ATTENTION tu dois aussi le definir comme pointeur dans ton .h
              // pour les lignes
              for (int i=0;i<7;++i)
                { // Pour les colonnes
                for (int j=0;j<7;++j)
                  {  // on crée un item==cellule
                   QStandardItem *item = new QStandardItem;
                   // On définit les valeurs initiales des cases
                   //item->setText("") ;
                   //item->setText(QString::number(0));
                   // Et enfin on l'associe avec notre model

                   model->setItem(0,0,item);
                  }
                }
                //recuperer les valeurs :
                   // int valeur = model->item(ligne, colonne)->text().toInt();
                   // double valeur = model->item(ligne, colonne)->text().toDouble();

              // affichage, on utilise un QTableView

              ui->tableView->setModel(model);




}

MainWindow::~MainWindow()
{
    delete ui;
}

