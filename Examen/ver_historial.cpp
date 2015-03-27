#include "ver_historial.h"
#include "ui_ver_historial.h"
#include <string>
#include <vector>
#include <string>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QApplication>

using std::vector;
using std::string;

Ver_Historial::Ver_Historial(QWidget *parent,vector<string*> historial) :
    QDialog(parent),
    ui(new Ui::Ver_Historial)
{
    ui->setupUi(this);
    this->historial=historial;
}

Ver_Historial::~Ver_Historial()
{
    delete ui;
}

void Ver_Historial::on_VerHistorial_clicked()
{
    QFile file_for_reading(":/xaviselacome.txt");

       file_for_reading.open(QIODevice::ReadOnly);

       QTextStream text_stream_for_reading(&file_for_reading);

       text_stream_for_reading.readAll();

       QString text;
       text << text_stream_for_reading;

     file_for_reading.close();

     ui->HistorialLabel->setText(text);
}
