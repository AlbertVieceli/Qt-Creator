#ifndef FM_PRINCIPAL_H
#define FM_PRINCIPAL_H

#include <QDialog>

namespace Ui {
class fm_principal;
}

class fm_principal : public QDialog
{
    Q_OBJECT

public:
    explicit fm_principal(QWidget *parent = nullptr);
    ~fm_principal();

private:
    Ui::fm_principal *ui;
};

#endif // FM_PRINCIPAL_H
