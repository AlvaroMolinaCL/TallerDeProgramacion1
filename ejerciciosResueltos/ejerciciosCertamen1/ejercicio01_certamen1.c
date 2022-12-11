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
    float n, n_positivos, n_negativos, n_stop;

    n_positivos = 0;
    n_negativos = 0;

    do
    {
        printf("Ingrese numeros a continuacion: ");
        scanf("%f", &n);
        if (n > 0)
        {
            n_positivos = n_positivos + 1;
        }
        else if (n < 0)
        {
            n_negativos = n_negativos + 1;
        }
    } while (n >= -50 || n <= -100);

    n_stop = n;
    
    printf("Ha finalizado la ejecucion del programa\n");
    printf("Cantidad total de numeros positivos: %.0f\n", n_positivos);
    printf("Cantidad total de numeros negativos: %.0f\n", n_negativos);
    printf("Numero que detuvo el programa: %.0f\n", n_stop);

    return 0;
}
