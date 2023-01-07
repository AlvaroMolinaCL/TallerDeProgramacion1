/*
Ejercicio 01 - Laboratorio

Construya el algoritmo de una caja registradora que pregunte
al usuario la cantidad de productos que va a comprar, acto seguido
se debe pedir el precio de cada producto e imprimir la suma total
de precios al finalizar la compra (al imprimir en pantalla exprese
los precios con el signo "$" y en números decimales).
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float precio, precioTotal = 0;
    int n, i;

    printf("Digite la cantidad de productos: ");
    scanf("%i", &n);

    for (i = 0; i < n; i++) // i++ <=> i = i+1
    {
        printf("Digite el precio %i: ", i + 1);
        scanf("%f", &precio);

        precioTotal += precio; // <=> precioTotal = precioTotal + precio
    }

    printf("Precio total: $%.2f\n", precioTotal);

    return 0;
}