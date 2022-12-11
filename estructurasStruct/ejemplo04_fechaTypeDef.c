/*
Ejemplo 04: Estructura para fecha, la misma del ejemplo 02, pero ahora con typedef

Compilar con gcc ejemplo04_fechaTypeDef.c -o ejemplo04_fechaTypeDef.exe
*/

#include <stdio.h>

typedef struct // Definición de la estructura
{
    int dia;  // Se declara una variable para almacenar el día
    int mes;  // Se declara una variable para almacenar el mes
    int anho; // Se declara una variable para almacenar el año
} fecha_t;    // Se define 'struct' como 'fecha_t'

int main(int argc, char const *argv[])
{
    fecha_t fechaNacimiento; // Se declara la variable 'fechaNacimiento' del tipo de fecha_t (con typedef nos podemos ahorrar el colocar 'struct')

    fechaNacimiento.dia = 23;    // Se asigna el valor 23 al miembro día de 'fechaNacimiento'
    fechaNacimiento.mes = 11;    // Se asigna el valor 11 al miembro mes de 'fechaNacimiento'
    fechaNacimiento.anho = 2000; // Se asigna el valor 2000 al miembro anho de 'fechaNacimiento'

    printf("Fecha Normal: %i/%i/%i\n", fechaNacimiento.dia, fechaNacimiento.mes, fechaNacimiento.anho); // Se imprime por pantalla 'fechaNacimiento'

    fecha_t *pFecha;           // Se crea un puntero 'pFecha' del tipo de fecha_t (con typedef nos podemos ahorrar el colocar 'struct')
    pFecha = &fechaNacimiento; // Se asigna a 'pFecha' la dirección de memoria de 'fechaNacimiento'
    (*pFecha).dia = 12;        // Se asigna el valor 12 al miembro dia del contenido apuntado por 'pFecha'
    pFecha->mes = 10;          // Se asigna el valor 10 al miembro mes del contenido apuntado por 'pFecha'
    pFecha->anho = 1999;       // Se asigna el valor 1999 al miembro anho del contenido apuntado por 'pFecha'

    printf("Fecha con Punteros: %i/%i/%i", fechaNacimiento.dia, fechaNacimiento.mes, fechaNacimiento.anho); // Se imprime por pantalla 'fechaNacimiento'

    return 0;
}