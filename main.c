#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "cliente.h"
#include "detalle.h"
#include "factura.h"
#include "producto.h"
/**6 -  Ejercicio cuatrimestral, para irlo mejorando a medida que vemos más temas.
Crear un programa que permita generar facturas para ventas de un comercio.
-          El comercio vende Productos (alimenticios), de los que queremos
saber nombre, precio, código y cantidad disponible.
-          Al realizar una compra tenemos que facturar, de la Factura nos interesa
saber su número, la fecha, los datos del Cliente (dni, nombre) y el Detalle de la compra
 ( nroDetalle, producto, cantidad, precio y precio total). Una vez generados todos
 los detalles la Factura tiene que tener un precio final.
-          Una factura tiene muchos detalles, proponemos solucionar ese problema
 con un array, en la próxima unidad lo haremos mucho mejor.
-          Generar un mostrarFactura donde se vean todos los
 datos impactados en la compra. **/
int main()
{
        ClientePtr c1=construirCliente(222222,"lean");

        ProductoPtr p1=construirProducto("pan",1000,"iad",12);
        ProductoPtr p2=construirProducto("queso",2222,"edt",3);
        ProductoPtr p3=construirProducto("jamon",3332,"wer",5);
         ProductoPtr p4=construirProducto("salame",5555,"tyu",26);


         DetallePtr d1=constructorDetalle(232,p1,122,getPrecio(p1));
         DetallePtr d2=constructorDetalle(2,p2,133,getPrecio(p2));
         DetallePtr d3=constructorDetalle(44,p3,22,getPrecio(p3));
         DetallePtr d4=constructorDetalle(1234,p4,234,getPrecio(p4));


         ListaPtr l=crearLista();

         insertarAlFinal(l,d1);
        insertarAlFinal(l,d2);
         insertarAlFinal(l,d4);
         insertarAlFinal(l,d3);

         FacturaPtr f=constructorFactura(1,"22-3-2023",getNombreCliente( c1),l);
         mostraFactura(f);


    return 0;
}
