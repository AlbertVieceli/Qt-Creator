/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QPushButton *btn_addcont;
    QPushButton *btn_pesqcont;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName(QString::fromUtf8("fm_principal"));
        fm_principal->resize(400, 300);
        btn_addcont = new QPushButton(fm_principal);
        btn_addcont->setObjectName(QString::fromUtf8("btn_addcont"));
        btn_addcont->setGeometry(QRect(10, 20, 91, 31));
        btn_pesqcont = new QPushButton(fm_principal);
        btn_pesqcont->setObjectName(QString::fromUtf8("btn_pesqcont"));
        btn_pesqcont->setGeometry(QRect(120, 20, 91, 31));

        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QApplication::translate("fm_principal", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_addcont->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        btn_addcont->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        btn_addcont->setText(QApplication::translate("fm_principal", "Adcionar", nullptr));
        btn_pesqcont->setText(QApplication::translate("fm_principal", "Pesquisar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
