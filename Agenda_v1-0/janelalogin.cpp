#include "janelalogin.h"
#include "ui_janelalogin.h"

static QSqlDatabase banco=QSqlDatabase::addDatabase("QMYSQL");

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);
    //QSqlDatabase banco=QSqlDatabase::addDatabase("QMYSQL");
    banco.setHostName("127.0.0.1");
    banco.setUserName("root");
    banco.setPassword("");
    banco.setDatabaseName("teste");

    if(banco.open()){
        ui->label->setText("Conectado");
        //QMessageBox::information(this,"Connection","database conectada");
    }else{
        ui->label->setText("Não conectado");
        //QMessageBox::warning(this,"Not connection", "sem conexão");
    }


}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}


void JanelaLogin::on_btn_login_clicked()
{
    QString username=ui->txt_username->text();
    QString senha=ui->txt_senha->text();

    if (!banco.isOpen()) {
        qDebug()<<"O banco não esta aberto";
        return;
    }
    QSqlQuery query;
    if(query.exec("select * from tb_colaboradores where username='"+username+"' and senha='"+senha+"' ")){
        int cont=0;
        while (query.next()) {
            cont++;

        }
        if (cont>0) {
            this->close();
            fm_principal f_principal;
            f_principal.setModal(true);
            f_principal.exec();
        }else{
            ui->label->setText("Login não efetuado");
            ui->txt_username->clear();
            ui->txt_senha->clear();
            ui->txt_username->setFocus();
        }
    }
}
