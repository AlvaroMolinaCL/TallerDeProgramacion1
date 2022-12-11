/*
Ejercicio 03

Escriba un algoritmo que identifique el mayor de n numeros.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cantidad, numero1, numero2, mayor;

    do
    {
        printf("Cuantos numeros desea comparar? (Digite un numero mayor que 0): ");
        scanf("%i", &cantidad);
    } while (cantidad <= 0);

    printf("Digite el numero 1: ");
    scanf("%i", &numero1);

    mayor = numero1;

    for (int i = 1; i < cantidad; i++)
    {
        printf("Digite el numero %i: ", i + 1);
        scanf("%i", &numero2);

        if (numero2 > mayor)
        {
            mayor = numero2;
        }
    }

    printf("\nEl mayor es %i", mayor);

    return 0;
}
