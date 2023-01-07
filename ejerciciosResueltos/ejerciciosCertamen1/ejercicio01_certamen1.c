/*
Certamen 1 | Taller de Programación I (IN1045C) | Pregunta 01

Construya un programa, en lenguaje de programación C, que reciba cómo entrada números de punto flotante.

El programa se debe detener cuando se ingrese un número en el intervalo [-100,-50].

Al finalizar, el programa debe imprimir por pantalla:

- Cantidad total de números positivos

- Cantidad total de números negativos

- Número que detuvo el programa.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num, numPositivos, numNegativos, numStop;

    numPositivos = 0;
    numNegativos = 0;

    do
    {
        printf("Ingrese numeros a continuacion: ");
        scanf("%f", &num);
        
        if (num > 0)
        {
            numPositivos = numPositivos + 1;
        }
        else if (num < 0)
        {
            numNegativos = numNegativos + 1;
        }
    } while (num >= -50 || num <= -100);

    numStop = num;

    printf("Ha finalizado la ejecucion del programa\n");
    printf("Cantidad total de numeros positivos: %.0f\n", numPositivos);
    printf("Cantidad total de numeros negativos: %.0f\n", numNegativos);
    printf("Numero que detuvo el programa: %.0f\n", numStop);

    return 0;
}
