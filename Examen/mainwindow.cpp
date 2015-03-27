#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include "producto.h"
#include "cliente.h"
#include <string>

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
