#ifndef DESCUBRIMIENTO_H
#define DESCUBRIMIENTO_H
#include <QString>
//fecha del descubrimiento, el nombre y el peso

class Descubrimiento
{
protected:
    QString fecha;
    QString nombre;
    double peso;
public:
    Descubrimiento(QString fecha,QString nombre,double peso);
    Descubrimiento(const Descubrimiento&);
    virtual ~Descubrimiento();
    QString getFecha() const;
    void setFecha(const QString &value);
    QString getNombre() const;
    void setNombre(const QString &value);
    double getPeso() const;
    void setPeso(double value);
    QString headers();
    QString toString();
    virtual QString getType();
    virtual bool operator==(const Descubrimiento &d)const;
};

#endif // DESCUBRIMIENTO_H
