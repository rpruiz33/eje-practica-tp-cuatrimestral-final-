#ifndef LISTA_H
#define LISTA_H

#include "detalle.h"

typedef struct Nodo {
    void* dato;
    struct Nodo* proximo;
} *NodoPtr;

typedef struct Lista {
    NodoPtr primero;
    NodoPtr ultimo;
} *ListaPtr;

ListaPtr crearLista();
NodoPtr crearNodo(void* dato);
int insertarAlFinal(ListaPtr l, void* dato);
NodoPtr getPrimeroNodo(ListaPtr l);
NodoPtr getProximo(NodoPtr nodo);
void* getDato(NodoPtr nodo);
void mostrarDetalles(ListaPtr l);

#endif
