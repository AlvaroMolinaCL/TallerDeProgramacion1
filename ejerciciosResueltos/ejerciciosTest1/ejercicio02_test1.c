/*
Test 1 | Taller de Programación I (IN1045C) | Pregunta 02

El volumen de una esfera está dado por la expresión V = 4/3πr elevado a 3, donde r es el radio de la esfera.
Construya un programa que solicite como par´ametro de entrada el radio. El volumen de la esfera debe
ser mostrado por pantalla.
*/

#include <stdio.h>

#define PI 3.1415

int main(int argc, char const *argv[])
{
    float r, v;

    printf("Para determinar el volumen de una esfera, ingrese el radio a continuacion: ");
    scanf("%f", &r);

    v = 1.3 * PI * r * r * r;

    printf("El volumen de la esfera es %.1f", v);

    return 0;
}
