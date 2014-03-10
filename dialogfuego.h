#ifndef DIALOGFUEGO_H
#define DIALOGFUEGO_H

#include <QDialog>
#include "ui_dialogfuego.h"
#include <mainwindow.h>
#include "fuego.h"
#include "municion.h"
namespace Ui {
class DialogFuego;
}

class DialogFuego : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFuego(MainWindow *parent = 0,Fuego *f = NULL);
    ~DialogFuego();
    Ui::DialogFuego *ui;
private slots:
    void on_pbAgregar_clicked();

    void on_pbMod_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    MainWindow *mw;
    Fuego *fuego;
    QList<Municion*> municiones;
};

#endif // DIALOGFUEGO_H
