#ifndef AGREGAR_PRODUCTO_EDUCATIVO_H
#define AGREGAR_PRODUCTO_EDUCATIVO_H

#include <QDialog>

namespace Ui {
class Agregar_Producto_Educativo;
}

class Agregar_Producto_Educativo : public QDialog
{
    Q_OBJECT

public:
    explicit Agregar_Producto_Educativo(QWidget *parent = 0);
    ~Agregar_Producto_Educativo();

private:
    Ui::Agregar_Producto_Educativo *ui;
};

#endif // AGREGAR_PRODUCTO_EDUCATIVO_H
