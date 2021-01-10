#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNovo_triggered()
{
    local_arquivo="";
    ui->textEdit->clear();
    ui->textEdit->setFocus();
}

void MainWindow::on_actionAbrir_triggered()
{
    QString filtro="Todos Arquivos (*.*);; Arquivos de texto (*.txt)";
    QString nome_arquivo=QFileDialog::getOpenFileName(this,"Abrir",QDir::homePath(),filtro);
    QFile arquivo(nome_arquivo);
    local_arquivo=nome_arquivo;
    if(!arquivo.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"","Arquivo não pode ser aberto");
        return;
    }
    QTextStream entrada(&arquivo);
    QString texto=entrada.readAll();
    ui->textEdit->setText(texto);
    arquivo.close();
}
