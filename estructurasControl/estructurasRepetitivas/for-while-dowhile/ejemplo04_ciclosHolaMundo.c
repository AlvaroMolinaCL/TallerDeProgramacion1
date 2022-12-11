/*
Ejemplo 04: ¡Hola Mundo!, usando ciclos for / while / do-while

Compilar con gcc ejemplo04_ciclosHolaMundo.c -o ejemplo04_ciclosHolaMundo.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i; // Se declara la variable del iterador

    /* Ciclo for */
    printf("\nCiclo for: \n");
    for (i = 0; i < 10; i++) // Repetir el ciclo for desde i = 0 hasta que i < 10 con incremento de +1 en cada repetición (i++ es lo mismo que i = i + 1)
    {
        printf("%i) Hola mundo\n", i + 1); // Mensaje que se imprimirá por pantalla mientras se cumpla la condición del ciclo for
    }

    i = 0; // Se reinicia el iterador a valor 0

    /* Ciclo while */
    printf("\nCiclo while: \n");
    while (i < 10) // Mientras i < 10, se repetirá el ciclo
    {
        printf("%i) Hola mundo\n", i + 1); // Mensaje que se imprimirá por pantalla mientras se cumpla la condición del ciclo while
        i++;                               // Se incrementa el iterador en +1
    }

    i = 0; // Se reinicia el iterador a valor 0

    /* Ciclo do-while */
    printf("\nCiclo do while: \n");
    do // Este ciclo se hará... (continúa en la línea 35)
    {
        printf("%i) Hola mundo\n", i + 1); // Mensaje que se imprimirá por pantalla mientras se cumpla la condición del ciclo do-while
        i++;                               // Se incrementa el iterador en +1
    } while (i < 10);                      // ...mientras i < 10

    return 0;
}