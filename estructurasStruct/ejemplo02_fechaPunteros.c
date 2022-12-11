/*
Ejemplo 02: Estructura para fecha, una de forma normal y otra con punteros

Compilar con gcc ejemplo01_miRectangulo.c -o ejemplo01_miRectangulo.exe
*/

#include <stdio.h>

struct fecha_t // Definición de la estructura
{
    int dia;  // Se declara una variable para almacenar el día
    int mes;  // Se declara una variable para almacenar el mes
    int anho; // Se declara una variable para almacenar el año
};

int main(int argc, char const *argv[])
{
    /* Estructura normal */
    struct fecha_t fechaNacimiento; // Se declara la variable 'fechaNacimiento' del tipo de fecha_t

    fechaNacimiento.dia = 23;    // Se asigna el valor 23 al miembro día de 'fechaNacimiento'
    fechaNacimiento.mes = 11;    // Se asigna el valor 11 al miembro mes de 'fechaNacimiento'
    fechaNacimiento.anho = 2000; // Se asigna el valor 2000 al miembro anho de 'fechaNacimiento'

    printf("Fecha Normal: %i/%i/%i\n", fechaNacimiento.dia, fechaNacimiento.mes, fechaNacimiento.anho); // Se imprime por pantalla 'fechaNacimiento'

    /* Estructura con punteros */
    struct fecha_t *pFecha; // Se crea un puntero 'pFecha' del tipo de fecha_t

    pFecha = &fechaNacimiento; // Se asigna a 'pFecha' la dirección de memoria de 'fechaNacimiento'
    (*pFecha).dia = 12;        // Se asigna el valor 12 al miembro dia del contenido apuntado por 'pFecha'
    pFecha->mes = 10;          // Se asigna el valor 10 al miembro mes del contenido apuntado por 'pFecha'
    pFecha->anho = 1999;       // Se asigna el valor 1999 al miembro anho del contenido apuntado por 'pFecha'

    printf("Fecha con Punteros: %i/%i/%i", fechaNacimiento.dia, fechaNacimiento.mes, fechaNacimiento.anho); // Se imprime por pantalla 'fechaNacimiento'

    return 0;
}