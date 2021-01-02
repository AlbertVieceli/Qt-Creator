#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(close())); //(Objt do sinal, sinal evento, objt do slot, slot é a ação)
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  this->close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QString css="background-color:#f00;color:#000;";
    ui->label->setStyleSheet(css); //usa uma QString ou salva em uma variável
}
