#include <stdio.h>
#include <stdlib.h>
#include "detalle.h"

DetallePtr constructorDetalle(int nroDetalle, ProductoPtr producto, int cantidad, float precio) {
    DetallePtr d = (DetallePtr)malloc(sizeof(struct Detalle));
    if (d == NULL) {

        return NULL;
    }
    d->nroDetalle = nroDetalle;
    d->producto = producto;
    d->cantidad = cantidad;
    d->precio = precio;
    d->precioTotal = precio * cantidad;
    return d;
}

void destructorDetalle(DetallePtr d) {
    free(d);
}

int getNroDetalle(DetallePtr d) {
    return d->nroDetalle;
}

float getPrecioTotal(DetallePtr d) {
    return d->precioTotal;
}
