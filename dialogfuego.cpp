#include "dialogfuego.h"
#include "ui_dialogfuego.h"
template <class T>
void fillComboBox(QComboBox* box,QList<T> &lista);
template <class T>
void addElementFromListToList(QComboBox* box1,QComboBox* box2,QList<T> &list1,QList<T> &list2);
template<class T,class S>
QList<S*> subList(QList<T*> &list1);
template <class T>
void deleteElementFromList(QComboBox* box,QList<T> &lista);

DialogFuego::DialogFuego(MainWindow *parent,Fuego *f) :
    QDialog(parent),
    ui(new Ui::DialogFuego)
{
    ui->setupUi(this);
    mw = parent;
    if (f) {
        fuego = f;
        QStringList datos = f->toString().split(",");
        ui->leFecha->setText(datos[1]);
        ui->leNombre->setText(datos[2]);
        ui->lePeso->setText(datos[3]);
        ui->leMaterial->setText(datos[4]);
        ui->checkBox->setChecked(f->getInscripcion());
        ui->leFuncion->setText(datos[6]);

        municiones = subList<Descubrimiento,Municion>(mw->descubrimientos);
        fillComboBox(ui->comboBox,municiones);
        fillComboBox(ui->comboBox_2,f->municiones);
    }
}

DialogFuego::~DialogFuego()
{
    delete ui;
}

void DialogFuego::on_pbAgregar_clicked()
{
    mw->clearComboBox(mw->ui->cbDescubrimientos);
    QString fecha;
    QString nombre;
    double peso;
    QString material;
    bool inscripcion;
    QString funcion;

    fecha = ui->leFecha->text();
    nombre = ui->leNombre->text();
    peso = ui->lePeso->text().toInt();
    material = ui->leMaterial->text();
    inscripcion = ui->checkBox->isChecked();
    funcion = ui->leFuncion->text();

    mw->descubrimientos.append(new Fuego(fecha,nombre,peso,material,inscripcion,funcion));
    mw->fillComboBox(mw->ui->cbDescubrimientos,mw->descubrimientos);
    this->close();
}

void DialogFuego::on_pbMod_clicked()
{
    fuego->setFecha(ui->leFecha->text());
    fuego->setNombre(ui->leNombre->text());
    fuego->setPeso(ui->lePeso->text().toInt());
    fuego->setMaterial(ui->leMaterial->text());
    fuego->setInscripcion(ui->checkBox->isChecked());
    fuego->setFuncion(ui->leFuncion->text());
    mw->clearComboBox(mw->ui->cbDescubrimientos);
    mw->fillComboBox(mw->ui->cbDescubrimientos,mw->descubrimientos);
    this->close();
}

void DialogFuego::on_pushButton_clicked()
{
    addElementFromListToList(ui->comboBox,ui->comboBox_2,municiones,fuego->municiones);
}

void DialogFuego::on_pushButton_2_clicked()
{
    deleteElementFromList(ui->comboBox_2,fuego->municiones);
}

template <class T>
void fillComboBox(QComboBox* box,QList<T> &lista){
    foreach (T t, lista) {
        box->addItem(t->getType().mid(1) +": "+t->getNombre());
    }
}
template <class T>
void addElementFromListToList(QComboBox* box1,QComboBox* box2,QList<T> &list1,QList<T> &list2)
{
    if(box1->currentIndex() >= 0){
        int index = box1->currentIndex();
        T t = list1[index];
        if (!list2.contains(t)) {
            list2.append(t);
            box2->addItem(t->getType().mid(1) +": "+t->getNombre());
            list1.removeAt(index);
            box1->removeItem(index);
        }
        //fillComboBox(box2,list2);
    }
}

template<class T,class S>
QList<S*> subList(QList<T*> &list1){
    QList<S*> list2;
    foreach (T* r, list1) {
        S *temp = NULL;
        if ((temp = dynamic_cast<S*>(r))) {
            list2.append(temp);
        }
    }
    return list2;
}

template <class T>
void deleteElementFromList(QComboBox* box,QList<T> &lista){
    int index=box->currentIndex();
    if(index >= 0){
        //delete lista[index];
        lista.removeAt(index); // remueve el elemento del QList
        box->removeItem(index); // remueve el elemento del QList
    }
}
