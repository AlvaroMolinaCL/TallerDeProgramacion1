/*
Ejemplo 08: Suma de un arreglo

Compilar con gcc ejemplo08_sumaArreglo.c -o ejemplo08_sumaArreglo.exe
*/

#include <stdio.h>

int accArray(int array[], int); // Firma de la función 'accArray'

int main(int argc, char const *argv[])
{
    int myArray[] = {1, 2, 3, 4};
    int sumaArreglo = accArray(myArray, 4);
    printf("La suma de los numeros en el arreglo es: %i\n", sumaArreglo);
    return 0;
}

int accArray(int array[], int longitud) // Función que suma números en un arreglo
{
    int acc = 0, i;
    for (i = 0; i < longitud; i++)
    {
        acc += array[i];
    }
    return acc;
}