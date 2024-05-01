#ifndef FACTURA_H
#define FACTURA_H

#include "lista.h"
#include "cliente.h"

typedef struct Factura {
    int numero;
    char fecha[30];
    char nombreCliente[30];
    ListaPtr detalle;
    ClientePtr cliente;
} *FacturaPtr;

FacturaPtr constructorFactura(int numero, char fecha[30], char nombreCliente[30], ListaPtr detalle, ClientePtr cliente);
void destructorFactura(FacturaPtr f);
void mostrarFactura(FacturaPtr f);

#endif
