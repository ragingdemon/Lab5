#ifndef FUEGO_H
#define FUEGO_H
#include "armamento.h"
#include "municion.h"
#include <QString>
#include <QList>
class Fuego : public Armamento
{
public:
    QList<Municion*> municiones;
    Fuego(QString fecha,QString nombre,double peso,QString material,bool inscripcion,QString funcion);
    Fuego(const Fuego &f);
//    virtual ~Fuego();
    void setMuniciones(const QList<Municion *> &value);
    QString headers();
    QString toString();
};

#endif // FUEGO_H
