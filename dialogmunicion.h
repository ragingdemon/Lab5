#ifndef DIALOGMUNICION_H
#define DIALOGMUNICION_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class DialogMunicion;
}

class DialogMunicion : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMunicion(MainWindow *parent = 0);
    ~DialogMunicion();

private slots:
    void on_pbAgregar_clicked();

private:
    Ui::DialogMunicion *ui;
    MainWindow *mw;
};

#endif // DIALOGMUNICION_H
