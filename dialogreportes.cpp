#include "dialogreportes.h"
#include "ui_dialogreportes.h"
#include "descubrimiento.h"
#include "documento.h"
#include "blanca.h"
#include "fuego.h"
#include "movil.h"
#include "artista.h"
#include "municion.h"

template<class T>
void llenarReportes(QTableWidget* table,QList<T> &lista);
template<class T,class S>
QList<S*> subLista(QList<T*> &lista1);

DialogReportes::DialogReportes(MainWindow *parent) :
    QDialog(parent),
    ui(new Ui::DialogReportes)
{
    ui->setupUi(this);
    mw = parent;
    llenarReportes(ui->tableWidget,mw->descubrimientos);

}



DialogReportes::~DialogReportes()
{
    delete ui;
}

void DialogReportes::on_pushButton_clicked()
{

    QList<Documento*> l = subLista<Descubrimiento,Documento>(mw->descubrimientos);
    llenarReportes(ui->tableWidget_2,l);
}

void DialogReportes::on_pushButton_2_clicked()
{
    QList<Blanca*> l = subLista<Descubrimiento,Blanca>(mw->descubrimientos);
    llenarReportes(ui->tableWidget_2,l);
}

void DialogReportes::on_pushButton_3_clicked()
{
    QList<Fuego*> l = subLista<Descubrimiento,Fuego>(mw->descubrimientos);
    llenarReportes(ui->tableWidget_2,l);
}

void DialogReportes::on_pushButton_4_clicked()
{
    QList<Movil*> l = subLista<Descubrimiento,Movil>(mw->descubrimientos);
    llenarReportes(ui->tableWidget_2,l);
}

void DialogReportes::on_pushButton_5_clicked()
{
    QList<Artista*> l = subLista<Descubrimiento,Artista>(mw->descubrimientos);
    llenarReportes(ui->tableWidget_2,l);
}

void DialogReportes::on_pushButton_6_clicked()
{
    QList<Municion*> l = subLista<Descubrimiento,Municion>(mw->descubrimientos);
    llenarReportes(ui->tableWidget_2,l);
}

template<class T>
void llenarReportes(QTableWidget* table,QList<T> &lista){
    if (lista.count()) {
        QStringList headers = lista[0]->headers().split(",");

        table->setColumnCount(headers.count()); //la cantidad de columnas lo de definimos con la cantidad de encabezados (QStringList)
        table->setRowCount(lista.count()); //Utilizamos la cantidad de elementos de la QList anteriormente definida
        table->setHorizontalHeaderLabels(headers); //Le seteamos los encabezados a la tabla



        for (int i = 0; i < lista.count(); ++i) {
            QStringList content = lista[i]->toString().split(",");
            for (int j = 0; j < content.count(); ++j) {
                table->setItem(i,j,new QTableWidgetItem(content[j]));
            }
        }
    }
}
template<class T,class S>
QList<S*> subLista(QList<T*> &lista1){
    QList<S*> lista2;
    foreach (T* r, lista1) {
        S *temp = NULL;
        if ((temp = dynamic_cast<S*>(r))) {
            lista2.append(temp);
        }
    }
    return lista2;
}
