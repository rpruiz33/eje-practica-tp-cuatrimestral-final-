#ifndef FACTURA_H_INCLUDED
#define FACTURA_H_INCLUDED
#include "producto.h"
#include "lista.h"
struct Factura;
typedef struct Factura * FacturaPtr;
FacturaPtr constructorFactura(int numero,char fecha[30],char nombreCliente[30] ,ListaPtr detalle);
void destructorFactura(FacturaPtr f);
void mostraFactura(FacturaPtr f);

#endif // FACTURA_H_INCLUDED
