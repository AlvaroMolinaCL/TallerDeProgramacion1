/*
Ejercicio 11 - Laboratorio

Imprima N veces "Hola Mundo", luego, haga la pregunta "Desea
cerrar el programa?" hasta que el usuario pulse "S" en el mismo
ciclo.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int veces, i = 0;
    char respuesta;

    printf("Cuantas veces desea imprimir Hola Mundo?: ");
    scanf("%i", &veces);

    printf("\n");
    while (i < veces)
    {
        fflush(stdin);
        printf("%i) Hola Mundo\n", i + 1);

        while (i == veces - 1 && respuesta != 'S')
        {
            fflush(stdin);
            printf("\nDesea cerrar el programa?: ");
            scanf("%c", &respuesta);
        }

        i++; // i = i + 1
    }

    return 0;
}