#ifndef AGREGAR_CLIENTE_H
#define AGREGAR_CLIENTE_H

#include <QDialog>
#include <vector>
#include <string>
#include "cliente.h"

using std::vector;
using std::string;

namespace Ui {
class Agregar_Cliente;
}

class Agregar_Cliente : public QDialog
{
    Q_OBJECT

public:
    explicit Agregar_Cliente(QWidget *parent = 0,vector<Cliente*>*clientes=0);
    ~Agregar_Cliente();

private slots:
    void on_pb_aceptar_clicked();

private:
    Ui::Agregar_Cliente *ui;
    vector<Cliente*>*clientes;
};

#endif // AGREGAR_CLIENTE_H
