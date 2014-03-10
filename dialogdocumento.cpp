#include "dialogdocumento.h"
#include "ui_dialogdocumento.h"
#include "documento.h"
DialogDocumento::DialogDocumento(MainWindow *parent) :
    QDialog(parent),
    ui(new Ui::DialogDocumento)
{
    ui->setupUi(this);
    mw = parent;
}

DialogDocumento::~DialogDocumento()
{
    delete ui;
}

void DialogDocumento::on_pbAgregar_clicked()
{
    mw->clearComboBox(mw->ui->cbDescubrimientos);
    QString fecha;
    QString nombre;
    double peso;
    QString contenido;
    QString titulo;
    QString tipo;
    double longitud;

    fecha = ui->leFecha->text();
    nombre = ui->leNombre->text();
    peso = ui->lePeso->text().toInt();
    contenido = ui->leContenido->text();
    titulo = ui->leTitulo->text();
    tipo = ui->leTipo->text();
    longitud = ui->leLongitud->text().toDouble();

    mw->descubrimientos.append(new Documento(fecha,nombre,peso,contenido,titulo,tipo,longitud));
    mw->fillComboBox(mw->ui->cbDescubrimientos,mw->descubrimientos);
    this->close();
}
