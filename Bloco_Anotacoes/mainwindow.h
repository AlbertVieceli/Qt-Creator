#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNovo_triggered();

    void on_actionAbrir_triggered();

private:
    Ui::MainWindow *ui;
    QString local_arquivo;
};
#endif // MAINWINDOW_H
