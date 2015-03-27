#include "agregar_producto.h"
#include "ui_agregar_producto.h"
#include "cliente.h"
#include "producto.h"
#include "productoeducativo.h"
#include "productoalcohol.h"
#include "productolujo.h"
#include <sstream>
#include <vector>
#include <string>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QApplication>



using std::vector;
using std::string;
using std::stringstream;

agregar_producto::agregar_producto(QWidget *parent,vector<Producto*>*productos,vector<Cliente*>*clientes,vector<string*>*historial) :
    QDialog(parent),
    ui(new Ui::agregar_producto)
{
    ui->setupUi(this);
    this->productos=productos;
    this->clientes=clientes;
    this->historial=historial;
}

agregar_producto::~agregar_producto()
{
    delete ui;
}

void agregar_producto::on_Agregar_clicked()
{
    //clientes->push_back(new Cliente(ui->ComboBoxCliente->currentText()));
/*
    if(ui->cb_ap_tipo->currentIndex()==0){
        ProductoEducativo* p_educativo=
                new ProductoEducativo(ui->SpinBoxVolumen->value(),
                                      ui->SpinboxPeso->value(),
                                      clientes->at(ui->ComboBoxCliente->currentIndex()),
                                      ui->SpinBoxTasa->value());
        productos->push_back(p_educativo);
        stringstream ss;
        ss<< p_educativo->toString()<<" ,"<<p_educativo->CobrarImpuesto();
        string* histo=new string(ss.str());
        historial->push_back(histo);
        QString text;

        QFile File_For_Writing(":/historial.txt");
        File_For_Writing.open(QIODevice::WriteOnly | QIODevice::Truncate);

        QTextStream text_stream_for_writing(&File_For_Writing);


        text = histo->c_str();

        text_stream_for_writing<<text;

        File_For_Writing.close();

        text.clear();

    }

    if(ui->cb_ap_tipo->currentIndex()==1){
        ProductoAlcohol* p_alcohol = new ProductoAlcohol(ui->SpinBoxVolumen->value(), ui->SpinboxPeso->value(),clientes->at(ui->ComboBoxCliente->currentIndex()), ui->SpinBoxTasa->value());
        productos->push_back(p_alcohol);
        stringstream ss;
        ss<< p_alcohol->toString()<<" ,"<<p_alcohol->CobrarImpuesto();
        string* histo=new string(ss.str());
        historial->push_back(histo);
        QString text;

        QFile File_For_Writing(":/historial.txt");
        File_For_Writing.open(QIODevice::WriteOnly | QIODevice::Truncate);

        QTextStream text_stream_for_writing(&File_For_Writing);


        text = histo->c_str();

        text_stream_for_writing<<text;

        File_For_Writing.close();

        text.clear();


    }

    if(ui->cb_ap_tipo->currentIndex()==2){
        Producto* p_lujo = new ProductoLujo(ui->SpinBoxVolumen->value(), ui->SpinboxPeso->value(),clientes->at(ui->ComboBoxCliente->currentIndex()), ui->SpinBoxTasa->value());
        stringstream ss;
        ss<< p_lujo->toString()<<" ,"<<p_lujo->CobrarImpuesto();
        string* histo=new string(ss.str());
        historial->push_back(histo);

        QString text;

        QFile File_For_Writing(":/historial.txt");
        File_For_Writing.open(QIODevice::WriteOnly | QIODevice::Truncate);

        QTextStream text_stream_for_writing(&File_For_Writing);


        text = histo->c_str();

        text_stream_for_writing<<text;

        File_For_Writing.close();

        text.clear();

    }
    */
}
