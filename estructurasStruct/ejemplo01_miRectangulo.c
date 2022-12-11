/*
Ejemplo 01: Alto y ancho de un rectángulo

Compilar con gcc ejemplo01_miRectangulo.c -o ejemplo01_miRectangulo.exe
*/

#include <stdio.h>

struct rectangulo_t // Definición de la estructura
{
    float alto;  // Se declara una variable para almacenar el alto del rectángulo
    float ancho; // Se declara una variable para almacenar el ancho del rectángulo
};

int main(int argc, char const *argv[])
{
    //     <tipo>       <identificador>
    struct rectangulo_t miRectangulo; // Se declara la variable 'miRectangulo' del tipo de rectangulo_t
    miRectangulo.alto = 5.186;        // Se asigna el valor 5.186 al alto de 'miRectangulo'
    miRectangulo.ancho = 4;           // Se asigna el valor 4 al ancho de 'miRectangulo'

    printf("Alto: %.3f\n", miRectangulo.alto);   // Se imprime por pantalla el alto de 'miRectangulo'
    printf("Ancho: %.3f\n", miRectangulo.ancho); // Se imprime por pantalla el ancho de 'miRectangulo'

    return 0;
}