/*
Ejemplo 01: Cuadrado de un número

Compilar con gcc ejemplo01_cuadradoNumero.c -o ejemplo01_cuadradoNumero.exe
*/

#include <stdio.h>

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

int main(int argc, char const *argv[])
{
    float result = cuadrado(5);
    printf("result: %.2f\n", result);
    return 0;
}