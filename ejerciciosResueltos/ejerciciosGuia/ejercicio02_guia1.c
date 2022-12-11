/*
Ejercicio 02 - Guía 1

Construya un programa que convierta una temperatura en grados Celsius a grados Fahrenheit.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int celsius;
    int fahrenheit;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%i", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("%i\n", fahrenheit);

    return 0;
}
