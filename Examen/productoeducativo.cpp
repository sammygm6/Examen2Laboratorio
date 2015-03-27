#include "producto.h"
#include "productoeducativo.h"
#include <sstream>

using std::stringstream;

ProductoEducativo::ProductoEducativo()
{

}

ProductoEducativo::ProductoEducativo(double volumen,double peso,Cliente cliente,double tasa )
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

ProductoEducativo::toString()const{
    stringstream ss;
    ss << Producto::toString() << " Educativo: " << CobrarImpuesto();
    return ss.str();
}
