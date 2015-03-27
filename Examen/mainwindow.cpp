#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include "producto.h"
#include "cliente.h"
#include <string>
#include "agregar_cliente.h"
#include "agregar_producto.h"
#include <qmessagebox.h>
#include "ver_historial.h"

using std::string;
using std::vector;

MainWindow::MainWindow(QWidget *parent,vector<Producto*>*productos,vector<Cliente*>*clientes,vector<string*>*historial) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->productos=productos;
    this->clientes=clientes;
    this->historial=historial;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_pb_agregar_cliente_clicked()
{
    Agregar_Cliente agregar_c(0,clientes);
    agregar_c.setModal(true);
    agregar_c.exec();
}

void MainWindow::on_pb_agregar_producto_clicked()
{
    if(clientes->size()>0){
        agregar_producto agregar_p(0,productos,clientes,historial);
        agregar_p.setModal(true);
        agregar_p.exec();
    }else{
        QMessageBox::information(this,tr("Error"),tr("No hay Clientes"));
    }
}

void MainWindow::on_pb_ver_historial_clicked()
{
    if(historial->size()>0){
        Ver_Historial ver_hist(0,historial);
        ver_hist.setModal(true);
        ver_hist.exec();
    }else{
        QMessageBox::information(this,tr("Error"),tr("No hay historial"));
    }
}
