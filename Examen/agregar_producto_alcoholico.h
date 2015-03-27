#ifndef AGREGAR_PRODUCTO_ALCOHOLICO_H
#define AGREGAR_PRODUCTO_ALCOHOLICO_H

#include <QDialog>

namespace Ui {
class Agregar_Producto_Alcoholico;
}

class Agregar_Producto_Alcoholico : public QDialog
{
    Q_OBJECT

public:
    explicit Agregar_Producto_Alcoholico(QWidget *parent = 0);
    ~Agregar_Producto_Alcoholico();

private:
    Ui::Agregar_Producto_Alcoholico *ui;
};

#endif // AGREGAR_PRODUCTO_ALCOHOLICO_H
