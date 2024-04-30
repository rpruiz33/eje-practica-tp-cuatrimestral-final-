#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

struct Cliente ;
typedef struct Cliente * ClientePtr;
ClientePtr construirCliente(int dni, char nombre[30]);
void destructorCliente(ClientePtr c);
char* getNombreCliente(ClientePtr c);
#endif // CLIENTE_H_INCLUDED
