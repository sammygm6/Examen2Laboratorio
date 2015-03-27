#ifndef AGREGAR_PRODUCTO_LUJO_H
#define AGREGAR_PRODUCTO_LUJO_H

#include <QDialog>

namespace Ui {
class Agregar_Producto_Lujo;
}

class Agregar_Producto_Lujo : public QDialog
{
    Q_OBJECT

public:
    explicit Agregar_Producto_Lujo(QWidget *parent = 0);
    ~Agregar_Producto_Lujo();

private:
    Ui::Agregar_Producto_Lujo *ui;
};

#endif // AGREGAR_PRODUCTO_LUJO_H
