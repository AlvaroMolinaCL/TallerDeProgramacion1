/*
Ejemplo 01: ¿Cómo funciona un arreglo (array) o un vector?

Compilar con gcc ejemplo01_comoFunciona.c -o ejemplo01_comoFunciona.exe
*/

#include <stdio.h>

#define MAX 20 // Se define el tamaño máximo del vector

int main(int argc, char const *argv[])
{
    int miArreglo[MAX] = {5, 4, 28, 56, 97, 16, 34}; // Se declara y se inicializa un vector con 7 valores (posiciones desde 0 a 6)

    printf("%i\t", miArreglo[0]); // Se imprime el elemento almacenado en la posición 0 del vector (en este caso: 5)
    printf("%i\t", miArreglo[1]); // Se imprime el elemento almacenado en la posición 1 del vector (en este caso: 4)
    printf("%i\t", miArreglo[2]); // Se imprime el elemento almacenado en la posición 2 del vector (en este caso: 28)
    printf("\n");                 // Salto de línea

    return 0;
}
