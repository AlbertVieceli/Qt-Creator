#include "fm_pesquisacontatos.h"
#include "ui_fm_pesquisacontatos.h"
#include <QtSql>
#include <QMessageBox>
//include no .h

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
        ui->tw_contatos->setColumnWidth(0,30);
        ui->tw_contatos->setColumnWidth(1,150);
        ui->tw_contatos->setColumnWidth(3,230);

        QStringList cabecalhos={"ID","Nome","Telefone","E-mail"};
        ui->tw_contatos->setHorizontalHeaderLabels(cabecalhos);
        ui->tw_contatos->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->tw_contatos->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tw_contatos->verticalHeader()->setVisible(false);
        ui->tw_contatos->setStyleSheet("QTableView {selection-background-color:blue}");
    } else {
        QMessageBox::warning(this,"","erro ao pesquisar");
    }
}

fm_pesquisacontatos::~fm_pesquisacontatos()
{
    delete ui;
}

void fm_pesquisacontatos::on_btn_excluir_clicked()
{
    int linha=ui->tw_contatos->currentRow();
    int id=ui->tw_contatos->item(linha,0)->text().toInt();
    QSqlQuery query;
    query.prepare("delete from tb_contatos where id_contato="+QString::number(id));
    if(query.exec()){
        ui->tw_contatos->removeRow(linha);
        QMessageBox::information(this,"","excluido o registro");
    }else{
        QMessageBox::warning(this,"ERRO","erro ao excluir o registro");
    }

}

void fm_pesquisacontatos::on_btn_editar_clicked()
{
    int linha=ui->tw_contatos->currentRow();
    int id=ui->tw_contatos->item(ui->tw_contatos->currentRow(),0)->text().toInt();
    fm_novocontato f_novoc(this,id);
    f_novoc.exec();

    QSqlQuery query;
    query.prepare("select * from tb_contatos where id_contato="+QString::number(id));
    if (query.exec()) {
        ui->tw_contatos->setItem(linha,1, new QTableWidgetItem(query.value(1).toString()));
        ui->tw_contatos->setItem(linha,2, new QTableWidgetItem(query.value(2).toString()));
        ui->tw_contatos->setItem(linha,3, new QTableWidgetItem(query.value(3).toString()));
    } else {
    }

}

void fm_pesquisacontatos::on_btn_pesquisa_clicked()
{

}
