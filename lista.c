#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

ListaPtr crearLista() {
    ListaPtr l = (ListaPtr)malloc(sizeof(struct Lista));
    if (l == NULL) {

        return NULL;
    }
    l->primero = NULL;
    l->ultimo = NULL;
    return l;
}

NodoPtr crearNodo(void* dato) {
    NodoPtr nodo = (NodoPtr)malloc(sizeof(struct Nodo));
    if (nodo == NULL) {

        return NULL;
    }
    nodo->dato = dato;
    nodo->proximo = NULL;
    return nodo;
}

int insertarAlFinal(ListaPtr l, void* dato) {
    if (l == NULL || dato == NULL) {
        return 0;
    }
    NodoPtr nodo = crearNodo(dato);
    if (l->primero == NULL) {
        l->primero = nodo;
        l->ultimo = nodo;
    } else {
        l->ultimo->proximo = nodo;
        l->ultimo = nodo;
    }
    return 1;
}

NodoPtr getPrimeroNodo(ListaPtr l) {
    return l->primero;
}

NodoPtr getProximo(NodoPtr nodo) {
    if (nodo != NULL) {
        return nodo->proximo;
    }
    return NULL;
}

void* getDato(NodoPtr nodo) {
    if (nodo != NULL) {
        return nodo->dato;
    }
    return NULL;
}

void mostrarDetalles(ListaPtr l) {
    if (l == NULL || l->primero == NULL) {

        return;
    }

    NodoPtr actual = l->primero;
    while (actual != NULL) {
        printf("********************\n");
        DetallePtr detalle = (DetallePtr)getDato(actual);

        printf("El numero de detalle es -> %d\n", getNroDetalle(detalle));
        printf("El nombre del producto es -> %s\n", getNombreProducto(detalle->producto));
        printf("La cantidad es -> %d\n", detalle->cantidad);
        printf("El precio del producto es -> %.2f\n", getPrecio(detalle->producto));
        printf("El precio total del detalle es -> %.2f\n", getPrecioTotal(detalle));

        actual = getProximo(actual);
    }
}
