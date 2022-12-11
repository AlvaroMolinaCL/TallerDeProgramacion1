/*
Ejercicio 04 - Laboratorio

Crear funciones que retornen el área y perímetro de un rectángulo y
un círculo, ingrese los valores de los lados/radio desde la función
principal e imprima los resultados por pantalla.
*/

#include <stdio.h>

float rectangleArea(float, float);
float rectanglePerimeter(float, float);
float circleArea(float);
float circlePerimeter(float);

int main(int argc, char const *argv[])
{
    float side1 = 3, side2 = 4;

    printf("Rect%cngulo\n----------------------\n", 160);
    printf("Area: %.2f\n", rectangleArea(side1, side2));
    printf("Per%cmetro: %.2f\n", 161, rectanglePerimeter(side1, side2));

    return 0;
}

float rectangleArea(float side1, float side2)
{
    return side1 * side2;
}
float rectanglePerimeter(float side1, float side2)
{
    return 2 * (side1 + side2);
}
float circleArea(float radius)
{
    return 3.14 * (radius * radius);
}
float circlePerimeter(float radius)
{
    2 * 3.14 * (radius * radius);
}