/*
Test 2 | Taller de Programación I (IN1045C) | Pregunta 01

Construya un programa en lenguaje de programación C que lea caracteres por el teclado hasta encontrar
una ’a’, una ’c’ o una ’z’. Muestre la tecla que detuvo el programa por pantalla.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char caracter;

    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);

    switch (caracter)
    {
    case 'a':
        printf("Ha finalizado la ejecucion del programa\n");
        printf("Tecla que detuvo la ejecucion: a\n");
        break;

    case 'c':
        printf("Ha finalizado la ejecucion del programa\n");
        printf("Tecla que detuvo la ejecucion: c\n");
        break;

    case 'z':
        printf("Ha finalizado la ejecucion del programa\n");
        printf("Tecla que detuvo la ejecucion: z\n");
        break;

    default:
        printf("Ingrese un caracter: ");
        fflush(stdin);
        scanf("%c", &caracter);
        break;
    }

    return 0;
}
