#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(mudaTexto()));
}

void MainWindow::mudaTexto(){
    ui->label->setText("CFB cursos");
}

MainWindow::~MainWindow()
{
    delete ui;
}

