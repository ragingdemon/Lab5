#ifndef DIALOGREPORTES_H
#define DIALOGREPORTES_H

#include <QDialog>
#include "mainwindow.h"
#include <QTableWidget>
#include <typeinfo>
#include "descubrimiento.h"
namespace Ui {
class DialogReportes;
}

class DialogReportes : public QDialog
{
    Q_OBJECT

public:
    explicit DialogReportes(MainWindow *parent = 0);
    ~DialogReportes();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::DialogReportes *ui;
    MainWindow *mw;
};

#endif // DIALOGREPORTES_H
