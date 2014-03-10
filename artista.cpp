#include "artista.h"

Artista::Artista(QString fecha, QString nombre, double peso, QString titulo, QString tecnica, double tamanio, QString tipo):
Descubrimiento(fecha,nombre,peso),titulo(titulo),tecnica(tecnica),tamanio(tamanio),tipo(tipo)
{

}

Artista::Artista(const Artista &a) : Descubrimiento(a),titulo(a.titulo),tecnica(a.tecnica),tamanio(a.tamanio),tipo(a.tipo)
{

}

QString Artista::getTitulo() const
{
    return titulo;
}

void Artista::setTitulo(const QString &value)
{
    titulo = value;
}

QString Artista::getTecnica() const
{
    return tecnica;
}

void Artista::setTecnica(const QString &value)
{
    tecnica = value;
}

double Artista::getTamanio() const
{
    return tamanio;
}

void Artista::setTamanio(double value)
{
    tamanio = value;
}

QString Artista::getTipo() const
{
    return tipo;
}

void Artista::setTipo(const QString &value)
{
    tipo = value;
}

QString Artista::headers()
{
    QString string = Descubrimiento::headers()+",Titulo,Tecnica,Tamano,Tipo";
    return string;
}

QString Artista::toString()
{
    QString string = Descubrimiento::toString()+","+titulo+","+tecnica+","+QString::number(tamanio)+","+tipo;
    return string;
}
