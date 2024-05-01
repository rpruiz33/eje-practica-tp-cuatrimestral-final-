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

FacturaPtr f= (FacturaPtr)malloc (sizeof(struct Factura));
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




