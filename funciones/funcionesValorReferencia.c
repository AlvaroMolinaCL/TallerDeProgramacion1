/*
Funciones

    Salida:
        - Con retorno: Las funciones retornan un dato (int, float, char, struct data)
        - Sin retorno: Funciones que no retornan datos (void).

    Entrada:
        - Valor: Se pasa una copia directa de sus parámetros de entrada.
        - Referencia: Se pasa a la función la dirección de memoria del dato.
*/

#include <stdio.h>

/* Función de potencia por valor */
double potencia_v (double base, double exponente)
{
    double resultado = 1;

    int i;
    for (i = 0; i < exponente; i++)
    {
        resultado *= base;
    }
    base = resultado;
    return resultado;
}

/* Función de potencia por referencia */
double potencia_r (double *base, double *exponente)
{
    double resultado = 1;
    double _base = *base;
    int i;
    for (i = 0; i < *exponente; i++)
    {
        resultado *= _base;
    }
    *base = resultado;
    return resultado;
}

int main(int argc, char const *argv[])
{
    double base, exponente;
    base = 2;
    exponente = 4;

    printf("potencia_v: %f\n", potencia_v (base, exponente));
    printf("b: %f\n", base);
    printf("potencia_r: %f\n", potencia_r (&base, &exponente));
    printf("b: %f\n", base);
    
    return 0;
}
