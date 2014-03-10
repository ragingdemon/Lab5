#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "dialogdocumento.h"
#include "dialogblanca.h"
#include "dialogfuego.h"
#include "dialogmovil.h"
#include "dialogartista.h"
#include "dialogmunicion.h"
#include "dialogreportes.h"
#include "fuego.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    foreach (Descubrimiento *d, descubrimientos) {
        if (d) {
            delete d;
        }
    }
    delete ui;
}

void MainWindow::clearComboBox(QComboBox* cb)
{
    if (cb->count()  > 0) { //count() devuelve el número total de elementos en el comboBox
        do {
            cb->removeItem(0); // remueve el elemento 0 hasta que ya no quede ninguno
        } while (cb->count() > 0);
    }
}

void MainWindow::on_pushButton_clicked()
{
    deleteElementFromList(ui->cbDescubrimientos,descubrimientos);
}

void MainWindow::on_pushButton_2_clicked()
{
    DialogDocumento dialog(this);
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    DialogBlanca dialog(this);
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    DialogFuego dialog(this);
    dialog.setModal(true);
    dialog.ui->pbAgregar->setVisible(1);
    dialog.ui->pbMod->setVisible(0);
    dialog.exec();
}

void MainWindow::on_pushButton_5_clicked()
{
    DialogMovil dialog(this);
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_pushButton_6_clicked()
{
    DialogArtista dialog(this);
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    DialogMunicion dialog(this);
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_pushButton_8_clicked()
{
    DialogReportes dialog(this);
    dialog.setModal(true);
    dialog.exec();
}

void MainWindow::on_pushButton_9_clicked()
{
    if (ui->cbDescubrimientos->currentIndex() >= 0) {
        Fuego *temp = dynamic_cast<Fuego*>(descubrimientos[ui->cbDescubrimientos->currentIndex()]);
        if (temp) {
            DialogFuego dialog(this,temp);
            dialog.setModal(true);
            dialog.ui->pbAgregar->setVisible(0);
            dialog.ui->pbMod->setVisible(1);
            dialog.exec();
        }
    }
}
