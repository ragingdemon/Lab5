#include "dialogmunicion.h"
#include "ui_dialogmunicion.h"
#include "municion.h"
DialogMunicion::DialogMunicion(MainWindow *parent) :
    QDialog(parent),
    ui(new Ui::DialogMunicion)
{
    ui->setupUi(this);
    mw = parent;
}

DialogMunicion::~DialogMunicion()
{
    delete ui;
}

void DialogMunicion::on_pbAgregar_clicked()
{
    mw->clearComboBox(mw->ui->cbDescubrimientos);
    QString fecha;
    QString nombre;
    double peso;
    double calibre;
    QString material;

    fecha = ui->leFecha->text();
    nombre = ui->leNombre->text();
    peso = ui->lePeso->text().toInt();
    calibre = ui->leCalibre->text().toDouble();
    material = ui->leMaterial->text();

    mw->descubrimientos.append(new Municion(fecha,nombre,peso,calibre,material));
    mw->fillComboBox(mw->ui->cbDescubrimientos,mw->descubrimientos);
    this->close();
}
