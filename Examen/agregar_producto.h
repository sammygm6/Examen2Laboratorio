#ifndef AGREGAR_PRODUCTO_H
#define AGREGAR_PRODUCTO_H

#include <QDialog>
#include <vector>
#include <string>
#include "producto.h"
#include "productoalcohol.h"
#include "productoeducativo.h"
#include "productolujo.h"
#include "cliente.h"

using std::vector;
using std::string;

namespace Ui {
class agregar_producto;
}

class agregar_producto : public QDialog
{
    Q_OBJECT

public:
    explicit agregar_producto(QWidget *parent = 0, vector<Producto*>* productos=0, vector<Cliente*>* clientes=0, vector<string*>* historial=0);
    ~agregar_producto();

private slots:
    void on_Agregar_clicked();

private:
    Ui::agregar_producto *ui;
    vector<Producto*>* productos;
    vector<Cliente*>* clientes;
    vector<string*>* historial;
};

#endif // AGREGAR_PRODUCTO_H
