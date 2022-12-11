/*
Ejercicio 01 - Vectores

Encontrar el menor de los elementos de un arreglo digitado por el usuario
(utilice un solo ciclo para todo el algoritmo).
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, minor, size;

    printf("Ingrese el tama%co del arreglo: ", 164);
    scanf("%i", &size);

    int array[size];

    for (i = 0; i < size; i++)
    {
        printf("Digite el elemento %i: ", i + 1);
        scanf("%i", &array[i]);

        if (i == 0)
        {
            minor = array[i];
        }

        else
        {
            if (array[i] < minor)
            {
                minor = array[i];
            }
        }
    }
    printf("El menor es %i", minor);

    return 0;
}
