#include "fm_principal.h"
#include "ui_fm_principal.h"
//#include "fm_novocontato.h" //já esta no .h
//#include "fm_pesquisacontatos.h"
fm_principal::fm_principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_principal)
{
    ui->setupUi(this);
}

fm_principal::~fm_principal()
{
    delete ui;
}

void fm_principal::on_btn_addcont_clicked()
{
    fm_novocontato f_novocontato;
    f_novocontato.exec();
}

void fm_principal::on_btn_pesqcont_clicked()
{
    fm_pesquisacontatos f_pesquisacontato;
    f_pesquisacontato.exec();
}
