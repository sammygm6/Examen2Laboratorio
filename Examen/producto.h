#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "cliente.h"
#include <string>

using std::string;

class Producto
{
    double volumen;
    double peso;
    Cliente cliente;

public:
    Producto(double,double,Cliente&);
    Producto();
    ~Producto();
    virtual string toString()const=0;
    virtual double CobrarImpuesto()const=0;
    double getVolumen()const;
    double getPeso()const;
    Cliente getCliente()const;
    void setVolumen(double);
    void setPeso(double);
    void setCliente(Cliente);

};

#endif // PRODUCTO_H
