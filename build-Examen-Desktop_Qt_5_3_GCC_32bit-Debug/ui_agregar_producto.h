/********************************************************************************
** Form generated from reading UI file 'agregar_producto.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_PRODUCTO_H
#define UI_AGREGAR_PRODUCTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_agregar_producto
{
public:
    QPushButton *Agregar;
    QComboBox *cb_ap_tipo;
    QLabel *LabelVolumen;
    QLabel *LabelPeso;
    QLabel *LabelCliente;
    QLabel *LabelTasa;
    QDoubleSpinBox *SpinBoxVolumen;
    QDoubleSpinBox *SpinboxPeso;
    QDoubleSpinBox *SpinBoxTasa;
    QComboBox *ComboBoxCliente;

    void setupUi(QDialog *agregar_producto)
    {
        if (agregar_producto->objectName().isEmpty())
            agregar_producto->setObjectName(QStringLiteral("agregar_producto"));
        agregar_producto->resize(400, 300);
        Agregar = new QPushButton(agregar_producto);
        Agregar->setObjectName(QStringLiteral("Agregar"));
        Agregar->setGeometry(QRect(270, 250, 101, 27));
        cb_ap_tipo = new QComboBox(agregar_producto);
        cb_ap_tipo->setObjectName(QStringLiteral("cb_ap_tipo"));
        cb_ap_tipo->setGeometry(QRect(264, 40, 101, 27));
        LabelVolumen = new QLabel(agregar_producto);
        LabelVolumen->setObjectName(QStringLiteral("LabelVolumen"));
        LabelVolumen->setGeometry(QRect(30, 40, 67, 17));
        LabelPeso = new QLabel(agregar_producto);
        LabelPeso->setObjectName(QStringLiteral("LabelPeso"));
        LabelPeso->setGeometry(QRect(50, 90, 41, 17));
        LabelCliente = new QLabel(agregar_producto);
        LabelCliente->setObjectName(QStringLiteral("LabelCliente"));
        LabelCliente->setGeometry(QRect(40, 140, 51, 17));
        LabelTasa = new QLabel(agregar_producto);
        LabelTasa->setObjectName(QStringLiteral("LabelTasa"));
        LabelTasa->setGeometry(QRect(60, 190, 31, 17));
        SpinBoxVolumen = new QDoubleSpinBox(agregar_producto);
        SpinBoxVolumen->setObjectName(QStringLiteral("SpinBoxVolumen"));
        SpinBoxVolumen->setGeometry(QRect(130, 40, 71, 27));
        SpinboxPeso = new QDoubleSpinBox(agregar_producto);
        SpinboxPeso->setObjectName(QStringLiteral("SpinboxPeso"));
        SpinboxPeso->setGeometry(QRect(130, 80, 69, 27));
        SpinBoxTasa = new QDoubleSpinBox(agregar_producto);
        SpinBoxTasa->setObjectName(QStringLiteral("SpinBoxTasa"));
        SpinBoxTasa->setGeometry(QRect(130, 180, 69, 27));
        ComboBoxCliente = new QComboBox(agregar_producto);
        ComboBoxCliente->setObjectName(QStringLiteral("ComboBoxCliente"));
        ComboBoxCliente->setGeometry(QRect(130, 130, 201, 27));

        retranslateUi(agregar_producto);

        QMetaObject::connectSlotsByName(agregar_producto);
    } // setupUi

    void retranslateUi(QDialog *agregar_producto)
    {
        agregar_producto->setWindowTitle(QApplication::translate("agregar_producto", "Dialog", 0));
        Agregar->setText(QApplication::translate("agregar_producto", "Agregar", 0));
        cb_ap_tipo->clear();
        cb_ap_tipo->insertItems(0, QStringList()
         << QApplication::translate("agregar_producto", "Educativo", 0)
         << QApplication::translate("agregar_producto", "Alcoholico", 0)
         << QApplication::translate("agregar_producto", "Lujo", 0)
        );
        LabelVolumen->setText(QApplication::translate("agregar_producto", "Volumen", 0));
        LabelPeso->setText(QApplication::translate("agregar_producto", "Peso", 0));
        LabelCliente->setText(QApplication::translate("agregar_producto", "Cliente", 0));
        LabelTasa->setText(QApplication::translate("agregar_producto", "Tasa", 0));
    } // retranslateUi

};

namespace Ui {
    class agregar_producto: public Ui_agregar_producto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_PRODUCTO_H
