/********************************************************************************
** Form generated from reading UI file 'janela2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA2_H
#define UI_JANELA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Janela2
{
public:
    QLabel *label;

    void setupUi(QDialog *Janela2)
    {
        if (Janela2->objectName().isEmpty())
            Janela2->setObjectName(QString::fromUtf8("Janela2"));
        Janela2->resize(316, 160);
        label = new QLabel(Janela2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 70, 58, 18));

        retranslateUi(Janela2);

        QMetaObject::connectSlotsByName(Janela2);
    } // setupUi

    void retranslateUi(QDialog *Janela2)
    {
        Janela2->setWindowTitle(QApplication::translate("Janela2", "Dialog", nullptr));
        label->setText(QApplication::translate("Janela2", "<html><head/><body><p>Janela 2</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Janela2: public Ui_Janela2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA2_H
