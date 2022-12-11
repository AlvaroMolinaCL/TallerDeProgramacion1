/*
Ejercicio 02

Estructuras sin punteros

Suponga que está vendiendo **tres libros** desde su casa y por internet. Cree una
estructura que le permita guardar los datos de un libro, estos deben ser:

    - Título
    - Autor
    - Precio
    - Unidades vendidas

Estos datos quedan a su elección para cada libro en específico que registre. Utilice
dicha estructura para comparar los tres libros imprimiendo por pantalla los datos del
libro más vendido.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char titulo[50];
    char autor[50];
    float precio;
    int unidades_vendidas;
} libro_t;

int main(int argc, char const *argv[])
{
    libro_t libros[3];

    strcpy(libros[0].titulo, "El Hobbit");
    strcpy(libros[0].autor, "J. R. R. Tolkien");
    libros[0].precio = 10000;
    libros[0].unidades_vendidas = 53;

    strcpy(libros[1].titulo, "Ensayo sobre la ceguera");
    strcpy(libros[1].autor, "Jose Saramago");
    libros[1].precio = 8000;
    libros[1].unidades_vendidas = 90;

    strcpy(libros[2].titulo, "Don Quijote de la Mancha");
    strcpy(libros[2].autor, "Miguel de Cervantes");
    libros[2].precio = 12490;
    libros[2].unidades_vendidas = 60;

    int i;
    libro_t mas_vendido = libros[0];

    for (i = 0; i < 3; i++)
    {
        if (libros[i].unidades_vendidas > mas_vendido.unidades_vendidas)
        {
            mas_vendido = libros[i];
        }
    }

    printf("       M%cs vendido\n_____________________________\n", 160);
    printf("T%ctulo: %s\n", 161, mas_vendido.titulo);
    printf("Autor: %s\n", mas_vendido.autor);
    printf("Precio: %.2f\n", mas_vendido.precio);
    printf("Unidades vendidas: %i\n", mas_vendido.unidades_vendidas);

    return 0;
}