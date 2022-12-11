/*
Ejercicio 01 - Laboratorio

Escribir un algoritmo que permita visualizar en pantalla los números múltiplos de 5 comprendidos
entre 1 y 100.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            printf("\t%i", i);
        }
    }

    return 0;
}