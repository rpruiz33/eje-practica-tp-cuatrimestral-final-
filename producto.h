#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

struct Producto;

typedef struct Producto *ProductoPtr;
ProductoPtr construirProducto(char n[30],float precio,char codigo[30],int cantidad);
void destructorProducto(ProductoPtr p);
float getPrecio(ProductoPtr p);
int getCantidad(ProductoPtr p);
//ProductoPtr getProducto(ProductoPtr p);
char* getNombreProducto(ProductoPtr p);

void mostrarProducto(ProductoPtr p);

#endif // PRODUCTO_H_INCLUDED
