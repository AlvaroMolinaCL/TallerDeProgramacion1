/*
Ejercicio 03 - Vectores

Construya un programa que, dado un arreglo, entregue por pantalla:
1. Cantidad de numeros negativos.
2. Cantidad de numeros positivos.
3. Cantidad de numeros pares.
4. Cantidad de numeros impares.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, size, n_negativos, n_positivos, n_pares, n_impares;

    printf("Ingrese el tama%co que tendra el arreglo: ", 164);
    scanf("%i", &size);

    int array[size];

    for (i = 0; i < size; i++)
    {
        printf("Digite el elemento %i: ", i + 1);
        scanf("%i", &array[i]);

        if (i < 0)
        {
            n_negativos = array[i];
        }
        else if (i > 0)
        {
            n_positivos = array[i];
        }
        else
        {
            if (i % 2 == 0)
            {
                n_pares = array[i];
            }
            else
            {
                n_impares = array[i];
            }
        }
    }

    printf("- Cantidad de numeros negativos: %i\n", n_negativos);
    printf("- Cantidad de numeros positivos: %i\n", n_positivos);
    printf("- Cantidad de numeros pares: %i\n", n_pares);
    printf("- Cantidad de numeros impares: %i\n", n_impares);

    return 0;
}
