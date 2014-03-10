#include "documento.h"


Documento::Documento(QString fecha,QString nombre,double peso,QString contenido,QString titulo,QString tipo,double longitud) :
    Descubrimiento(fecha,nombre,peso),contenido(contenido),titulo(titulo),tipo(tipo),longitud(longitud)
{

}

Documento::Documento(const Documento &d) : Descubrimiento(d),contenido(d.contenido),titulo(d.titulo),tipo(d.tipo),longitud(d.longitud)
{

}

QString Documento::getContenido() const
{
    return contenido;
}

void Documento::setContenido(const QString &value)
{
    contenido = value;
}

QString Documento::getTitulo() const
{
    return titulo;
}

void Documento::setTitulo(const QString &value)
{
    titulo = value;
}

QString Documento::getTipo() const
{
    return tipo;
}

void Documento::setTipo(const QString &value)
{
    tipo = value;
}

double Documento::getLongitud() const
{
    return longitud;
}

void Documento::setLongitud(double value)
{
    longitud = value;
}

QString Documento::headers()
{
    QString string = Descubrimiento::headers()+",Contenido,Titulo,Tipo,Longitud";
    return string;
}

QString Documento::toString()
{
    QString string = Descubrimiento::toString()+","+contenido+","+titulo+","+tipo+","+QString::number(longitud);
    return string;
}
