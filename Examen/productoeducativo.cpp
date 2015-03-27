#include "producto.h"
#include "productoeducativo.h"

ProductoEducativo::ProductoEducativo()
{

}

ProductoEducativo::ProductoEducativo(unsigned double volumen, unsigned double peso, Cliente cliente,unsigned double tasa ):Producto(volumen, peso, tasa), tasa(tasa){

}

virtual unsigned double ProductoEducativo::CobrarImpuesto(){
    return getVolumen() * tasa;
}

unsigned double ProductoEducativo::getTasa(){
    return tasa;
}

unsigned double ProductoEducativo::setTasa(tasa){
    this->tasa = tasa;
}

ProductoEducativo::~ProductoEducativo()
{

}

