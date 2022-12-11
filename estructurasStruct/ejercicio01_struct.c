/* Ejercicio 01

Construir un programa que permita ingresar los datos personales de un trabajador y posteriormente mostrarlos por pantalla.
*/

#include <stdio.h>

#define MAX 3 // Se define MAX para el tamaño máximo de los vectores

typedef struct // Se define la estructura fecha_t
{
    int dia;  // Se declara una variable para almacenar el día
    int mes;  // Se declara una variable para almacenar el mes
    int anho; // Se declara una variable para almacenar el año
} fecha_t;    // Se define 'struct' como 'fecha_t'

struct persona_t // Se define la estructura persona_t
{
    int rut;                  // Se declara una variable para almacenar el RUT
    int rut_verificador;      // Se declara una variable para almacenar el digito verificador del RUT
    fecha_t fecha_nacimiento; // Se declara una variable para almacenar la fecha de nacimiento
    char nombre[30];          // Se declara una variable para almacenar el nombre
    char apellido_p[30];      // Se declara una variable para almacenar el apellido paterno
    char apellido_m[30];      // Se declara una variable para almacenar el apellido materno
};

void mostrarTrabajadores(struct persona_t trabajador[], int); // Firma de la función 'mostrarTraajadores'

int main(int argc, char const *argv[])
{
    struct persona_t trabajador[MAX]; // Se declara el vector 'trabajador' del tipo de persona_t y tamaño MAX

    printf("--Ingreso de trabajadores--\n");

    int i; // Se declara un iterador

    for (i = 0; i < MAX; i++) // Condición Inicial: i = 0; Condición Final: i < MAX; Incremento: +1
    {
        printf("\nTrabajador %i\n", i + 1);                                 // Trabajador i
        printf("\n");                                                       // Salto de línea
        printf("RUT: ");                                                    // Se solicita al usuario ingresar el RUT del trabajador
        fflush(stdin);                                                      // Se limpia el búfer de entrada para evitar errores en el escaneo de los datos
        scanf("%i-%i", &trabajador[i].rut, &trabajador[i].rut_verificador); // Se recibe el RUT ingresado por el usuario
        printf("Nombre: ");                                                 // Se solicita al usuario ingresar el nombre del trabajador
        fflush(stdin);                                                      // Se limpia el búfer de entrada para evitar errores en el escaneo de los datos
        scanf("%s", trabajador[i].nombre);                                  // Se recibe el nombre ingresado por el usuario
        printf("Apellido paterno: ");                                       // Se solicita al usuario ingresar el apellido paterno del trabajador
        fflush(stdin);                                                      // Se limpia el búfer de entrada para evitar errores en el escaneo de los datos
        scanf("%s", trabajador[i].apellido_p);                              // Se recibe el apellido paterno ingresado por el usuario
        printf("Apellido materno: ");                                       // Se solicita al usuario ingresar el apellido materno del trabajador
        fflush(stdin);                                                      // Se limpia el búfer de entrada para evitar errores en el escaneo de los datos
        scanf("%s", trabajador[i].apellido_m);                              // Se recibe el apellido materno ingresado por el usuario
        printf("Ingrese fecha de nacimiento (dd/mm/aaaa): ");               // Se solicita al usuario ingresar la fecha de nacimiento del trabajador
        scanf("%i/%i/%i", &trabajador[i].fecha_nacimiento.dia,
              &trabajador[i].fecha_nacimiento.mes,
              &trabajador[i].fecha_nacimiento.anho); // Se recibe la fecha de nacimiento ingresada por el usuario
    }

    mostrarTrabajadores(trabajador, MAX); // Se imprime por pantalla la información del trabajador ingresada anteriormente

    return 0;
}

void mostrarTrabajadores(struct persona_t trabajador[], int longitud) // Función que permite imprimir por pantalla el trabajador ingresado
{
    int i; // Se declara un iterador

    for (i = 0; i < longitud; i++) // Condición Inicial: i = 0; Condición Final: i < longitud; Incremento: +1
    {
        printf("\n");                                                             // Salto de línea
        printf("\nTrabajador %i\n", i + 1);                                       // Trabajador i
        printf("\n");                                                             // Salto de línea
        printf("RUT: %i-%i\n", trabajador[i].rut, trabajador[i].rut_verificador); // Se imprime el RUT del trabajador i
        printf("Nombre: %s %s %s\n", trabajador[i].nombre,
               trabajador[i].apellido_p,
               trabajador[i].apellido_m); // Se imprime el nombre, apellido paterno y apellido materno del trabajador i
        printf("Fecha de nacimiento: %i/%i/%i", trabajador[i].fecha_nacimiento.dia,
               trabajador[i].fecha_nacimiento.mes,
               trabajador[i].fecha_nacimiento.anho); // Se imprime la fecha de nacimiento del trabajador i
    }
}