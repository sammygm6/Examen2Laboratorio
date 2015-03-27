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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Agregar_Cliente
{
public:
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_cancelar;
    QPushButton *pb_aceptar;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *le_nombre;

    void setupUi(QDialog *Agregar_Cliente)
    {
        if (Agregar_Cliente->objectName().isEmpty())
            Agregar_Cliente->setObjectName(QStringLiteral("Agregar_Cliente"));
        Agregar_Cliente->resize(235, 157);
        label_2 = new QLabel(Agregar_Cliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 10, 141, 21));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        widget = new QWidget(Agregar_Cliente);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 100, 178, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pb_cancelar = new QPushButton(widget);
        pb_cancelar->setObjectName(QStringLiteral("pb_cancelar"));

        horizontalLayout->addWidget(pb_cancelar);

        pb_aceptar = new QPushButton(widget);
        pb_aceptar->setObjectName(QStringLiteral("pb_aceptar"));

        horizontalLayout->addWidget(pb_aceptar);

        widget1 = new QWidget(Agregar_Cliente);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 50, 210, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        le_nombre = new QLineEdit(widget1);
        le_nombre->setObjectName(QStringLiteral("le_nombre"));

        horizontalLayout_2->addWidget(le_nombre);

        pb_aceptar->raise();
        pb_cancelar->raise();
        label->raise();
        label_2->raise();
        le_nombre->raise();
        pb_aceptar->raise();

        retranslateUi(Agregar_Cliente);
        QObject::connect(pb_cancelar, SIGNAL(clicked()), Agregar_Cliente, SLOT(close()));

        QMetaObject::connectSlotsByName(Agregar_Cliente);
    } // setupUi

    void retranslateUi(QDialog *Agregar_Cliente)
    {
        Agregar_Cliente->setWindowTitle(QApplication::translate("Agregar_Cliente", "Dialog", 0));
        label_2->setText(QApplication::translate("Agregar_Cliente", "Agregar Cliente", 0));
        pb_cancelar->setText(QApplication::translate("Agregar_Cliente", "Cancelar", 0));
        pb_aceptar->setText(QApplication::translate("Agregar_Cliente", "Aceptar", 0));
        label->setText(QApplication::translate("Agregar_Cliente", "Nombre", 0));
    } // retranslateUi

};

namespace Ui {
    class Agregar_Cliente: public Ui_Agregar_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_CLIENTE_H
