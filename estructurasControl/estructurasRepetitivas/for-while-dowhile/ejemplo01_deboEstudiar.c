/*
Ejemplo 01: Recordatorio de que debo estudiar para Taller de Programación I

Compilar con gcc ejemplo01_deboEstudiar.c -o ejemplo01_deboEstudiar.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i; // Se declara la variable del iterador. También se puede declarar dentro de la primera condición del for

    for (i = 1; i <= 100; i = i + 1) // Valor Inicial; Valor Final; Incremento (+) o Decremento (-)
    {
        printf("Debo estudiar para Taller de Programaci%cn I\n", 162); // Mensaje que se imprimirá por pantalla 100 veces
    }

    return 0;
}