#include "producto.h"
#include "productoeducativo.h"
#include <sstream>
#include "cliente.h"

using std::stringstream;

ProductoEducativo::ProductoEducativo(const ProductoEducativo& other)
    :Producto(other),tasa(other.tasa){

}

ProductoEducativo::ProductoEducativo(double volumen,double peso,Cliente& cliente,double tasa )
    :Producto(volumen,peso,cliente),tasa(tasa){

}

double ProductoEducativo::CobrarImpuesto()const{
    return this->getVolumen() * tasa;
}

double ProductoEducativo::getTasa()const{
    return tasa;
}

double ProductoEducativo::setTasa(double tasa){
    this->tasa = tasa;
}

ProductoEducativo::~ProductoEducativo()
{

}

string ProductoEducativo::toString()const{
    stringstream ss;
    ss << Producto::toString() << " Educativo: " << CobrarImpuesto();
    return ss.str();
}

