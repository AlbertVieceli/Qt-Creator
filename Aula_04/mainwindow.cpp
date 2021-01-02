#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtDebug>

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
    //QMessageBox::about(this,"CFB Cursos", "Curso de QT Creator");//parent=parametro
    //QMessageBox::aboutQt(this,"CFB Cursos"); //sobre o Qt
    //QMessageBox::critical(this,"CFB Cursos", "Exemplo de ERRO");
    //QMessageBox::information(this,"CFB Cursos", "Curso de QT Creator");
    //QMessageBox::question(this,"CFB Cursos", "Vose é guei?");
    QMessageBox::warning(this,"CFB Cursos", "Alerta simples");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton resposta=QMessageBox::  //Recebe o resultado do QMessageBox
            question(this,"","Deseja fechar o programa?", QMessageBox::Yes|QMessageBox::No);
    if (resposta==QMessageBox::Yes) {
        //this->close();
        QApplication::quit();
    } else {
        //QMessageBox::about(this,"","Programa não foi fechado");
        qDebug() << "Programa não foi fechado";
    }
}
