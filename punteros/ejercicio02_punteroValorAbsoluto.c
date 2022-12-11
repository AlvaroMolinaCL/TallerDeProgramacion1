/*
Ejercicio 02

Cree un puntero que apunte a un número entero y conviertalo
a su valor absoluto, después, eleve a 5 dicho número.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = -5, *pointer = &number, i, result = 1;

    if (*pointer < 0)
    {
        *pointer *= -1;
    }

    printf("Numero: %i\n", *pointer);

    for (i = 1; i <= 5; i++)
    {
        result *= *pointer;
    }

    *pointer = result;

    printf("La potencia de 5 es %i\n", *pointer);

    return 0;
}
