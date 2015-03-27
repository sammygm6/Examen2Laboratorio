#ifndef AGREGAR_PRODUCTO_H
#define AGREGAR_PRODUCTO_H

#include <QDialog>

namespace Ui {
class agregar_producto;
}

class agregar_producto : public QDialog
{
    Q_OBJECT

public:
    explicit agregar_producto(QWidget *parent = 0);
    ~agregar_producto();

private:
    Ui::agregar_producto *ui;
};

#endif // AGREGAR_PRODUCTO_H
