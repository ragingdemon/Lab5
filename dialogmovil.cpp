#include "dialogmovil.h"
#include "ui_dialogmovil.h"
#include "movil.h"
DialogMovil::DialogMovil(MainWindow *parent) :
    QDialog(parent),
    ui(new Ui::DialogMovil)
{
    ui->setupUi(this);
    mw = parent;
}

DialogMovil::~DialogMovil()
{
    delete ui;
}

void DialogMovil::on_pbAgregar_clicked()
{
    mw->clearComboBox(mw->ui->cbDescubrimientos);
    QString fecha;
    QString nombre;
    double peso;
    QString material;
    bool inscripcion;
    QString funcion;
    double velocidad;
    int capacidad;

    fecha = ui->leFecha->text();
    nombre = ui->leNombre->text();
    peso = ui->lePeso->text().toInt();
    material = ui->leMaterial->text();
    inscripcion = ui->checkBox->isChecked();
    funcion = ui->leFuncion->text();
    velocidad = ui->leVelocidad->text().toDouble();
    capacidad = ui->leCapacidad->text().toInt();

    mw->descubrimientos.append(new Movil(fecha,nombre,peso,material,inscripcion,funcion,velocidad,capacidad));
    mw->fillComboBox(mw->ui->cbDescubrimientos,mw->descubrimientos);
    this->close();
}
