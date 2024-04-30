#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "cliente.h"
#include "detalle.h"
#include "factura.h"
#include "producto.h"
struct Nodo{
void* dato;
NodoPtr proximo;
};

struct Lista{
NodoPtr primero;
NodoPtr ultimo;
};

NodoPtr crearNodo(DetallePtr dato){
    if (dato==NULL){
        return NULL;
    }


NodoPtr no=malloc (sizeof(struct Nodo));
no->dato=dato;
no->proximo=NULL;
return no;

}
ListaPtr crearLista(){

ListaPtr l =(ListaPtr) malloc (sizeof(struct Lista));
l->primero=NULL;

return l;

}

int insertarListaPrincipio(ListaPtr l , void * dato){
if(dato==NULL){
    return 0;
}
NodoPtr no=crearNodo(dato);


l->primero=no;
return 1;
}
int insertarAlFinal(ListaPtr l, void * dato){

if(dato==NULL){
    return 0;
}
NodoPtr no=crearNodo(dato);


    if (l->primero == NULL) {
        // Si la lista está vacía, el nuevo nodo será el primero y el último
        l->primero = no;
        l->ultimo = no;
    } else {
        // Si la lista no está vacía, buscar el último nodo actual
        NodoPtr ultimo = l->ultimo;
        // Enlazar el último nodo actual al nuevo nodo
        ultimo->proximo = no;
        // Ahora el nuevo nodo se convierte en el último nodo de la lista
        l->ultimo = no;
    }

    return 1;
}

void mostrarDetalles(ListaPtr l) {
    if (l == NULL || l->primero == NULL) {
        printf("La lista de detalles está vacía.\n");
        return;
    }

    NodoPtr actual = l->primero;
while (actual != NULL) {
    printf("********************\n");
    printf("Dirección del nodo: %p\n", (void*)actual);
    printf("Dato almacenado: %p\n", (void*)actual->dato); // Verificar la dirección almacenada
   printf("El numero de detalle es -> %d\n", getNroDetalle((DetallePtr)actual->dato));
    printf("El nombre del producto es -> %s\n", getNombreProducto((ProductoPtr)actual->dato));
    printf("La cantidad es -> %d\n", getCantidad((ProductoPtr)actual->dato));
    printf("El precio del producto es -> %.2f\n", getPrecio((ProductoPtr)actual->dato));
    printf("El precio total del detalle es -> %.2f\n", getPrecioTotal((DetallePtr)actual->dato));

    actual = actual->proximo;
}

}

int removerPrincipio(ListaPtr l);
int removerFinal(ListaPtr l);



NodoPtr getPrimeroNodo(ListaPtr n){
return n->primero;


}
