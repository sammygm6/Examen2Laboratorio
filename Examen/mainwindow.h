#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "producto.h"
#include "cliente.h"
#include <string>

using std::string;
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

    vector<Producto*>*productos;
    vector<Cliente*>*clientes;
    vector<string*>*historial;
};

#endif // MAINWINDOW_H
