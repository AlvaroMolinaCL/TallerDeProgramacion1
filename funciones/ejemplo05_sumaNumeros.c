/*
Ejemplo 05: Suma de números

Compilar con gcc ejemplo05_sumaNumeros.c -o ejemplo05_sumaNumeros.exe
*/

#include <stdio.h>

float suma(float, float); // Firma de la función 'suma'

int main(int argc, char const *argv[])
{
    printf("suma = %.2f\n", suma(4, 7));
    return 0;
}

float suma(float x, float y) // Función que suma dos números
{
    return x + y;
}