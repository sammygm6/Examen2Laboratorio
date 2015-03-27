#include "agregar_cliente.h"
#include "ui_agregar_cliente.h"
#include "cliente.h"
#include <vector>
#include <string>
#include <qmessagebox.h>

using std::vector;
using std::string;

Agregar_Cliente::Agregar_Cliente(QWidget *parent,vector<Cliente*>* clientes) :
    QDialog(parent),
    ui(new Ui::Agregar_Cliente)
{
    ui->setupUi(this);
    this->clientes=clientes;
}

Agregar_Cliente::~Agregar_Cliente()
{
    delete ui;
}

void Agregar_Cliente::on_pb_aceptar_clicked()
{
    string nombre=ui->le_nombre->text().toStdString();
    if(nombre==""||nombre==" "){
        QMessageBox::information(this,tr("Error"),tr("No escribio un nombre"));
    }else{
        Cliente* cliente=new Cliente(nombre);
        clientes->push_back(cliente);
        this->close();
    }
}
