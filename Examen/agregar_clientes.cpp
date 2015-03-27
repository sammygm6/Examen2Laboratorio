#include "agregar_clientes.h"
#include "ui_agregar_clientes.h"

agregar_clientes::agregar_clientes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar_clientes)
{
    ui->setupUi(this);
}

agregar_clientes::~agregar_clientes()
{
    delete ui;
}
