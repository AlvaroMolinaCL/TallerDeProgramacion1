/*
Test 1 | Taller de Programación I (IN1045C) | Pregunta 01

Construya un programa que solicite al usuario un número float por pantalla. Si este número es menor o igual
a PI (utilice 3.1415 para PI) indique el mensaje ”Su número es menor a PI”, en caso contrario el mensaje
”Su número es mayor a PI”.
*/

#include <stdio.h>

#define PI 3.1415

int main(int argc, char const *argv[])
{
    float numero = 0;

    printf("Ingrese un numero a continuacion, para determinar si es menor o mayor a PI: ");
    scanf("%f", &numero);

    if (numero <= PI)
    {
        printf("Su numero es menor a PI.");
    }
    else
    {
        printf("Su numero es mayor a PI.");
    }

    return 0;
}
