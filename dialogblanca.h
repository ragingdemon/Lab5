#ifndef DIALOGBLANCA_H
#define DIALOGBLANCA_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class DialogBlanca;
}

class DialogBlanca : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBlanca(MainWindow *parent = 0);
    ~DialogBlanca();

private slots:
    void on_pbAgregar_clicked();

private:
    Ui::DialogBlanca *ui;
    MainWindow *mw;
};

#endif // DIALOGBLANCA_H
