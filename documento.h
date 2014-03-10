#ifndef DOCUMENTO_H
#define DOCUMENTO_H
#include "descubrimiento.h"
#include <QString>
//contenido, titulo, tipo de papel y longitud del mismo
class Documento : public Descubrimiento
{
    QString contenido;
    QString titulo;
    QString tipo;
    double longitud;
public:
    Documento(QString fecha,QString nombre,double peso,QString contenido,QString titulo,QString tipo,double longitud);
    Documento(const Documento &d);
//    virtual ~Documento();
    QString getContenido() const;
    void setContenido(const QString &value);
    QString getTitulo() const;
    void setTitulo(const QString &value);
    QString getTipo() const;
    void setTipo(const QString &value);
    double getLongitud() const;
    void setLongitud(double value);
    QString headers();
    QString toString();
};

#endif // DOCUMENTO_H
