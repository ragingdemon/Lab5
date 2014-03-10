#ifndef DIALOGMOVIL_H
#define DIALOGMOVIL_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class DialogMovil;
}

class DialogMovil : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMovil(MainWindow *parent = 0);
    ~DialogMovil();

private slots:
    void on_pbAgregar_clicked();

private:
    Ui::DialogMovil *ui;
    MainWindow *mw;
};

#endif // DIALOGMOVIL_H
