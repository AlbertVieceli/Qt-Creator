#include "janelalogin.h"
#include "ui_janelalogin.h"

JanelaLogin::JanelaLogin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);
    QSqlDatabase banco=QSqlDatabase::addDatabase("QMYSQL");
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

