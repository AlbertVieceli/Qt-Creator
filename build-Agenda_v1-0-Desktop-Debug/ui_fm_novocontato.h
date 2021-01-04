/********************************************************************************
** Form generated from reading UI file 'fm_novocontato.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_NOVOCONTATO_H
#define UI_FM_NOVOCONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_novocontato
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_telefone;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_mail;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_gravar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *fm_novocontato)
    {
        if (fm_novocontato->objectName().isEmpty())
            fm_novocontato->setObjectName(QString::fromUtf8("fm_novocontato"));
        fm_novocontato->resize(398, 203);
        widget = new QWidget(fm_novocontato);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 371, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QString::fromUtf8("txt_nome"));

        horizontalLayout->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_telefone = new QLineEdit(widget);
        txt_telefone->setObjectName(QString::fromUtf8("txt_telefone"));

        horizontalLayout_2->addWidget(txt_telefone);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txt_mail = new QLineEdit(widget);
        txt_mail->setObjectName(QString::fromUtf8("txt_mail"));

        horizontalLayout_3->addWidget(txt_mail);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_gravar = new QPushButton(widget);
        btn_gravar->setObjectName(QString::fromUtf8("btn_gravar"));

        horizontalLayout_4->addWidget(btn_gravar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout_4->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(fm_novocontato);

        QMetaObject::connectSlotsByName(fm_novocontato);
    } // setupUi

    void retranslateUi(QDialog *fm_novocontato)
    {
        fm_novocontato->setWindowTitle(QApplication::translate("fm_novocontato", "Dialog", nullptr));
        label->setText(QApplication::translate("fm_novocontato", "Nome", nullptr));
        label_2->setText(QApplication::translate("fm_novocontato", "Telefone", nullptr));
        label_3->setText(QApplication::translate("fm_novocontato", "E-mail", nullptr));
        btn_gravar->setText(QApplication::translate("fm_novocontato", "Gravar", nullptr));
        btn_cancelar->setText(QApplication::translate("fm_novocontato", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_novocontato: public Ui_fm_novocontato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVOCONTATO_H
