/*
Ejercicio 04

Escriba un algoritmo que calcule el promedio entre n numeros.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cantidad, numero1, numero2, promedio, suma;

    do
    {
        printf("Cuantos numeros desea comparar? (Digite un numero mayor que 0): ");
        scanf("%i", &cantidad);
    } while (cantidad <= 0);

    printf("Digite el numero 1: ");
    scanf("%i", &numero1);

    suma = numero1;

    for (int i = 1; i < cantidad; i++)
    {
        printf("Digite el numero %i: ", i + 1);
        scanf("%i", &numero2);

        suma = numero2 + suma;
    }

    promedio = suma / cantidad;

    printf("\nEl promedio es %i", promedio);

    return 0;
}
