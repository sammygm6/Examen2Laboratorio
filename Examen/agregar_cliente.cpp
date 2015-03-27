#include "agregar_cliente.h"
#include "ui_agregar_cliente.h"

Agregar_Cliente::Agregar_Cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Agregar_Cliente)
{
    ui->setupUi(this);
}

Agregar_Cliente::~Agregar_Cliente()
{
    delete ui;
}
