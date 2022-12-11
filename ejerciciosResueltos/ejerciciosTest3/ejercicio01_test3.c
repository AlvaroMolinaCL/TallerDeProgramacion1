/*
Test 3 | Taller de Programación I (IN1045C) | Pregunta 01

Construya un programa que solicite al usuario la cantidad de notas, reciba las notas ingresadas y posteriormente
realice un cálculo del promedio.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i, j;
    printf("Ingrese el total de notas: ");
    scanf("%i", &n);
    float nota[n], suma = 0, promedio;

    // Ingreso de notas
    for (i = 0; i < n; i++)
    {
        printf("Ingrese nota %i: ", i + 1);
        scnaf("%f", &nota[i]);
    }

    // Cálculo del promedio
    for (j = 0; j < n; j++)
    {
        suma = suma + nota[i];
    }

    promedio = suma / n;

    printf("La nota es: %.2f", promedio);

    return 0;
}