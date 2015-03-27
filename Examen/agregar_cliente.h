#ifndef AGREGAR_CLIENTE_H
#define AGREGAR_CLIENTE_H

#include <QDialog>

namespace Ui {
class Agregar_Cliente;
}

class Agregar_Cliente : public QDialog
{
    Q_OBJECT

public:
    explicit Agregar_Cliente(QWidget *parent = 0);
    ~Agregar_Cliente();

private:
    Ui::Agregar_Cliente *ui;
};

#endif // AGREGAR_CLIENTE_H
