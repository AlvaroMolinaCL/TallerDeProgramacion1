/*
Ejercicio 03 - Guía 1

Construya un programa que solicite al usuario el diametro de un círculo y, posteriormente, calcule el área del mismo.
*/

#include <stdio.h>
#define PI 3.1415

int main(int argc, char const *argv[])
{
    float area, diametro;
    float radio;
    printf("Ingrese el diametro: ");
    scanf("%f", &diametro);

    radio = diametro / 2;
    radio = PI * radio * radio;

    printf("El area del circulo es: %.3f\n", area);

    return 0;
}