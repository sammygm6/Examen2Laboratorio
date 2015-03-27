#include "agregar_producto_alcoholico.h"
#include "ui_agregar_producto_alcoholico.h"

Agregar_Producto_Alcoholico::Agregar_Producto_Alcoholico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Agregar_Producto_Alcoholico)
{
    ui->setupUi(this);
}

Agregar_Producto_Alcoholico::~Agregar_Producto_Alcoholico()
{
    delete ui;
}
