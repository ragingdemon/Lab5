#ifndef MUNICION_H
#define MUNICION_H
#include "descubrimiento.h"
#include <QString>
//calibre y el material del que está hecha
class Municion : public Descubrimiento
{
    double calibre;
    QString material;
public:
    Municion(QString fecha,QString nombre,double peso,double calibre,QString material);
    Municion(const Municion &m);
//    virtual ~Municion();
    double getCalibre() const;
    void setCalibre(double value);
    QString getMaterial() const;
    void setMaterial(const QString &value);
    QString headers();
    QString toString();
};

#endif // MUNICION_H
