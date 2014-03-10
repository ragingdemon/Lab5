#include "fuego.h"


Fuego::Fuego(QString fecha, QString nombre, double peso, QString material, bool inscripcion, QString funcion) :
    Armamento(fecha,nombre,peso,material,inscripcion,funcion)
{

}

Fuego::Fuego(const Fuego &f) : Armamento(f)
{

}


void Fuego::setMuniciones(const QList<Municion *> &value)
{
    municiones = value;
}

QString Fuego::headers()
{
    QString string = Armamento::headers()+",Municiones";
    return string;
}

QString Fuego::toString()
{
    QString string = Armamento::toString()+","+QString::number(municiones.count());
    return string;
}
