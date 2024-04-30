#ifndef DETALLE_H_INCLUDED
#define DETALLE_H_INCLUDED

#include "producto.h"


struct Detalle;
typedef struct Detalle * DetallePtr;
DetallePtr constructorDetalle(int nroDetalle,ProductoPtr producto, int cantidad, float precio );
void destructorDetalle(DetallePtr d );
int getNroDetalle(DetallePtr d);

float getPrecioTotal(DetallePtr d);
#endif // DETALLE_H_INCLUDED
