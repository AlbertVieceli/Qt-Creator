#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "janela2.h" //include de maneira local

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //Janela2 form2; //ja foi instanciada no main.h, global
    form2=new Janela2(this);
    //form2.exec();
    form2->show();
}
