/*
Ejemplo 01: Variables globales

Compilar con gcc ejemplo01_varGlobales.c -o ejemplo01_varGlobales.exe
*/

#include <stdio.h>

int x;   // Variable global
int f(); // Función

int main(int argc, char const *argv[])
{
    x = 5;               // Se asigna el valor 5 a 'x'
    printf("%i\n", x);   // Se imprime por pantalla el valor de 'x' en la función principal
    printf("%i\n", f()); // Se imprime por pantalla el valor de 'x' en la función f
    return 0;
}

int f()
{
    x = 7;    // Se asigna el valor 7 a 'x'
    return x; // Se retorna el valor de 'x'
}