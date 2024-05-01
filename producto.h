#ifndef PRODUCTO_H
#define PRODUCTO_H

typedef struct Producto {
    char nombre[30];
    float precio;
    char codigo[30];
    int cantidad;
} *ProductoPtr;

ProductoPtr construirProducto(char nombre[30], float precio, char codigo[30], int cantidad);
void destructorProducto(ProductoPtr p);
void mostrarProducto(ProductoPtr p);
float getPrecio(ProductoPtr p);
int getCantidad(ProductoPtr p);
char* getNombreProducto(ProductoPtr p);

#endif
