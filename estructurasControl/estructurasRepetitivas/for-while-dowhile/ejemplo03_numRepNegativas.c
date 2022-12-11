/*
Ejemplo 03: Número de repeticiones con decremento de 2 en 2

Compilar con gcc ejemplo03_numRepNegativas.c -o ejemplo03_numRepNegativas.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i; // Se declara la variable del iterador

    for (i = 20; i >= 4; i = i - 2) // Repetir el ciclo for desde i = 20 hasta que i >= 4 con decremento de -2 en cada repetición
    {
        printf("Repetici%cn %i\n", 162, i); // Mensaje que se imprimirá por pantalla mientras se cumpla la condición del ciclo for
    }

    return 0;
}
