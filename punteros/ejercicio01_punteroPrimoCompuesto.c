/*
Ejercicio 01

Cree un puntero que apunte a un número entero y determine si
es primo o compuesto, además, imprima por pantalla la dirección
de memoria en la que se guarda dicho número.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, *dir_number, i, sum = 0;

    printf("Digite un numero entero: ");
    scanf("%i", &number);

    dir_number = &number;

    for (i = 1; i <= *dir_number; i++)
    {
        if (*dir_number % i == 0)
        {
            sum++;
        }
    }

    if (sum > 2)
    {
        printf("El numero %i es compuesto\nY su direccion de memoria es %i\n", *dir_number, dir_number);
    }
    else
    {
        printf("El numero %i es primo\nY su direccion de memoria es %i\n", *dir_number, dir_number);
    }

    return 0;
}