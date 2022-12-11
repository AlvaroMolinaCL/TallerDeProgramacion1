/*
Ejercicio 01

Pida dos números a y b al usuario, luego pregunte cuánto vale su
suma, repitiendo la pregunta hasta que el usuario responda correctamente.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num_a, num_b, resultado, respuesta;

    printf("Ingrese dos numeros a y b: \n");
    scanf("%i %i", &num_a, &num_b);

    resultado = num_a + num_b;

    while (respuesta != resultado)
    {
        printf("Cual es el valor de %i + %i?: ", num_a, num_b);
        fflush(stdin);
        scanf("%i", &respuesta);
    }

    return 0;
}