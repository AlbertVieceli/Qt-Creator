#include "fm_novocontato.h"
#include "ui_fm_novocontato.h"
#include <QMessageBox>
#include <QSql>

static int id;

fm_novocontato::fm_novocontato(QWidget *parent, int id_contato) :
    QDialog(parent),
    ui(new Ui::fm_novocontato)
{
    ui->setupUi(this);
    id=id_contato;
    QSqlQuery query;
    query.prepare("select * from tb_contatos where id_contato="+QString::number(id_contato));
    if (query.exec()) {
        query.first();
        ui->txt_nome->setText(query.value(1).toString());
        ui->txt_telefone->setText(query.value(2).toString());
        ui->txt_mail->setText(query.value(3).toString());
    } else {
        QMessageBox::warning(this,"ERRO","Erro");
    }
}

fm_novocontato::~fm_novocontato()
{
    delete ui;
}

void fm_novocontato::on_btn_gravar_clicked()
{
    QString nome=ui->txt_nome->text();
    QString telefone=ui->txt_telefone->text();
    QString email=ui->txt_mail->text();

    QSqlQuery query;
    query.prepare("insert into tb_contatos (nome_contato, telefone_contato, email_contato) values "
                  "('"+nome+"','"+telefone+"','"+email+"')");
    if(nome.isEmpty() || telefone.isEmpty() || email.isEmpty()){
        QMessageBox::information(this,"vazio","Registro vazio não efetuado");
    }else{
        if(query.exec()){
            QMessageBox::information(this,"Inserido","Registro Gravado com sucesso.");
            ui->txt_nome->clear();
            ui->txt_telefone->clear();
            ui->txt_mail->clear();

            ui->txt_nome->setFocus();

        }else{
            qDebug()<<"Erro ao inserir registro";
        }
    }
}

void fm_novocontato::on_btn_alterar_clicked()
{
    QString nome=ui->txt_nome->text();
    QString telefone=ui->txt_telefone->text();
    QString email=ui->txt_mail->text();

    QSqlQuery query;
    query.prepare("update tb_contatos set nome_contato='"+nome+"',telefone_contato='"+telefone+"',email_contato='"+email+"' where id_contato="+QString::number(id));

    if(nome.isEmpty() || telefone.isEmpty() || email.isEmpty()){
        QMessageBox::information(this,"vazio","Registro vazio não efetuado");
    }else{
        if(query.exec()){
            QMessageBox::information(this,"Alterado","Registro alterado com sucesso.");
            ui->txt_nome->clear();
            ui->txt_telefone->clear();
            ui->txt_mail->clear();
            this->close();
            //ui->txt_nome->setFocus();


        }else{
            qDebug()<<"Erro ao alterar registro";
        }
    }

}

void fm_novocontato::on_btn_cancelar_clicked()
{
    this->close();
}
