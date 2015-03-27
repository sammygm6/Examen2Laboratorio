#include "mainwindow.h"
#include <QApplication>
#include <vector>
#include "producto.h"
#include "cliente.h"
#include <string>

using std::string;
using std::vector;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    vector<Producto*>*productos;
    vector<string*>* historial;
    vector<Cliente*>* clientes;
    MainWindow w(0,productos,clientes,historial);
    w.show();

    return a.exec();
}
