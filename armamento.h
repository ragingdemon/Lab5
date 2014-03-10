#ifndef ARMAMENTO_H
#define ARMAMENTO_H
#include "descubrimiento.h"
#include <QString>
//material, inscripción (si posee) y presunta función
class Armamento : public Descubrimiento
{
protected:
    QString material;
    bool inscripcion;
    QString funcion;
public:
    Armamento(QString fecha,QString nombre,double peso,QString material,bool inscripcion,QString funcion);
    Armamento(const Armamento &a);
//    virtual ~Armamento();
    QString getMaterial() const;
    void setMaterial(const QString &value);
    bool getInscripcion() const;
    void setInscripcion(bool value);
    QString getFuncion() const;
    void setFuncion(const QString &value);
    QString headers();
    QString toString();
};

#endif // ARMAMENTO_H
