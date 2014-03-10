#include "descubrimiento.h"
#include <typeinfo>

Descubrimiento::Descubrimiento(QString fecha, QString nombre, double peso) :
    fecha(fecha), nombre(nombre), peso(peso)
{

}

Descubrimiento::Descubrimiento(const Descubrimiento& d) : fecha(d.fecha), nombre(d.nombre), peso(d.peso)
{

}

Descubrimiento::~Descubrimiento()
{

}

QString Descubrimiento::getFecha() const
{
    return fecha;
}

void Descubrimiento::setFecha(const QString &value)
{
    fecha = value;
}

QString Descubrimiento::getNombre() const
{
    return nombre;
}

void Descubrimiento::setNombre(const QString &value)
{
    nombre = value;
}

double Descubrimiento::getPeso() const
{
    return peso;
}

void Descubrimiento::setPeso(double value)
{
    peso = value;
}

QString Descubrimiento::headers()
{
    QString string = "Clase,Fecha,Nombre,Peso";
    return string;
}

QString Descubrimiento::toString()
{
    QString string = getType().mid(1)+","+fecha+","+nombre+","+QString::number(peso);
    return string;
}

QString Descubrimiento::getType()
{
    return (typeid(*this).name());
}

bool Descubrimiento::operator==(const Descubrimiento &d) const
{
    if (fecha == d.fecha && nombre == d.nombre && peso == d.peso) {
        return true;
    }
    return false;
}
