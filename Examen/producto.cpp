#include "producto.h"
#include <sstream>

using std::stringstream;

Producto::Producto(double volumen,double peso, Cliente cliente)
    :volumen(volumen), peso(peso), cliente(cliente){


}

double Producto::getPeso()const{
    return peso;
}

double Producto::getVolumen()const{
    return volumen;
}

Cliente Producto::getCliente()const{
    return cliente;
}

void Producto::setPeso(double peso){
    this->peso = peso;
}

void Producto::setVolumen(double volumen){
    this->peso = peso;
}

void Producto::setCliente(Cliente cliente){
    this->cliente = cliente;
}
Producto::~Producto()
{

}
string Producto::toString()const{
    stringstream ss;
    ss << cliente.getNombre() << " ";
    return ss.str();
}
