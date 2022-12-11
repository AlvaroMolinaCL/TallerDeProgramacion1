/*
Ejercicio 01

Presentar un menu que dé a elegir entre 4 figuras geométricas, para luego imprimir en pantalla el
área de la figura elegida a partir de sus respectivas variables (cuyos valores deben ser dados por
el usuario). Puede guiarse por el siguiente menú de ejemplo:

Elija una figura

1.- Triangulo
2.- Rectangulo
3.- Circulo
4.- Trapecio

Opcion:
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opcion;
    float a, b, c, area;

    printf("\tElija una figura:\n\n");

    printf("1.- Triangulo\n");
    printf("2.- Rectangulo\n");
    printf("3.- Circulo\n");
    printf("4.- Trapecio\n\n");

    printf("Opcion: ");

    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1:

        printf("Eligió el triangulo (Introduzca valores mayores que cero)\n");

        printf("Ingrese la base: ");
        scanf("%f", &a);

        printf("Ingrese la altura: ");
        scanf("%f", &b);

        area = (a * b) / 2;

        printf("\nEl area del triangulo es: %.2f\n", area);

        break;

    case 2:

        printf("Eligió el rectangulo (Introduzca valores mayores que cero)\n");

        printf("Ingrese el lado 1: ");
        scanf("%f", &a);

        printf("Ingrese el lado 2: ");
        scanf("%f", &b);

        area = a * b;

        printf("\nEl area del rectangulo es: %.2f\n", area);

        break;

    default:

        printf("Se ha ingresado una opción no valida.\n");

        break;
    }

    return 0;
}
