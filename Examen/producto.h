#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "cliente.h"
#include <string>
class Producto
{
public:

    unsigned double volumen;
    unsigned double peso;
    Cliente cliente;


    Producto(unsigned double, unsigned double, Cliente );
    Producto();
    ~Producto();
    virtual string toString()const=0;
    virtual unsigned double CobrarImpuesto()=0;
    unsigned double getVolumen()const;
    unsigned double getPeso()const;
    Cliente getCliente();
    void setVolumen(unsigned double);
    void setPeso(unsigned double);

};

#endif // PRODUCTO_H
