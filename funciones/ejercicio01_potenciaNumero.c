/*
Ejercicio 01 - Funciones

Construya una función que permita calcular la potencia de un número (no se puede utilizar math.h)

// base ^ exponente
// base * base * base * ... * base
*/

double potencia(double base, int exponente)
{
    double resultado = 1;
    int i;
    for (i = 0; i < exponente; i++)
    {
        resultado *= base; // resultado = resultado * base;
    }
    return resultado;
}