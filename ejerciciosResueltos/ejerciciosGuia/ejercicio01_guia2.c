/*
Ejercicio 01 - Guía 2

Construya un programa que, dado un descuento de 150000 solicite al usuario ingresar el valor de una
venta y, posteriormente, determine el porcentaje de descuento en relación al valor ingresado e imprima
por pantalla el IVA y precio final de dicha venta.
*/

#include <stdio.h>
#define IVA 0.19
#define DESCUENTO 0.25

int main(int argc, char const *argv[])
{
    float precio, iva_venta;
    float precio_descuento = 150000;
    printf("Ingrese el valor de la venta: ");
    scanf("%f", &precio);
    iva_venta = precio * IVA;

    if (precio > precio_descuento)
    {
        precio = precio - precio * DESCUENTO;
        printf("¡Tu compra ha obtenido un descuento de %.0f !\n", precio * DESCUENTO);
    }

    printf("IVA = $%.0f\n", iva_venta);
    printf("Precio final = $%.0f\n", precio);

    return 0;
}
