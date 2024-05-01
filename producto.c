#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "producto.h"

ProductoPtr construirProducto(char nombre[30], float precio, char codigo[30], int cantidad) {
    ProductoPtr p = (ProductoPtr)malloc(sizeof(struct Producto));
    if (p == NULL) {

        return NULL;
    }
    strcpy(p->nombre, nombre);
    p->precio = precio;
    strcpy(p->codigo, codigo);
    p->cantidad = cantidad;
    return p;
}

void destructorProducto(ProductoPtr p) {
    free(p);
}

void mostrarProducto(ProductoPtr p) {
    printf("Nombre: %s\n", p->nombre);
    printf("Precio: %.2f\n", p->precio);
    printf("Código: %s\n", p->codigo);
    printf("Cantidad disponible: %d\n", p->cantidad);
}

float getPrecio(ProductoPtr p) {
    return p->precio;
}

int getCantidad(ProductoPtr p) {
    return p->cantidad;
}

char* getNombreProducto(ProductoPtr p) {
    return p->nombre;
}
