/*
Ejemplo 04: Memoria dinámica con punteros

Compilar con gcc ejemplo04_memDinPunteros.c -o ejemplo04_memDinPunteros.exe
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double x, y, z, *p, *q, *r; // Se declaran 3 variables y 3 punteros
    double **puntero;

    x = 45;                               // Se asigna el valor 45 a la variable 'x'
    r = &x;                               // Se asigna a 'r' la dirección de memoria de 'x' ('r' apunta a 'x')
    q = (double *)malloc(sizeof(double)); // Se reserva memoria dinámica para 'q'
    *q = 78.9;                            // Se asigna el valor 78.9 al contenido apuntado por 'q'
    p = r;                                // Se asigna 'r' a 'p' ('p' apunta a donde apunte 'r')
    p = q;                                // Se asigna 'q' a 'p' ('p' apunta a donde apunte 'q')
    puntero = &p;

    printf("*q: %.1f", *q);

    return 0;
}