#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct Cliente {
    int dni;
    char nombre[30];
} *ClientePtr;

ClientePtr construirCliente(int dni, char nombre[30]);
void destructorCliente(ClientePtr c);
char* getNombreCliente(ClientePtr c);

#endif
