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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ver_Historial
{
public:
    QPushButton *VerHistorial;
    QLabel *HistorialLabel;

    void setupUi(QDialog *Ver_Historial)
    {
        if (Ver_Historial->objectName().isEmpty())
            Ver_Historial->setObjectName(QStringLiteral("Ver_Historial"));
        Ver_Historial->resize(400, 300);
        VerHistorial = new QPushButton(Ver_Historial);
        VerHistorial->setObjectName(QStringLiteral("VerHistorial"));
        VerHistorial->setGeometry(QRect(150, 260, 99, 27));
        HistorialLabel = new QLabel(Ver_Historial);
        HistorialLabel->setObjectName(QStringLiteral("HistorialLabel"));
        HistorialLabel->setGeometry(QRect(20, 10, 351, 231));

        retranslateUi(Ver_Historial);

        QMetaObject::connectSlotsByName(Ver_Historial);
    } // setupUi

    void retranslateUi(QDialog *Ver_Historial)
    {
        Ver_Historial->setWindowTitle(QApplication::translate("Ver_Historial", "Dialog", 0));
        VerHistorial->setText(QApplication::translate("Ver_Historial", "Ver Historial", 0));
        HistorialLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ver_Historial: public Ui_Ver_Historial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VER_HISTORIAL_H
