#include "lista.h"
#include "producto.h"
#include "factura.h"
#include "cliente.h"
#include "detalle.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Factura{
int numero;
char fecha[30];
char nombreCliente[30];
ListaPtr detalle;
ClientePtr c;

};

FacturaPtr constructorFactura(int numero,char fecha[30],char nombreCliente[30] ,ListaPtr detalle){

FacturaPtr f= malloc (sizeof(struct Factura));
f->detalle=detalle;

strcpy(f->fecha,fecha);
strcpy(f->nombreCliente,nombreCliente);
f->numero=numero;
f->detalle=detalle;

return f;
}
void destructorFactura(FacturaPtr f){
free(f);


}
void mostraFactura(FacturaPtr f){
    printf("################factura########################\n");
printf("el numero de factura es %d\nla fecha es %s\neel nombre del cliente es %s\n",f->numero,f->fecha,f->nombreCliente);


}


void mostrarDetalles(ListaPtr l) {
    if (l == NULL || getPrimeroNodo(l) == NULL) {
        printf("La lista de detalles está vacía.\n");
        return;
    }

    NodoPtr actual = getPrimeroNodo(l);
    while (actual != NULL) {
        printf("********************\n");
        DetallePtr detalle = (DetallePtr)getDato(actual);

        printf("El numero de detalle es -> %d\n", getNroDetalle(detalle));
        printf("El nombre del producto es -> %s\n", getNombreProducto(detalle));
        printf("La cantidad es -> %d\n", getCantidad(detalle));
        printf("El precio del producto es -> %.2f\n", getPrecio(detalle));
        printf("El precio total del detalle es -> %.2f\n", getPrecioTotal(detalle));

        actual = getProximo(actual);
    }
}

