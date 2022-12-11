/*
Ejemplo 02: Cuadrado de un número

Compilar con gcc ejemplo02_cuadradoNumero.c -o ejemplo02_cuadradoNumero.exe
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
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%.2f\n", cuadrado(i));
    }

    return 0;
}