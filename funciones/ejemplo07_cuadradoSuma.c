/*
Ejemplo 03: Cuadrado y suma de números

Compilar con gcc ejemplo07_cuadradoSuma.c -o ejemplo07_cuadradoSuma.exe
*/

#include <stdio.h>

float cuadrado(float);        // Firma de la función 'cuadroado'
float suma(float x, float y); // Firma de la función 'suma'

int main(int argc, char const *argv[])
{
    float result = cuadrado(5);
    printf("%.2f\n", result);
    printf("%.2f", suma(2, 3));
    return 0;
}

float cuadrado(float x) // Función que cálcula el cuadrado de un número
{
    float x2 = x * x;
    return x2;
}

float suma(float x, float y) // Función que suma dos números
{
    float result;
    result = x + y;
    return result;
}