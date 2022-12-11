/*
Ejercicio 03

Estructuras con punteros

Utilice estructuras para escribir el algoritmo **básico** de una clínica
veterinaria que pida al usuario los datos de **N mascotas**, los que deben ser:

    - Nombre
    - Especie (Perro, gato, etc.)
    - Fecha de nacimiento
    - Género (Si es macho o hembra)
    - Dueño (Primer nombre y dos apellidos)

Después de pedir todos los datos imprímalos por pantalla.

OBS: En este caso, "N mascotas" quiere decir que, en cada ejecución del programa,
el usuario debe elegir la cantidad de mascotas a registrar (la cantidad es dinámica).
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef enum
{
    macho = 1,
    hembra
} genero_t;

typedef struct
{
    char nombre[20];
    char especie[20];
    char nacimiento[20];
    genero_t genero;
    char duenio[50];
} mascota_t;

int main(int argc, char const *argv[])
{
    int size, i;

    printf("Digite la cantidad de mascotas a registrar: ");
    scanf("%i", &size);

    mascota_t *mascotas;
    mascotas = (mascota_t *)calloc(size, sizeof(mascota_t));

    printf("\n      Ingrese los datos...\n______________________________\n");
    for (i = 0; i < size; i++)
    {
        printf("MASCOTA %i\n", i + 1);
        printf("Nombre: ");
        fflush(stdin);
        gets(mascotas[i].nombre);
        printf("Especie: ");
        gets(mascotas[i].especie);
        printf("Fecha de nacimiento: ");
        gets(mascotas[i].nacimiento);
        printf("G%cnero (1 si es macho, 2 si es hembra): ", 130);
        int genero;
        scanf("%i", &genero);
        mascotas[i].genero = genero;
        printf("Due%co: ", 164);
        fflush(stdin);
        gets(mascotas[i].duenio);
        printf("\n");
    }

    printf("\n       MOSTRANDO DATOS...\n______________________________\n");
    for (i = 0; i < size; i++)
    {
        printf("MASCOTA %i\n", i + 1);
        printf("Nombre: %s\n", mascotas[i].nombre);
        printf("Especie: %s\n", mascotas[i].especie);
        printf("Fecha de nacimiento: %s\n", mascotas[i].nacimiento);
        if (mascotas[i].genero == 1)
        {
            printf("G%cnero: Macho\n", 130);
        }
        else
        {
            printf("G%cnero: Hembra\n", 130);
        }
        printf("Due%co: %s\n", 164, mascotas[i].duenio);
        printf("\n");
    }

    for (i = 0; i < size; i++)
    {
        mascota_t *aux;
        aux = mascotas;
        free(aux);
        aux++;
    }

    return 0;
}