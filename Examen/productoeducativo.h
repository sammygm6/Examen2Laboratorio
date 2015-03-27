#ifndef PRODUCTOEDUCATIVO_H
#define PRODUCTOEDUCATIVO_H
#include "producto.h"
#include "cliente.h"


class ProductoEducativo: public Producto
{
    double tasa;
    double impuesto;
public:
    ProductoEducativo(double,double, Cliente,double);
    ProductoEducativo();
    virtual double CobrarImpuesto()const;
    double getTasa()const;
    double setTasa(double);
    ~ProductoEducativo();
};

#endif // PRODUCTOEDUCATIVO_H
