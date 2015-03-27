#include "productoalcohol.h"
#include "producto.h"
#include "cliente.h"
#include <sstream>

using std::stringstream;

ProductoAlcohol::ProductoAlcohol(double volumen,double peso, Cliente& cliente,double tasa)
    :Producto(volumen,peso,cliente),tasa(tasa){

}

ProductoAlcohol::ProductoAlcohol(const ProductoAlcohol& other)
    :Producto(other),tasa(tasa){

}

ProductoAlcohol::~ProductoAlcohol(){

}

string ProductoAlcohol::toString()const{
    stringstream ss;
    ss << Producto::toString() << " Alcohol: " << CobrarImpuesto();
    ss.str();
}

double ProductoAlcohol::CobrarImpuesto()const{
    return (this->getPeso()+this->getVolumen())*tasa;
}

double ProductoAlcohol::getTasa()const{

}

void ProductoAlcohol::setTasa(double){

}
