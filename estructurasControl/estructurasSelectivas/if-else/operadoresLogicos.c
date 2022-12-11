/* Operadores Lógicos en C */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char const *argv[])
{
    int var = 1;

    if (var)
    {
        printf("Es verdadero\n");
    }
    else
    {
        printf("Es falso\n");
    }

    // Ejemplo AND &&
    int x = 5, y = -20;

    if ((x > 0) && (y < 0))
    {
        printf("Es verdadero\n");
    }
    else
    {
        printf("Es falso\n");
    }

    // Ejemplo OR ||
    // int x=-10,y=-20;
    x = -5;
    y = -14;

    if ((x > 0) || (y < 0))
    {
        printf("Es verdadero\n");
    }
    else
    {
        printf("Es falso\n");
    }

    // Ejemplo NOT !
    x = 20;
    if (!(x > 0))
    {
        printf("Es verdadero\n");
    }
    else
    {
        printf("Es falso\n");
    }

    return 0;
}
