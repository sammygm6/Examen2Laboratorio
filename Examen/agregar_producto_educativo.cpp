#include "agregar_producto_educativo.h"
#include "ui_agregar_producto_educativo.h"

Agregar_Producto_Educativo::Agregar_Producto_Educativo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Agregar_Producto_Educativo)
{
    ui->setupUi(this);
}

Agregar_Producto_Educativo::~Agregar_Producto_Educativo()
{
    delete ui;
}
