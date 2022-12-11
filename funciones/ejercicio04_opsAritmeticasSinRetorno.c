/*
Ejercicio 04 - Funciones con retorno

Crear funciones que permitan realizar operaciones aritméticas de suma, resta, multiplicación y división, dados dos números flotantes ingresados por el usuario.
*/

#include <stdio.h>

void suma(float, float);
void resta(float, float);
void multiplicacion(float, float);
void division(float, float);

int main(int argc, char const *argv[])
{
    float num1, num2;

    printf("Digite dos numeros: \n");
    scanf("%f %f", &num1, &num2);

    return 0;
}

void suma(float num1, float num2)
{
    printf("Suma: %.2f\n", num1 + num2);
}
void resta(float num1, float num2)
{
    printf("Resta: %.2f\n", num1 - num2);
}
void multiplicacion(float num1, float num2)
{
    printf("Multiplicacion: %.2f\n", num1 * num2);
}
void division(float num1, float num2)
{
    printf("Division: %.2f\n", num1 / num2);
}