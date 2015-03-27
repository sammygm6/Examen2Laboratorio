#include "agregar_producto.h"
#include "ui_agregar_producto.h"

agregar_producto::agregar_producto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar_producto)
{
    ui->setupUi(this);
}

agregar_producto::~agregar_producto()
{
    delete ui;
}
