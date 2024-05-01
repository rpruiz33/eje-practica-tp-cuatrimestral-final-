#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"
#include "producto.h"
#include "detalle.h"
#include "lista.h"
#include "factura.h"

int main() {
    // Crear clientes
    ClientePtr cliente1 = construirCliente(222222, "Lean");

    // Crear productos
    ProductoPtr producto1 = construirProducto("Pan", 1000.0, "iad", 12);
    ProductoPtr producto2 = construirProducto("Queso", 2222.0, "edt", 3);
    ProductoPtr producto3 = construirProducto("Jamon", 3332.0, "wer", 5);
    ProductoPtr producto4 = construirProducto("Salame", 5555.0, "tyu", 26);

    // Crear detalles
    DetallePtr detalle1 = constructorDetalle(232, producto1, 122, getPrecio(producto1));
    DetallePtr detalle2 = constructorDetalle(2, producto2, 133, getPrecio(producto2));
    DetallePtr detalle3 = constructorDetalle(44, producto3, 22, getPrecio(producto3));
    DetallePtr detalle4 = constructorDetalle(1234, producto4, 234, getPrecio(producto4));

    // Crear lista de detalles
    ListaPtr listaDetalles = crearLista();
    insertarAlFinal(listaDetalles, detalle1);
    insertarAlFinal(listaDetalles, detalle2);
    insertarAlFinal(listaDetalles, detalle3);
    insertarAlFinal(listaDetalles, detalle4);

    // Crear factura
    FacturaPtr factura = constructorFactura(1, "22-3-2023", getNombreCliente(cliente1), listaDetalles, cliente1);

    // Mostrar factura con detalles
    mostrarFactura(factura);

    // Liberar memoria
    destructorFactura(factura);
    destructorCliente(cliente1);
    destructorProducto(producto1);
    destructorProducto(producto2);
    destructorProducto(producto3);
    destructorProducto(producto4);

    return 0;
}
