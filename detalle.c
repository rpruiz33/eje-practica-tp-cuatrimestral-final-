#include <stdio.h>
#include <stdlib.h>
#include "detalle.h"
#include "producto.h"
 struct Detalle {
    int nroDetalle;
    ProductoPtr producto;
    int cantidad;
    float precio;
    float precioTotal;
};
DetallePtr constructorDetalle(int nroDetalle, ProductoPtr producto, int cantidad, float precio) {
    DetallePtr d = (DetallePtr)malloc(sizeof(struct Detalle));
    if (d == NULL) {

        return NULL;
    }
    d->nroDetalle = nroDetalle;
    d->producto = getNombreProducto(producto);
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
int getCantidadDetalle(DetallePtr d){
return d->cantidad;
}
ProductoPtr getProducto(DetallePtr d){
return  d->producto;
}
