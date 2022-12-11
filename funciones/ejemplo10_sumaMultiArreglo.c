/*
Ejemplo 10: Suma de un arreglo de dos dimensiones (matriz)

Compilar con gcc ejemplo10_sumaMultiArreglo.c -o ejemplo10_sumaMultiArreglo.exe
*/

#include <stdio.h>

#define MAX_1 5 // Se define MAX_1 = 5

int accMultiArray(int array[][MAX_1], int length); // Firma de la función 'accMultiArray'

int main(int argc, char const *argv[])
{
    int myMultiArray[][MAX_1] =
    {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };

    int suma;
    suma = accMultiArray(myMultiArray, 4);
    printf("La suma es: %i\n", suma);

    return 0;
}

int accMultiArray(int array[][MAX_1], int length) // Función que suma números en un arreglo de dos dimensiones (matriz)
{
    int i, j, acc = 0;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < MAX_1; j++)
        {
            acc += array[i][j];
        }
    }
    return acc;
}