#include "producto.h"

Producto::Producto()
{

}

/*    Producto(unsigned double, unsigned double, Cliente );
    Producto();
    ~Producto();
    virtual string toString()const;
    virtual unsigned double CobrarImpuesto();
    unsigned double getVolumen()const;
    unsigned double getPeso()const;
    Cliente getCliente();
    void setVolumen(unsigned double);
    void setPeso(unsigned double);
*/

Producto::Producto(unsigned double volumen, unsigned double peso, Cliente cliente):volumen(volumen), peso(peso), cliente(cliente){


}

unsigned double Producto::getPeso()const{
    return peso;
}

unsigned double Producto::getVolumen()const{
    return volumen;
}

Cliente Producto::getCliente()const{
    return cliente;
}

void Producto::setPeso(peso){
    this->peso = peso;
}

void Producto::setVolumen(volumen){
    this->peso = peso;
}

void Producto::setCliente(cliente){
    this->cliente = cliente;
}
Producto::~Producto()
{

}

