/*
Ejercicio 02 - Guía 2

-- No se cuenta con el enunciado de este ejercicio --
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int distancia, estancia;
    float pasaje;

    printf("Ingrese la distancia que se va a recorrer (en km): ");
    scanf("%i", &distancia);
    printf("Ingrese el numero de dias de estancia: ");
    scanf("%i", &estancia);

    if (distancia > 1000 && estancia > 7)
    {
        pasaje = distancia * 35.00 * 0.30;
    }
    else
    {
        pasaje = distancia * 35.00;
    }

    printf("El valor del pasaje es de $%.2f", pasaje);

    return 0;
}
