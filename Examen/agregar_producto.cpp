#include "agregar_producto.h"
#include "ui_agregar_producto.h"

#include <vector>

using std::vector;

agregar_producto::agregar_producto(vector<Producto*>* P,vector<Cliente*>* C,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar_producto)
{
    productos = P;
    clientes = C;
    ui->setupUi(this);
}

agregar_producto::~agregar_producto()
{
    delete ui;
}
