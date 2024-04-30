#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "detalle.h"
struct Nodo;
typedef struct Nodo *NodoPtr;
struct Lista;
typedef struct Lista *ListaPtr;

NodoPtr crearNodo(DetallePtr dato);
ListaPtr crearLista();

int insertarListaPrincipio(ListaPtr l , void * dato);
int insertarAlFinal(ListaPtr l, void* dato);
int removerPrincipio(ListaPtr l);
int removerFinal(ListaPtr l);
void mostrarDetalles(ListaPtr l);
NodoPtr getPrimeroNodo(ListaPtr n);
#endif // LISTA_H_INCLUDED
