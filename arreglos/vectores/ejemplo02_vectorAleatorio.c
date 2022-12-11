/*
Ejemplo 02: Véctor de números aleatorios

Compilar con gcc ejemplo02_vectorAleatorio.c -o ejemplo02_vectorAleatorio.exe
*/

#include <stdio.h>
#include <stdlib.h> // rand, srand, NULL
#include <time.h>   // time

#define MAX 15       // Se define el tamaño máximo del vector
#define MAX_RAND 100 // Se define el rango máximo de números aleatorios

int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Semilla para la función rand
    int vector[MAX];   // Se declara un vector de tamaño MAX
    int i;             // Se declara un iterador

    for (i = 0; i < MAX; i++) // Condición Inicial: i = 0; Condición Final: i < MAX; Incremento: +1
    {
        vector[i] = rand() % MAX_RAND; // Se llenará el vector con números aleatorios en el intervalo [0,MAX_RAND-1]
    }

    for (i = 0; i < MAX; i++) // Condición Inicial: i = 0; Condición Final: i < MAX; Incremento: +1
    {
        printf("%i\t", vector[i]); // Se imprimirá el vector por pantalla
    }

    printf("\n"); // Salto de línea

    return 0;
}
