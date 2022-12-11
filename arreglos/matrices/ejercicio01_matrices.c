/*
Ejercicio 01 - Matrices

Sumar dos matrices de orden 3x3 e imprimir por pantalla la matriz resultante, pero en
lugar de imprimir sus números, escribir "par", si el elemento correspondiente
es par, e "impar" si el elemento es impar.

Ejemplo de salida:
result[3][3] =
{
    {2, 3, 5},
    {7, 5, 5},
    {2, 2, 4}
};


Salida:

par impar impar
impar impar impar
par par par
*/

#include <stdio.h>
#include <stdlib.h> // rand, srand, NULL
#include <time.h>   // time

int main(int argc, char const *argv[])
{
    int i, j;
    int matriz_1[3][3] =
        {
            {2, 3, 5},
            {4, 4, 6},
            {3, 2, 7},
        };

    int matriz_2[3][3] =
        {
            {1, 2, 1},
            {1, 2, 3},
            {7, 6, 9},
        };

    int resultado[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            resultado[i][j] = matriz_1[i][j] + matriz_2[i][j];

            if (resultado[i][j] % 2 == 0)
            {
                printf("Par");
            }
            else
            {
                printf("Impar");
            }
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}
