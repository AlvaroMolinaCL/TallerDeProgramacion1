/*
Ejemplo 01: Letras

Compilar con gcc ejemplo01_letras.c -o ejemplo01_letras.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char letra = 'c'; // Se declara una variable letra de tipo caracter (char) y se le asigna el valor 'c'

    switch (letra) // Se crea un switch que leerá letra
    {
    case 'a':                                    // Primer caso, en caso que la letra ingresada sea la 'a'
        printf("La letra es una a\n");           // Se imprime por pantalla que la letra es 'a'
        break;                                   // Con break se sale del switch
    case 'c':                                    // Segundo caso, en caso de que la letra ingresada sea la 'c'
        printf("La letra es una c\n");           // Se imprime por pantalla que la letra es 'c'
        break;                                   // Con break se sale del switch
    default:                                     // Caso por defecto, en caso de que no se haya ingresado ni la 'a' ni la 'c'
        printf("La letra no es v%clida\n", 160); // Se imprime por pantalla que la letra no es válida
        break;                                   // Con break se sale del switch
    }

    return 0;
}
