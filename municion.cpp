#include "municion.h"
#include "descubrimiento.h"

Municion::Municion(QString fecha, QString nombre, double peso, double calibre, QString material) :
Descubrimiento(fecha,nombre,peso),calibre(calibre),material(material)
{

}

Municion::Municion(const Municion &m) : Descubrimiento(m),calibre(m.calibre),material(m.material)
{

}

QString Municion::getMaterial() const
{
    return material;
}

void Municion::setMaterial(const QString &value)
{
    material = value;
}

double Municion::getCalibre() const
{
    return calibre;
}

void Municion::setCalibre(double value)
{
    calibre = value;
}

QString Municion::headers()
{
    QString string = Descubrimiento::headers()+",Calibre,Material";
    return string;
}

QString Municion::toString()
{
    QString string = Descubrimiento::toString()+","+QString::number(calibre)+","+material;
    return string;
}
