/*
Ejercicio 02 - Laboratorio

FizzBuzz Game

Escribe un programa que imprima enteros del 1 al 100 (incluido).

Pero:

  - para multiplos de 3, imprime `Fizz` (en lugar de un numero)

  - para multiplos de 5, imprime `Buzz` (en lugar de un numero)

  - para multiplos de 3 y 5, imprime `FizzBuzz` (en lugar de un numero)
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%i: FizzBuzz\n", i);
        }
        else if (i % 3 == 0)
        {
            printf("%i: Fizz\n", i);
        }
        else if (i % 5 == 0)
        {
            printf("%i: Buzz\n", i);
        }
        else
        {
            printf("%i: \n", i);
        }
    }

    return 0;
}
