#ifndef ARTISTA_H
#define ARTISTA_H
#include "descubrimiento.h"
#include <QString>
//título, la técnica, el tamaño y el tipo
class Artista : public Descubrimiento
{
QString titulo;
QString tecnica;
double tamanio;
QString tipo;
public:
    Artista(QString fecha,QString nombre,double peso,QString titulo,QString tecnica,double tamanio,QString tipo);
    Artista(const Artista & a);
//    virtual ~Artista();
    QString getTitulo() const;
    void setTitulo(const QString &value);
    QString getTecnica() const;
    void setTecnica(const QString &value);
    double getTamanio() const;
    void setTamanio(double value);
    QString getTipo() const;
    void setTipo(const QString &value);
    QString headers();
    QString toString();
};

#endif // ARTISTA_H
