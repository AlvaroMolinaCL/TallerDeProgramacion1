#include "myMath.h" // Se carga la biblioteca 'myMath.h' con la definición de las funciones

float cuadrado(float x)
{
    float x2 = x * x;
    return x2;
}

float suma(float x, float y)
{
    return x + y;
}

float absoluto(float x)
{
    if (x >= 0)
        return x;
    else
        return -x;
}