#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
<<<<<<< HEAD
#include "producto.h"
#include "cliente.h"
#include <string>

using std::string;
=======
#include "Producto.h"

>>>>>>> c1edd9b06dfa5f685337ef5d712ca55e46bb5754
using std::vector;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0,vector<Producto*>*productos=0,vector<Cliente*>*clientes=0,vector<string*>*historial=0);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
<<<<<<< HEAD
    vector<Producto*>*productos;
    vector<Cliente*>*clientes;
    vector<string*>*historial;
=======
    vector<Producto*>* productos;
>>>>>>> c1edd9b06dfa5f685337ef5d712ca55e46bb5754
};

#endif // MAINWINDOW_H
