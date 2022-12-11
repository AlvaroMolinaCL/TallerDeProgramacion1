/*
Ejercicio 13 - Laboratorio

Simula una tienda de lentes, que tenga X cantidad de lentes en stock. En donde el
usuario escriba la cantidad a comprar.
El programa debe mostrar la cantidad en stock, la cantidad que se compro, y finaliza
hasta que la tienda se quede sin stock
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int stock = 100, order;

    while (stock > 0)
    {
        printf("Lentes en stock: %i\n", stock);
        printf("Indique la cantidad de lentes a comprar: ");
        scanf("%i", &order);

        stock -= order; // stock = stock - order
        printf("Usted ordeno %i lentes\n", order);
    }

    printf("Estamos sin stock :(\n");

    return 0;
}

/* Referencia: Head First C by David Griffiths, Dawn Griffiths */