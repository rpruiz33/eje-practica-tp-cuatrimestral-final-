#include <stdio.h>
#include <stdlib.h>

#include "producto.h"
#include "detalle.h"

struct Detalle{
int nroDetalle;
ProductoPtr producto;
 int cantidad;
 float precio;
 float precioTotal;


};

DetallePtr constructorDetalle(int nroDetalle,ProductoPtr producto, int cantidad, float precio ){

DetallePtr d=malloc (sizeof (struct Detalle));

d->cantidad=getCantidad(producto);
d->nroDetalle=nroDetalle;
d->precio=getPrecio(producto);
d->precioTotal=precio* cantidad;

return d;


}
void destructorDetalle(DetallePtr d ){
free(d);


}

int getNroDetalle(DetallePtr d){
return d->nroDetalle;
}



float getPrecioTotal(DetallePtr d){

return d->precioTotal;
}
