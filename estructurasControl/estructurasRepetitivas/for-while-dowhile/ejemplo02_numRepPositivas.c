/*
Ejemplo 02: Número de repeticiones con incremento de 1 en 1

Compilar con gcc ejemplo02_numRepPositivas.c -o ejemplo02_numRepPositivas.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i; // Se declara la variable del iterador

    for (i = 1; i <= 100; i = i + 1) // Repetir el ciclo for desde i = 1 hasta que i <= 100 con incremento de +1 en cada repetición
    {
        printf("Esta es la repetici%cn n%cmero %i\n", 162, 163, i); // Mensaje que se imprimirá por pantalla 100 veces
    }

    return 0;
}