#ifndef DETALLE_H
#define DETALLE_H

#include "producto.h"

typedef struct Detalle {
    int nroDetalle;
    ProductoPtr producto;
    int cantidad;
    float precio;
    float precioTotal;
} *DetallePtr;

DetallePtr constructorDetalle(int nroDetalle, ProductoPtr producto, int cantidad, float precio);
void destructorDetalle(DetallePtr d);
int getNroDetalle(DetallePtr d);
float getPrecioTotal(DetallePtr d);

#endif
