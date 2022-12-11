/*
Ejemplo 02: Variables locales

Compilar con gcc ejemplo01_varLocales.c -o ejemplo01_varLocales.exe
*/

#include <stdio.h>

int f(); // Función

int main(int argc, char const *argv[])
{
    int x = 4;           // Variable local - Se asigna el valor 4 a 'x'
    printf("%i\n", f()); // Se imprime por pantalla el valor de 'x' en la función f
    printf("%i\n", x);   // Se imprime por pantalla el valor de 'x' en la función principal
    return 0;
}

int f()
{
    int x = 7; // Variable local - Se asigna el valor 7 a 'x'
    return x;  // Se retorna el valor de 'x'
}