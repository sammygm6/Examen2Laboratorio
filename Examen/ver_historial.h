#ifndef VER_HISTORIAL_H
#define VER_HISTORIAL_H

#include <QDialog>
#include <string>
#include <vector>

using std::vector;
using std::string;

namespace Ui {
class Ver_Historial;
}

class Ver_Historial : public QDialog
{
    Q_OBJECT

public:
    explicit Ver_Historial(QWidget *parent = 0,vector<string*>* historial=0);
    ~Ver_Historial();

private slots:
    void on_VerHistorial_clicked();

private:
    Ui::Ver_Historial *ui;
    vector<string*>* historial;
};

#endif // VER_HISTORIAL_H
