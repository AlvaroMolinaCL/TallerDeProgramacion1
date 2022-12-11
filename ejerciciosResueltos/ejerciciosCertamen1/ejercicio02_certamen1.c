/*
Certamen 1 | Taller de Programación I (IN1045C) | Pregunta 02

Construya un enumerador que contenga los 4 puntos cardinales (norte, sur, este oeste).

Utilice este enumerador en un programa construido en lenguaje C donde el usuario ingrese el número que representa al
punto cardinal y el programa entregue al usuario por pantalla el mensaje:

"También se le conoce como Boreal" si ingresó norte.

"También se le conoce como Austral" si ingresó sur.

"También se le conoce como Levante" si ingresó este.

"También se le conoce como Poniente" si ingresó oeste.
*/

#include <stdio.h>

enum punto_cardinal
{
    NORTE = 1,
    SUR,
    ESTE,
    OESTE
};

int main(int argc, char const *argv[])
{
    enum punto_cardinal p_cardinal;
    printf("Ingrese un punto cardinal a continuacion:\n");
    printf("1.- Norte\n");
    printf("2.- Sur\n");
    printf("3.- Este\n");
    printf("4.- Oeste\n");
    printf(">> ");
    scanf("%i", &p_cardinal);

    if (p_cardinal == NORTE)
    {
        printf("Tambien se le conoce como Boreal.\n");
    }
    else if (p_cardinal == SUR)
    {
        printf("Tambien se le conoce como Austral.\n");
    }
    else if (p_cardinal == ESTE)
    {
        printf("Tambien se le conoce como Levante.\n");
    }
    else if (p_cardinal == OESTE)
    {
        printf("Tambien se le conoce como Poniente.\n");
    }
    else
    {
        printf("No se ha ingresado un valor valido.\n");
    }

    return 0;
}
