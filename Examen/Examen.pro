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
        agregar_producto.cpp \
        producto.cpp \
        productoeducativo.cpp \
    agregar_producto_educativo.cpp \
    agregar_producto_alcoholico.cpp \
    agregar_producto_lujo.cpp \
    agregar_cliente.cpp \
    ver_historial.cpp

HEADERS      += mainwindow.h \
        agregar_clientes.h \
        agregar_producto.h \
        producto.h \
        productoeducativo.h \
    agregar_producto_educativo.h \
    agregar_producto_alcoholico.h \
    agregar_producto_lujo.h \
    agregar_cliente.h \
    ver_historial.h

FORMS       += mainwindow.ui \
      agregar_clientes.ui \
      agregar_producto.ui \
    agregar_producto_educativo.ui \
    agregar_producto_alcoholico.ui \
    agregar_producto_lujo.ui \
    agregar_cliente.ui \
    ver_historial.ui
