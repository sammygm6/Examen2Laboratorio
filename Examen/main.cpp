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
    vector<Ciente*>* cliente;
    MainWindow w(0,productos,cliente,historial);
    w.show();

    return a.exec();
}
