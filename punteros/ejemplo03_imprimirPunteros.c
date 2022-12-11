/*
Ejemplo 03: Imprimir punteros por pantalla

Compilar con gcc ejemplo03_imprimirPunteros.c -o ejemplo03_imprimirPunteros.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v;      // Se declara una variable 'v' de tipo entero (int)
    int *p, *q; // Se declaran dos punteros 'p' y 'q'
    v = 44;     // Se asigna el valor 44 a la variable 'v'
    p = &v;     // Se asigna a 'p' la dirección de memoria de 'v' ('p' apunta a 'v')
    q = p;      // Se asigna 'p' a 'q' ('q' apunta a donde apunte 'p')

    printf("v = %i\n", v);   // Se imprime por pantalla la variable v
    printf("&v = %p\n", &v); // Se imprime por pantalla la dirección de memoria de v
    printf("p = %p\n", p);   // Se imprime por pantalla la variable p (puntero p)
    printf("*p = %i\n", *p); // Se imprime por pantalla el contenido al que apunta p
    printf("&p = %p\n", *p); // Se imprime por pantalla la dirección de memoria de p

    return 0;
}