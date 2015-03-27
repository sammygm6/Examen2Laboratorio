/********************************************************************************
** Form generated from reading UI file 'agregar_clientes.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_CLIENTES_H
#define UI_AGREGAR_CLIENTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_agregar_clientes
{
public:

    void setupUi(QDialog *agregar_clientes)
    {
        if (agregar_clientes->objectName().isEmpty())
            agregar_clientes->setObjectName(QStringLiteral("agregar_clientes"));
        agregar_clientes->resize(400, 300);

        retranslateUi(agregar_clientes);

        QMetaObject::connectSlotsByName(agregar_clientes);
    } // setupUi

    void retranslateUi(QDialog *agregar_clientes)
    {
        agregar_clientes->setWindowTitle(QApplication::translate("agregar_clientes", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class agregar_clientes: public Ui_agregar_clientes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_CLIENTES_H
