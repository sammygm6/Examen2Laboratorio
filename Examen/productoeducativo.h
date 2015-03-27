#ifndef PRODUCTOEDUCATIVO_H
#define PRODUCTOEDUCATIVO_H
#include "producto.h"
#include "cliente.h"


class ProductoEducativo: public Producto
{
public:
    unsigned double tasa;

    ProductoEducativo(unsigned double, unsigned double, Cliente,unsigned double );
    ProductoEducativo();
    virtual unsigned double CobrarImpuesto() const;
    unsigned double getTasa();
    unsigned double setTasa(unsigned double);
    ~ProductoEducativo();
};

#endif // PRODUCTOEDUCATIVO_H
