/*
Ejercicio 05 - Laboratorio

Cree una función que reciba, por parámetro, un vector de números
enteros y retorne la suma de todos sus números pares.
*/

#include <stdio.h>

int addEvens(int, int[]);

int main(int argc, char const *argv[])
{
    int size = 5, array[] = {1, 2, 3, 4, 5};

    printf("Suma de pares: %i\n", addEvens(size, array));

    return 0;
}

int addEvens(int size, int vector[])
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        if (vector[i] % 2 == 0)
        {
            sum += vector[i]; // sum = sum + vector[i];
        }
    }
    return sum;
}