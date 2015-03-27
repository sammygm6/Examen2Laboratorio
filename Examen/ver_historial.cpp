#include "ver_historial.h"
#include "ui_ver_historial.h"

Ver_Historial::Ver_Historial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ver_Historial)
{
    ui->setupUi(this);
}

Ver_Historial::~Ver_Historial()
{
    delete ui;
}
