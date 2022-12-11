/*
Ejemplo 05: Asignación dinámica de memoria usando malloc

Compilar con gcc ejemplo05_memDinamicaMalloc.c -o ejemplo05_memDinamicaMalloc.exe
*/

#include <stdio.h>
#include <stdlib.h> // malloc

int main(int argc, char const *argv[])
{
    int *p;                         // Se declara un puntero 'p'
    p = (int *)malloc(sizeof(int)); // Se reserva memoria dinámica para el puntero 'p' usando malloc
    *p = 5784;                      // Se asigna el valor 5784 apuntado por 'p'
    printf("*p = %i\n", *p);        // Se imprime por pantalla el valor apuntado por 'p'

    return 0;
}