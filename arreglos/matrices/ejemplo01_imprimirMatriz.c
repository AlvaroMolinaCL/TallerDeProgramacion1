/*
Ejemplo 01: Imprimir una matriz por pantalla

Compilar con gcc ejemplo01_imprimirMatriz.c -o ejemplo01_imprimirMatriz.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[2][2] = {{1, 2}, {3, 4}}; // Se declara una matriz de 2*2 con datos de tipo entero (int)

    printf("matriz[0][0] = %i\t", matriz[0][0]); // Fila 0 y Columna 0
    printf("matriz[0][1] = %i\n", matriz[0][1]); // Fila 0 y Columna 1
    printf("matriz[1][0] = %i\t", matriz[1][0]); // Fila 1 y Columna 0
    printf("matriz[1][1] = %i\n", matriz[1][1]); // Fila 1 y Columna 1

    printf("\n"); // Salto de línea

    return 0;
}
