/********************************************************************************
** Form generated from reading UI file 'ver_historial.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VER_HISTORIAL_H
#define UI_VER_HISTORIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Ver_Historial
{
public:

    void setupUi(QDialog *Ver_Historial)
    {
        if (Ver_Historial->objectName().isEmpty())
            Ver_Historial->setObjectName(QStringLiteral("Ver_Historial"));
        Ver_Historial->resize(400, 300);

        retranslateUi(Ver_Historial);

        QMetaObject::connectSlotsByName(Ver_Historial);
    } // setupUi

    void retranslateUi(QDialog *Ver_Historial)
    {
        Ver_Historial->setWindowTitle(QApplication::translate("Ver_Historial", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Ver_Historial: public Ui_Ver_Historial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VER_HISTORIAL_H
