/********************************************************************************
** Form generated from reading UI file 'fm_pesquisacontatos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PESQUISACONTATOS_H
#define UI_FM_PESQUISACONTATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_pesquisacontatos
{
public:
    QTableWidget *tw_contatos;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_pesqnome;
    QPushButton *btn_pesquisa;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_excluir;
    QPushButton *btn_editar;

    void setupUi(QDialog *fm_pesquisacontatos)
    {
        if (fm_pesquisacontatos->objectName().isEmpty())
            fm_pesquisacontatos->setObjectName(QString::fromUtf8("fm_pesquisacontatos"));
        fm_pesquisacontatos->resize(583, 381);
        tw_contatos = new QTableWidget(fm_pesquisacontatos);
        tw_contatos->setObjectName(QString::fromUtf8("tw_contatos"));
        tw_contatos->setGeometry(QRect(20, 70, 551, 261));
        widget = new QWidget(fm_pesquisacontatos);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 541, 28));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_pesqnome = new QLineEdit(widget);
        txt_pesqnome->setObjectName(QString::fromUtf8("txt_pesqnome"));
        txt_pesqnome->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(txt_pesqnome);

        btn_pesquisa = new QPushButton(widget);
        btn_pesquisa->setObjectName(QString::fromUtf8("btn_pesquisa"));

        horizontalLayout->addWidget(btn_pesquisa);

        widget1 = new QWidget(fm_pesquisacontatos);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 340, 168, 28));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_excluir = new QPushButton(widget1);
        btn_excluir->setObjectName(QString::fromUtf8("btn_excluir"));

        horizontalLayout_2->addWidget(btn_excluir);

        btn_editar = new QPushButton(widget1);
        btn_editar->setObjectName(QString::fromUtf8("btn_editar"));

        horizontalLayout_2->addWidget(btn_editar);


        retranslateUi(fm_pesquisacontatos);

        QMetaObject::connectSlotsByName(fm_pesquisacontatos);
    } // setupUi

    void retranslateUi(QDialog *fm_pesquisacontatos)
    {
        fm_pesquisacontatos->setWindowTitle(QApplication::translate("fm_pesquisacontatos", "Dialog", nullptr));
        label->setText(QApplication::translate("fm_pesquisacontatos", "Pesquisar Nome", nullptr));
        btn_pesquisa->setText(QApplication::translate("fm_pesquisacontatos", "filtrar", nullptr));
        btn_excluir->setText(QApplication::translate("fm_pesquisacontatos", "excluir", nullptr));
        btn_editar->setText(QApplication::translate("fm_pesquisacontatos", "editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_pesquisacontatos: public Ui_fm_pesquisacontatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PESQUISACONTATOS_H
