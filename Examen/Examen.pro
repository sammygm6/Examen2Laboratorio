#-------------------------------------------------
#
# Project created by QtCreator 2015-03-27T13:32:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Examen
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    agregar_clientes.cpp \
    agregar_producto.cpp

HEADERS  += mainwindow.h \
    agregar_clientes.h \
    agregar_producto.h

FORMS    += mainwindow.ui \
    agregar_clientes.ui \
    agregar_producto.ui
