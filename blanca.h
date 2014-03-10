#ifndef BLANCA_H
#define BLANCA_H
#include "armamento.h"
#include <QString>
//longitud, grosor de la hoja y material del mango
class Blanca : public Armamento
{
    double longitud;
    double grosor;
    QString mango;
public:
    Blanca(QString fecha,QString nombre,double peso,QString material,bool inscripcion,QString funcion,double longitud,double grosor,QString mango);
    Blanca(const Blanca & b);
//    virtual ~Blanca();
    double getLongitud() const;
    void setLongitud(double value);
    double getGrosor() const;
    void setGrosor(double value);
    QString getMango() const;
    void setMango(const QString &value);
    QString headers();
    QString toString();
};

#endif // BLANCA_H
