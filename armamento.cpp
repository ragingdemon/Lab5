#include "armamento.h"

Armamento::Armamento(QString fecha, QString nombre, double peso, QString material, bool inscripcion, QString funcion) :
    Descubrimiento(fecha,nombre,peso), material(material),inscripcion(inscripcion),funcion(funcion)
{

}

Armamento::Armamento(const Armamento &a) : Descubrimiento(a), material(a.material),inscripcion(a.inscripcion),funcion(a.funcion)
{

}

bool Armamento::getInscripcion() const
{
    return inscripcion;
}

void Armamento::setInscripcion(bool value)
{
    inscripcion = value;
}

QString Armamento::getFuncion() const
{
    return funcion;
}

void Armamento::setFuncion(const QString &value)
{
    funcion = value;
}

QString Armamento::getMaterial() const
{
    return material;
}

void Armamento::setMaterial(const QString &value)
{
    material = value;
}

QString Armamento::headers()
{
    QString string = Descubrimiento::headers()+",Material,Inscripcion,Funcion";
    return string;
}

QString Armamento::toString()
{
    QString string = Descubrimiento::toString()+","+material+","+inscripcion+","+funcion;
    return string;
}

