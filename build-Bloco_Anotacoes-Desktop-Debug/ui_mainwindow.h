/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNovo;
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionSalvar_Como;
    QAction *actionFechar;
    QAction *actionCopiar;
    QAction *actionRcortar;
    QAction *actionColar;
    QAction *actionDesfazer;
    QAction *actionRefazer;
    QAction *actionFonte;
    QAction *actionCor;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QMenu *menuSobre;
    QMenu *menuFormatar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(553, 366);
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionSalvar_Como = new QAction(MainWindow);
        actionSalvar_Como->setObjectName(QString::fromUtf8("actionSalvar_Como"));
        actionFechar = new QAction(MainWindow);
        actionFechar->setObjectName(QString::fromUtf8("actionFechar"));
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        actionRcortar = new QAction(MainWindow);
        actionRcortar->setObjectName(QString::fromUtf8("actionRcortar"));
        actionColar = new QAction(MainWindow);
        actionColar->setObjectName(QString::fromUtf8("actionColar"));
        actionDesfazer = new QAction(MainWindow);
        actionDesfazer->setObjectName(QString::fromUtf8("actionDesfazer"));
        actionRefazer = new QAction(MainWindow);
        actionRefazer->setObjectName(QString::fromUtf8("actionRefazer"));
        actionFonte = new QAction(MainWindow);
        actionFonte->setObjectName(QString::fromUtf8("actionFonte"));
        actionCor = new QAction(MainWindow);
        actionCor->setObjectName(QString::fromUtf8("actionCor"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 551, 311));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 553, 23));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        menuFormatar = new QMenu(menubar);
        menuFormatar->setObjectName(QString::fromUtf8("menuFormatar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menubar->addAction(menuFormatar->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSalvar_Como);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionFechar);
        menuEditar->addAction(actionDesfazer);
        menuEditar->addAction(actionRefazer);
        menuEditar->addSeparator();
        menuEditar->addAction(actionRcortar);
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionColar);
        menuFormatar->addAction(actionFonte);
        menuFormatar->addAction(actionCor);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Bloco de Notas", nullptr));
        actionNovo->setText(QApplication::translate("MainWindow", "Novo", nullptr));
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
        actionSalvar_Como->setText(QApplication::translate("MainWindow", "Salvar Como", nullptr));
        actionFechar->setText(QApplication::translate("MainWindow", "Fechar", nullptr));
        actionCopiar->setText(QApplication::translate("MainWindow", "Copiar", nullptr));
        actionRcortar->setText(QApplication::translate("MainWindow", "Recortar", nullptr));
        actionColar->setText(QApplication::translate("MainWindow", "Colar", nullptr));
        actionDesfazer->setText(QApplication::translate("MainWindow", "Desfazer", nullptr));
        actionRefazer->setText(QApplication::translate("MainWindow", "Refazer", nullptr));
        actionFonte->setText(QApplication::translate("MainWindow", "Fonte", nullptr));
        actionCor->setText(QApplication::translate("MainWindow", "Cor", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
        menuEditar->setTitle(QApplication::translate("MainWindow", "Editar", nullptr));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Sobre", nullptr));
        menuFormatar->setTitle(QApplication::translate("MainWindow", "Formatar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
