#include "fm_pesquisacontatos.h"
#include "ui_fm_pesquisacontatos.h"
#include <QtSql>
#include <QMessageBox>

fm_pesquisacontatos::fm_pesquisacontatos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_pesquisacontatos)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from tb_contatos");
    if (query.exec()) {
        int cont=0;
        ui->tw_contatos->setColumnCount(4);
        while(query.next()){
            ui->tw_contatos->insertRow(cont);
            ui->tw_contatos->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_contatos->setItem(cont,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_contatos->setItem(cont,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_contatos->setItem(cont,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tw_contatos->setRowHeight(cont,20);
            cont++;
        }
    } else {
        QMessageBox::warning(this,"","erro ao pesquisar");
    }
}

fm_pesquisacontatos::~fm_pesquisacontatos()
{
    delete ui;
}
