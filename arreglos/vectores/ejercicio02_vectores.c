/*
Ejercicio 02 - Vectores

Construya un programa que solicite al usuario ingresar 5 números por teclado. El programa deberá sumar todos los
números. Como resultado el programa deberá mostrar los números por pantalla y la suma total de estos. El número
total de números ingresados deberá ser fácilmente modificable. Ejemplo: Ahora ingresar 100 números.
*/

#include <stdio.h>

#define MAX 5

int main(int argc, char const *argv[])
{
    int array[MAX];

    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%i", &array[i]);
    }

    int suma = 0;
    for (i = 0; i < MAX; i++)
    {
        printf("%i \t", array[i]);
        suma += array[i]; // suma = suma + array[i]
    }
    printf("\n");
    printf("La suma total es: %i\n", suma);

    return 0;
}