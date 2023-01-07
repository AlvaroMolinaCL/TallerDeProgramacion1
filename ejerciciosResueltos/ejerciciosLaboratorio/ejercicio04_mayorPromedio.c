/*
Ejercicio 04 - Laboratorio

2. Escribir un algoritmo que pida al usuario el nombre y las notas de dos alumnos. Calcule el promedio e imprima los datos del alumno con mayor promedio de los dos.

Desafío Punteros:
2. Escribir un algoritmo que pida al usuario el nombre y las notas de N alumnos. Calcule el promedio e imprima los datos del alumno con mayor promedio de los dos.
*/

#include <stdio.h>

typedef struct
{
    char nombre[50];
    float nota1;
    float nota2;
    float nota3;
    float promedio;
} alumno_t;

int main(int argc, char const *argv[])
{
    int size;
    printf("Digite la cantidad de alumnos a comparar: ");
    scanf("%i", &size);
    alumno_t *alumnos;
    alumnos = (alumno_t *)calloc(size, sizeof(alumno_t));

    /*
    alumno_t alumnos[2];

    printf("Ingrese los datos de cada alumno: \n");

    int i;
    for (i = 0; i < 2; i++)
    {
        printf("ALUMNO %i\n", i + 1);
        printf("Nombre: ");
        fflush(stdin);
        gets(alumnos[i].nombre);
        printf("Nota 1: ");
        scanf("%f", &alumnos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alumnos[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &alumnos[i].nota3);
        alumnos[i].promedio = (alumnos[i].nota1 + alumnos[i].nota2 + alumnos[i].nota3) / 3;
        printf("\n");
    }

    if (alumnos[0].promedio > alumnos[1].promedio)
    {
        printf("Mayor promedio\n");
        printf("Nombre: %s\n", alumnos[0].nombre);
        printf("Promedio: %.2f", alumnos[0].promedio);
    }
    else if (alumnos[1].promedio > alumnos[0].promedio)
    {
        printf("Mayor promedio\n");
        printf("Nombre: %s\n", alumnos[1].nombre);
        printf("Promedio: %.2f", alumnos[1].promedio);
    }
    else
    {
        printf("Los dos alumnos tienen igual promedio\n");
        printf("Nombres %s y %s\n", alumnos[0].nombre, alumnos[1].nombre);
        printf("Promedio: %.2f", alumnos[0].promedio);
    }
    */

    for (int i = 0; i < size; i++)
    {
        alumno_t *aux;
        aux = alumnos;
        free(aux);
        aux++;
    }

    return 0;
}
