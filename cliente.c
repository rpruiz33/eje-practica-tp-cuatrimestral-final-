#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
#include "cliente.h"
#include "detalle.h"
#include "factura.h"
#include "producto.h"


struct Cliente {
int dni;
char nombre[30];

};

ClientePtr construirCliente(int dni, char nombre[30]){
ClientePtr c= malloc(sizeof (struct Cliente));
c->dni=dni;
strcpy(c->nombre,nombre);
return c;
}
void destructorCliente(ClientePtr c){
free(c);
};

char* getNombreCliente(ClientePtr c){
return c->nombre;

}
