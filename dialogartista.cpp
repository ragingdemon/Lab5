#include "dialogartista.h"
#include "ui_dialogartista.h"
#include "artista.h"
DialogArtista::DialogArtista(MainWindow *parent) :
    QDialog(parent),
    ui(new Ui::DialogArtista)
{
    ui->setupUi(this);
    mw = parent;
}

DialogArtista::~DialogArtista()
{
    delete ui;
}

void DialogArtista::on_pbAgregar_clicked()
{
    mw->clearComboBox(mw->ui->cbDescubrimientos);
    QString fecha;
    QString nombre;
    double peso;
    QString titulo;
    QString tecnica;
    double tamanio;
    QString tipo;

    fecha = ui->leFecha->text();
    nombre = ui->leNombre->text();
    peso = ui->lePeso->text().toInt();
    titulo = ui->leTitulo->text();
    tecnica = ui->leTecnica->text();
    tamanio = ui->leTamanio->text().toInt();
    tipo = ui->comboBox->currentText();

    mw->descubrimientos.append(new Artista(fecha,nombre,peso,titulo,tecnica,tamanio,tipo));
    mw->fillComboBox(mw->ui->cbDescubrimientos,mw->descubrimientos);
    this->close();
}
