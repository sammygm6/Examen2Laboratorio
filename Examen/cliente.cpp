#include "cliente.h"
#include <string>

using std::string;

Cliente::Cliente(string name):name(name)
{

}

Cliente::Cliente(const Cliente& other):Cliente(other){

}

Cliente::~Cliente()
{

}

string Cliente::GetName()const{
    return this->name ;
}

void Cliente::SetName(string name){
    this->name=name;
}

