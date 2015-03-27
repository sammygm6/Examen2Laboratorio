#include "ver_historial.h"
#include "ui_ver_historial.h"
#include <string>
#include <vector>

using std::vector;
using std::string;

Ver_Historial::Ver_Historial(QWidget *parent,vector<string*>* historial) :
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
