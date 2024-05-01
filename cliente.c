#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

ClientePtr construirCliente(int dni, char nombre[30]) {
    ClientePtr c = (ClientePtr)malloc(sizeof(struct Cliente));
    if (c == NULL) {

        return NULL;
    }
    c->dni = dni;
    strcpy(c->nombre, nombre);
    return c;
}

void destructorCliente(ClientePtr c) {
    free(c);
}

char* getNombreCliente(ClientePtr c) {
    return c->nombre;
}
