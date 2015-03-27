/********************************************************************************
** Form generated from reading UI file 'agregar_cliente.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_CLIENTE_H
#define UI_AGREGAR_CLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Agregar_Cliente
{
public:

    void setupUi(QDialog *Agregar_Cliente)
    {
        if (Agregar_Cliente->objectName().isEmpty())
            Agregar_Cliente->setObjectName(QStringLiteral("Agregar_Cliente"));
        Agregar_Cliente->resize(400, 300);

        retranslateUi(Agregar_Cliente);

        QMetaObject::connectSlotsByName(Agregar_Cliente);
    } // setupUi

    void retranslateUi(QDialog *Agregar_Cliente)
    {
        Agregar_Cliente->setWindowTitle(QApplication::translate("Agregar_Cliente", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Agregar_Cliente: public Ui_Agregar_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_CLIENTE_H
