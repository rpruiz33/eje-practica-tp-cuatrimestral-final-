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
        // Si la lista est� vac�a, el nuevo nodo ser� el primero y el �ltimo
        l->primero = no;
        l->ultimo = no;
    } else {
        // Si la lista no est� vac�a, buscar el �ltimo nodo actual
        NodoPtr ultimo = l->ultimo;
        // Enlazar el �ltimo nodo actual al nuevo nodo
        ultimo->proximo = no;
        // Ahora el nuevo nodo se convierte en el �ltimo nodo de la lista
        l->ultimo = no;
    }

    return 1;
}

void mostrarDetalles(ListaPtr l) {
    if (l == NULL || l->primero == NULL) {
        printf("La lista de detalles est� vac�a.\n");
        return;
    }

    NodoPtr actual = l->primero;
while (actual != NULL) {
    printf("********************\n");
    printf("Direcci�n del nodo: %p\n", (void*)actual);
    printf("Dato almacenado: %p\n", (void*)actual->dato); // Verificar la direcci�n almacenada
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
