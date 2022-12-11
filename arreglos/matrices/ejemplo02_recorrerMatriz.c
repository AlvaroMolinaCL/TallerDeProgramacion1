/*
Ejemplo 02: Recorrido de una matriz

Compilar con gcc ejemplo02_recorrerMatriz.c -o ejemplo02_recorrerMatriz.exe
*/

#include <stdio.h>  // printf
#include <stdlib.h> // rand, srand, NULL
#include <time.h>   // time

#define N 15 // Número de filas (arriba --> abajo)
#define M 15 // Número de columnas (izquierda --> derecha)

int main(int argc, char const *argv[])
{
    srand(time(NULL)); // Semilla para la función rand
    int matriz[N][M];  // Se declara una matriz de N filas y M columnas
    int i, j;          // Se declaran los iteradores para recorrer la matriz (i para las filas y j para las columnas)

    for (i = 0; i < N; i++) // Recorrido de filas
    {
        for (j = 0; j < M; j++) // Recorrido de columnas
        {
            matriz[i][j] = 50 + rand() % 51; // Aquí se va recorriendo y llenando toda la matriz con números aleatorios del intervalo [50,100]
        }
    }

    for (i = 0; i < N; i++)     // Recorrido de filas
    {                           // Columna
        for (j = 0; j < M; j++) // Recorrido de columnas
        {
            printf("%i \t", matriz[i][j]); // Se imprime por pantalla la matriz generada
        }
        printf("\n"); // Salto de línea
    }
    printf("\n"); // Salto de línea

    return 0;
}
