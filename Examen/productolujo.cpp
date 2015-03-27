#include "productolujo.h"
#include "producto.h"
#include <string>
#include <sstream>
#include <QString>

using std::string;
using std::stringstream;

ProductoLujo::ProductoLujo(double volumen,double peso,Cliente cliente,double tasa)
    :Producto(volumen,peso,cliente),tasa(tasa){

}

ProductoLujo::ProductoLujo(const ProductoLujo& other)
    :Producto(other),tasa(other.tasa){

}

ProductoLujo::~ProductoLujo(){

}

string ProductoLujo::toString()const{

    stringstream ss;
    ss << Producto::toString() << " Lujo: " << impuesto;
    return ss.str();
}
double ProductoLujo::CobrarImpuesto(){
    impuesto = (getPeso()*getTasa()) + (getVolumen()*getTasa());
    return (getPeso()*getTasa()) + (getVolumen()*getTasa());
}

double ProductoLujo::getTasa()const{
    return tasa;
}
void ProductoLujo::setTasa(double tasa){
    this->tasa = tasa;
}
