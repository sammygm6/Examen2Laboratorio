#include "agregar_producto.h"
#include "ui_agregar_producto.h"
#include "cliente.h"
#include "producto.h"
#include "productoeducativo.h"
#include "productoalcohol.h"
#include "productolujo.h"
#include <sstream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::stringstream;

agregar_producto::agregar_producto(QWidget *parent,vector<Producto*>*productos,vector<Cliente*>*clientes,vector<string*>*historial) :
    QDialog(parent),
    ui(new Ui::agregar_producto)
{
    ui->setupUi(this);
    this->productos=productos;
    this->clientes=clientes;
    this->historial=historial;
}

agregar_producto::~agregar_producto()
{
    delete ui;
}

void agregar_producto::on_Agregar_clicked()
{
    //clientes->push_back(new Cliente(ui->ComboBoxCliente->currentText()));

    if(ui->cb_ap_tipo->currentIndex()==0){
        ProductoEducativo* p_educativo=new ProductoEducativo(ui->SpinBoxVolumen->value(), ui->SpinboxPeso->value(),clientes->at(ui->ComboBoxCliente->currentIndex()), ui->SpinBoxTasa->value());
        productos.push_back(p_educativo);
        stringstream ss;
        ss<< p_educativo->toString()<<" ,"<<p_educativo->CobrarImpuesto();
        string histo=ss.str();
        historial->push_back(histo);
    }

    if(ui->cb_ap_tipo->currentIndex()==1){
        ProductoAlcohol* p_alcohol = new ProductoEducativo(ui->SpinBoxVolumen->value(), ui->SpinboxPeso->value(),clientes->at(ui->ComboBoxCliente->currentIndex()), ui->SpinBoxTasa->value());
        productos.push_back(p_alcohol);
        stringstream ss;
        ss<< p_educativo->toString()<<" ,"<<p_alcohol->CobrarImpuesto();
        string histo=ss.str();
        historial->push_back(histo);
    }

    if(ui->cb_ap_tipo->currentIndex()==2){
        Producto* p_lujo = new ProductoLujo(ui->SpinBoxVolumen->value(), ui->SpinboxPeso->value(),clientes->at(ui->ComboBoxCliente->currentIndex()), ui->SpinBoxTasa->value());
        stringstream ss;
        ss<< p_educativo->toString()<<" ,"<<p_lujo->CobrarImpuesto();
        string histo=ss.str();
        historial->push_back(histo);
    }

}
