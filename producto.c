#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "producto.h"

struct Producto{
char nombre[30];
float precio;
char codigo[30];
int cantidad;


};



ProductoPtr construirProducto(char n[30],float precio,char codigo[30],int cantidad){
ProductoPtr p= malloc(sizeof(struct Producto));

strcpy(p->codigo,codigo);
strcpy(p->nombre, n);
p->cantidad=cantidad;
p->precio=precio;

return p;
};
void destructorProducto(ProductoPtr p){
free (p);

};

void mostrarProducto(ProductoPtr p){

printf("\nel codigo es %s\n",p->codigo);
printf("\nel nombre del producto es %s\n",p->nombre);
printf("\nLa cantidad  es %d\n",p->cantidad);
printf("\nel precio del producto es %s\n",p->nombre);
}
float getPrecio(ProductoPtr p){
return p->precio;
}
int getCantidad(ProductoPtr p){
return p->cantidad;
}
/*ProductoPtr getProducto(ProductoPtr p){

return p;
}*/
char* getNombreProducto(ProductoPtr p){
return p->nombre;

}
