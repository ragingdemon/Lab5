#include "dialogblanca.h"
#include "ui_dialogblanca.h"
#include "blanca.h"

DialogBlanca::DialogBlanca(MainWindow *parent) :
    QDialog(parent),
    ui(new Ui::DialogBlanca)
{
    ui->setupUi(this);
    mw = parent;
}

DialogBlanca::~DialogBlanca()
{
    delete ui;
}

void DialogBlanca::on_pbAgregar_clicked()
{
    mw->clearComboBox(mw->ui->cbDescubrimientos);
    QString fecha;
    QString nombre;
    double peso;
    QString material;
    bool inscripcion;
    QString funcion;
    double longitud;
    double grosor;
    QString mango;

    fecha = ui->leFecha->text();
    nombre = ui->leNombre->text();
    peso = ui->lePeso->text().toInt();
    material = ui->leMaterial->text();
    inscripcion = ui->checkBox->isChecked();
    funcion = ui->leFuncion->text();
    longitud = ui->leLongitud->text().toDouble();
    grosor = ui->leGrosor->text().toDouble();
    mango = ui->leMango->text();

    mw->descubrimientos.append(new Blanca(fecha,nombre,peso,material,inscripcion,funcion,longitud,grosor,mango));
    mw->fillComboBox(mw->ui->cbDescubrimientos,mw->descubrimientos);
    this->close();
}
