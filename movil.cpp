#include "movil.h"


Movil::Movil(QString fecha, QString nombre, double peso, QString material, bool inscripcion, QString funcion, double velocidad, int capacidad):
Armamento(fecha,nombre,peso,material,inscripcion,funcion), velocidad(velocidad),capacidad(capacidad)
{

}

Movil::Movil(const Movil &m) : Armamento(m),velocidad(m.velocidad),capacidad(m.capacidad)
{

}

double Movil::getVelocidad() const
{
    return velocidad;
}

void Movil::setVelocidad(double value)
{
    velocidad = value;
}

int Movil::getCapacidad() const
{
    return capacidad;
}

void Movil::setCapacidad(int value)
{
    capacidad = value;
}

QString Movil::headers()
{
    QString string = Armamento::headers()+",Velocidad,Capacidad";
    return string;
}

QString Movil::toString()
{
    QString string = Armamento::toString()+","+QString::number(velocidad)+","+QString::number(capacidad);
    return string;
}
