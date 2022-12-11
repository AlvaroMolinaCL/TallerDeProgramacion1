/*
Ejemplo 06: Asignación dinámica de memoria usando calloc

Compilar con gcc ejemplo06_memDinamicaCalloc.c -o ejemplo06_memDinamicaCalloc.exe
*/

#include <stdio.h>
#include <stdlib.h> // malloc, calloc, realloc, free, NULL

int main(int argc, char const *argv[])
{
    int *p;                               // Se declara un puntero 'p'
    int size = 10;                        // Se declara una variable 'size' de tipo entero (int) con valor 10
    p = (int *)calloc(size, sizeof(int)); // Se reserva memoria dinámica para el puntero 'p' usando calloc
    int *aux;                             // Se declara un puntero auxiliar
    aux = p;                              // Se iguala el puntero auxiliar con el puntero 'p'
    int i;                                // Se declara un iterador

    for (i = 0; i < size; i++) // Condición Inicial: i = 0; Condición Final: i < size; Incremento: +1
    {
        *aux = i + 1; // Se llena el arreglo dinámico
        aux++;        // Se incrementa el puntero auxiliar en 1
    }

    aux = p;
    for (i = 0; i < size; i++) // Condición Inicial: i = 0; Condición Final: i < size; Incremento: +1
    {
        printf("%i\t|", *aux); // Se imprime por pantalla el arreglo dinámico
        // free(aux);
        aux++;                 // Se incrementa el puntero auxiliar en 1
    }
    printf("\n"); // Salto de línea

    return 0;
}