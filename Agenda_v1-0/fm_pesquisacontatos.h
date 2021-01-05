#ifndef FM_PESQUISACONTATOS_H
#define FM_PESQUISACONTATOS_H

#include <QDialog>
#include "fm_novocontato.h"

namespace Ui {
class fm_pesquisacontatos;
}

class fm_pesquisacontatos : public QDialog
{
    Q_OBJECT

public:
    explicit fm_pesquisacontatos(QWidget *parent = nullptr);
    ~fm_pesquisacontatos();

private slots:
    void on_btn_excluir_clicked();

    void on_btn_editar_clicked();

private:
    Ui::fm_pesquisacontatos *ui;
};

#endif // FM_PESQUISACONTATOS_H
