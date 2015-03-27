#ifndef PRODUCTOALCOHOL_H
#define PRODUCTOALCOHOL_H
#include "producto.h"


class ProductoAlcohol : public Producto
{
    double tasa;
public:
    ProductoAlcohol(double,double,Cliente,double);
    ProductoAlcohol(const ProductoAlcohol&);
    ~ProductoAlcohol();
    virtual string toString()const;
    virtual double CobrarImpuesto()const;
    double getTasa()const;
    virtual void setTasa(double);
};

#endif // PRODUCTOALCOHOL_H
