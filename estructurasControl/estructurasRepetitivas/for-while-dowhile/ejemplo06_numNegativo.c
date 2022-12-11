/*
Ejemplo 06: Número negativo

Compilar con gcc ejemplo06_numNegativo.c -o ejemplo06_numNegativo.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = -50; // Se declara una variable de tipo entera (int) inicializada con valor -50

    while (x < 0) // Mientras x sea menor que 0 (x < 0)
    {
        printf("La variable x sigue siendo negativa\n"); // Se imprimirá por pantalla que x sigue siendo igual a un valor negativo
        x = x + 1;                                       // Se incrementa en 1 el valor de x
    }

    return 0;
}
