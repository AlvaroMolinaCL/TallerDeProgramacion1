/*
Ejemplo 05: Manejo de estructuras con punteros

Compilar con gcc ejemplo05_manejoEstructurasPunteros.c -o ejemplo05_manejoEstructurasPunteros.exe
*/

#include <stdlib.h> // rand, NULL
#include <time.h> // time

#define MAX_NOMBRE 30

struct complejo
{
    double real;
    double imaginaria;
};

struct persona
{
    int rut;
    int verificador;
    char nombre[MAX_NOMBRE];
};

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    struct complejo c1, c2;
    struct complejo array[100];
    struct complejo *p, *q;

    p = (struct complejo *)malloc(sizeof(struct complejo));
    q = (struct complejo *)malloc(sizeof(struct complejo));

    // Forma tradicional
    (*p).real = 9;
    (*p).imaginaria = 10;

    // Con flechas
    q -> real = 8;
    q -> imaginaria = 5;

    c1.real = 4;
    c1.imaginaria = 4;
    c2.real = 45;
    c2.imaginaria = 90;

    int i;
    for (i = 0; i < 100; i++)
    {
        array[i].real = rand()%50;
        array[i].imaginaria = rand()%50 + 1;
    }
    return 0;
}

struct complejo sumaComplejo(struct complejo c1, struct complejo c2)
{
    struct complejo suma;
    suma.real = c1.real + c2.real;
    suma.imaginaria = c1.imaginaria + c2.imaginaria;
    return suma;
}