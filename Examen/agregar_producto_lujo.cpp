#include "agregar_producto_lujo.h"
#include "ui_agregar_producto_lujo.h"

Agregar_Producto_Lujo::Agregar_Producto_Lujo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Agregar_Producto_Lujo)
{
    ui->setupUi(this);
}

Agregar_Producto_Lujo::~Agregar_Producto_Lujo()
{
    delete ui;
}
