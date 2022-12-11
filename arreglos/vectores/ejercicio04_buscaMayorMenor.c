/*
Ejercicio 04

Construya un programa que, dado un arreglo, busque al mayor
y menor de los números en dicho arreglo.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {7, 25, -48, 56, -35, 67};

    int mayor, menor;
    mayor = array[0];
    menor = array[0];
    int i;
    for (i = 0; i < 6; i++)
    {
        if (array[i] > mayor)
        {
            mayor = array[i];
        }
        if (array[i] < menor)
        {
            menor = array[i];
        }
    }
    printf("Mayor: %i\n", mayor);
    printf("Menor: %i\n", menor);

    return 0;
}