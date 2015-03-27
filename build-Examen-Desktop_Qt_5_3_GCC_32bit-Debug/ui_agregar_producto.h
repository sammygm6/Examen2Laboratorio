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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_agregar_producto
{
public:

    void setupUi(QDialog *agregar_producto)
    {
        if (agregar_producto->objectName().isEmpty())
            agregar_producto->setObjectName(QStringLiteral("agregar_producto"));
        agregar_producto->resize(400, 300);

        retranslateUi(agregar_producto);

        QMetaObject::connectSlotsByName(agregar_producto);
    } // setupUi

    void retranslateUi(QDialog *agregar_producto)
    {
        agregar_producto->setWindowTitle(QApplication::translate("agregar_producto", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class agregar_producto: public Ui_agregar_producto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_PRODUCTO_H
