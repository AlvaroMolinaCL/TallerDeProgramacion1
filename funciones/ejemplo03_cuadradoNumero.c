/*
Ejemplo 03: Cuadrado de un número

Compilar con gcc ejemplo03_cuadradoNumero.c -o ejemplo03_cuadradoNumero.exe
*/

#include <stdio.h>

float cuadrado(float); // Firma de la función 'cuadrado'

int main(int argc, char const *argv[])
{
    float result = cuadrado(5);
    printf("result: %.2f\n", result);
    return 0;
}

/**
 * Eleva al cuadrado un número
 * @param x número float
 * @return número de entrada al cuadrado
 **/
float cuadrado(float x)
{
    float x2 = x * x;
    return x2;
}