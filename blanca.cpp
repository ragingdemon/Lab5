#include "blanca.h"

Blanca::Blanca(QString fecha, QString nombre, double peso, QString material, bool inscripcion, QString funcion, double longitud, double grosor, QString mango) :
Armamento(fecha,nombre,peso,material,inscripcion,funcion), longitud(longitud), grosor(grosor),mango(mango)

{

}

Blanca::Blanca(const Blanca &b) : Armamento(b), longitud(b.longitud), grosor(b.grosor),mango(b.mango)
{

}

double Blanca::getGrosor() const
{
    return grosor;
}

void Blanca::setGrosor(double value)
{
    grosor = value;
}

double Blanca::getLongitud() const
{
    return longitud;
}

void Blanca::setLongitud(double value)
{
    longitud = value;
}

QString Blanca::getMango() const
{
    return mango;
}

void Blanca::setMango(const QString &value)
{
    mango = value;
}

QString Blanca::headers()
{
    QString string = Armamento::headers()+",Longitud,Grosor,Material Mango";
    return string;
}

QString Blanca::toString()
{
    QString string = Armamento::toString()+","+QString::number(longitud)+","+QString::number(grosor)+","+mango;
    return string;
}
