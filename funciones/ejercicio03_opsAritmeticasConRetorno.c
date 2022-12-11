/*
Ejercicio 03 - Funciones con retorno

Crear funciones que permitan realizar operaciones aritméticas de suma, resta, multiplicación y división, dados dos números flotantes ingresados por el usuario.
*/

#include <stdio.h>

float suma(float, float);
float resta(float, float);
float multiplicacion(float, float);
float division(float, float);

int main(int argc, char const *argv[])
{
    float num1, num2;

    printf("Digite dos numeros: \n");
    scanf("%f %f", &num1, &num2);

    printf("Suma: %.2f\n", suma(num1, num2));
    printf("Resta: %.2f\n", resta(num1, num2));
    printf("Multiplicacion: %.2f\n", multiplicacion(num1, num2));
    printf("Division: %.2f\n", division(num1, num2));

    return 0;
}

float suma(float num1, float num2)
{
    return num1 + num2;
}

float resta(float num1, float num2)
{
    return num1 - num2;
}

float multiplicacion(float num1, float num2)
{
    return num1 * num2;
}

float division(float num1, float num2)
{
    return num1 / num2;
}