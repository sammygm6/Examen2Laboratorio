#ifndef AGREGAR_CLIENTES_H
#define AGREGAR_CLIENTES_H

#include <QDialog>

namespace Ui {
class agregar_clientes;
}

class agregar_clientes : public QDialog
{
    Q_OBJECT

public:
    explicit agregar_clientes(QWidget *parent = 0);
    ~agregar_clientes();

private:
    Ui::agregar_clientes *ui;
};

#endif // AGREGAR_CLIENTES_H
