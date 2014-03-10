#ifndef MOVIL_H
#define MOVIL_H
#include "armamento.h"
#include <QString>

class Movil : public Armamento
{
    double velocidad;
    int capacidad;
public:
    Movil(QString fecha,QString nombre,double peso,QString material,bool inscripcion,QString funcion,double velocidad,int capacidad);
    Movil(const Movil & m);
//    virtual ~Movil();
    double getVelocidad() const;
    void setVelocidad(double value);
    int getCapacidad() const;
    void setCapacidad(int value);
    QString headers();
    QString toString();
};

#endif // MOVIL_H
