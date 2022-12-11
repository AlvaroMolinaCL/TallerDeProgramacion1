/*
Ejemplo 06: Valor absoluto de un número

Compilar con gcc ejemplo06_valorAbsoluto.c -o ejemplo06_valorAbsoluto.exe
*/

#include <stdio.h>

float absoluto(float); // Firma de la función 'absoluto'

int main(int argc, char const *argv[])
{
    printf("%.2f\n", absoluto(-25.368));
    return 0;
}

float absoluto(float x) // Función que obtiene el valor absoluto de un número
{
    if (x >= 0) // Si el número es mayor o igual a 0
    {
        return x; // Se retorna 'x'
    }
    else // En caso contrario a lo indicado en la línea 19
    {
        return -x; // Se retorna '-x'
    }
}