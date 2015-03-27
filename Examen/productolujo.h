#ifndef PRODUCTOLUJO_H
#define PRODUCTOLUJO_H
#include "producto.h"
#include "string"

using std::string;

class ProductoLujo : public Producto
{
    double tasa;
    double impuesto;
public:
    ProductoLujo(double,double,Cliente,double);
    ProductoLujo(const ProductoLujo&);
    ~ProductoLujo();
    virtual string toString()const;
    virtual double CobrarImpuesto()const;
    virtual double getTasa()const;
    virtual void setTasa(double);
};

#endif // PRODUCTOLUJO_H
