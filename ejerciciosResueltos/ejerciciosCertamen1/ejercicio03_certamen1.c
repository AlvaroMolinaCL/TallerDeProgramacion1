/*
Certamen 1 | Taller de Programación I (IN1045C) | Pregunta 03

Se solicita crear un programa en lenguaje de programación C que solicite por teclado un número entero, un número flotante
y una letra.

Si el número entero es positivo y el flotante positivo imprimir: "Ambos son positivos", de lo contrario, si ambos son
negativos imprimir: "Ambos son negativos", en cualquier otro caso imprimir: "Uno es positivo, el otro es negativo, pero
tengo la letra <letra>", donde <letra> representa la letra ingresada por pantalla.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n_entero;
    float n_flotante;
    char letra;

    printf("Ingrese un numero entero, numero flotante y una letra (respetando el orden ya indicado): \n");
    scanf("%i %f %c", &n_entero, &n_flotante, &letra);

    if (n_entero > 0 && n_flotante > 0)
    {
        printf("Ambos son positivos.\n");
    }
    else if (n_entero < 0 && n_flotante < 0)
    {
        printf("Ambos son negativos.\n");
    }
    else
    {
        printf("Uno es positivo, el otro es negativo, pero tengo la letra %c", letra);
    }

    return 0;
}
