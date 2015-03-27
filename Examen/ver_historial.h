#ifndef VER_HISTORIAL_H
#define VER_HISTORIAL_H

#include <QDialog>

namespace Ui {
class Ver_Historial;
}

class Ver_Historial : public QDialog
{
    Q_OBJECT

public:
    explicit Ver_Historial(QWidget *parent = 0);
    ~Ver_Historial();

private:
    Ui::Ver_Historial *ui;
};

#endif // VER_HISTORIAL_H
