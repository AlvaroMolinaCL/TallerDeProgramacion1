/*
Ejercicio 10 - Laboratorio

Llene dos vectores con números aleatorios, y luego llene un tercer
vector con la suma (elemento por elemento) de los dos anteriores.

Ejemplo:
funcion1(vector) -> {1, 3, 2, 5, 5}
funcion2(vector1, vector2, vector3) -> vector3 es igual a la suma del vector 1 y 2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillVector(int, int[]);
void printVector(int, int[]);
void addVectors(int, int[], int[], int[]);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int size = 5, array1[size], array2[size], array3[size];

    printf("Vector 1: \n");
    fillVector(size, array1);
    printVector(size, array1);

    printf("\nVector 2: \n");
    fillVector(size, array2);
    printVector(size, array2);

    printf("\n\nVector Suma\nVector 3: \n");
    addVectors(size, array1, array2, array3);
    printVector(size, array3);

    return 0;
}

void fillVector(int size, int vector[])
{
    int i;
    for (i = 0; i < size; i++)
    {
        vector[i] = rand() % 10; // Numero aleatorio entre 0 y 9
    }
}

void printVector(int size, int vector[])
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%i\t", vector[i]);
    }
}

void addVectors(int size, int vector1[], int vector2[], int vector3[])
{
    int i;
    for (i = 0; i < size; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
    }
}