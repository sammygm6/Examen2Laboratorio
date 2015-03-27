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
        agregar_producto.cpp \
        producto.cpp \
        productoeducativo.cpp \
    agregar_cliente.cpp \
    ver_historial.cpp \
    productoalcohol.cpp \
    productolujo.cpp \
    cliente.cpp

HEADERS      += mainwindow.h \
        agregar_producto.h \
        producto.h \
        productoeducativo.h \
    agregar_cliente.h \
    ver_historial.h \
    productoalcohol.h \
    productolujo.h \
    cliente.h

FORMS       += mainwindow.ui \
      agregar_producto.ui \
    agregar_cliente.ui \
    ver_historial.ui

RESOURCES += \
    archivo.qrc
