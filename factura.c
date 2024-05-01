#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "factura.h"

FacturaPtr constructorFactura(int numero, char fecha[30], char nombreCliente[30], ListaPtr detalle, ClientePtr cliente) {
    FacturaPtr f = (FacturaPtr)malloc(sizeof(struct Factura));
    if (f == NULL) {

        return NULL;
    }
    f->numero = numero;
    strcpy(f->fecha, fecha);
    strcpy(f->nombreCliente, nombreCliente);
    f->detalle = detalle;
    f->cliente = cliente;
    return f;
}

void destructorFactura(FacturaPtr f) {
    free(f);
}

void mostrarFactura(FacturaPtr f) {
    if (f == NULL) {
        printf("Factura no válida.\n");
        return;
    }
    printf("################factura########################\n");
    printf("Número de factura: %d\n", f->numero);
    printf("Fecha: %s\n", f->fecha);
    printf("Nombre del cliente: %s\n", f->nombreCliente);
    printf("Detalles de la factura:\n");
    mostrarDetalles(f->detalle);
}
