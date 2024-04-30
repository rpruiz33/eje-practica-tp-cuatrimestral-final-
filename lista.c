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
NodoPtr getNodo(NodoPtr k){
return k;
}

void * getDato(NodoPtr n){
return n->dato;
}
int removerPrincipio(ListaPtr l);
int removerFinal(ListaPtr l);



NodoPtr getPrimeroNodo(ListaPtr n){
return n->primero;
}
NodoPtr getProximo(NodoPtr l){
return l->proximo;

}
