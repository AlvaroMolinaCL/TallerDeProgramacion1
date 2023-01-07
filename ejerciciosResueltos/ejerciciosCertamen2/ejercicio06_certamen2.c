/*
Certamen 2 | Taller de Programación I (IN1045C) | Pregunta 06

Una tienda de música necesita un programa capaz de guardar los datos de los instrumentos que ofrecen al público.
Usted tiene la tarea de crear un prototipo inicial de dicha aplicación que debe tener:

1. Estructura para guardar los instrumentos
2. Construir una variable de dicha estructura y guardar datos de ejemplo en ella (ingreso directo o por teclado).

La estructura deberá manejar los siguientes datos:

Identificador del instrumento (número entero).
Nombre del instrumento (cadena de caracteres).
tipo del instrumento (enumerador. Use  0: cuerda, 1: viento, 2: digital)

Nota: Si no realiza el programa mediante struct, el puntaje no se contabilizará.
*/

#include <stdio.h>
#include <string.h>

#define MAX 20

typedef enum
{
    cuerda,
    viento,
    digital
} tipoInstrumento_t;

typedef struct
{
    int idInstrumento;
    char nombreInstrumento[MAX];
    tipoInstrumento_t tipoInstrumento;
} instrumento_t;

instrumento_t instrumento;

int main(int argc, char const *argv[])
{
    int cantidadInstrumentos;

    printf("Ingrese la cantidad de instrumentos a registrar: ");
    scanf("%i", &cantidadInstrumentos);

    int i;
    for (i = 0; i < cantidadInstrumentos; i++)
    {
        printf("\n\nInstrumento ID %c%i\n\n", 35, i + 1);
        fflush(stdin);
        printf("Nombre del instrumento: ");
        fgets(instrumento.nombreInstrumento, MAX, stdin);
        fflush(stdin);
        printf("\nIndique el tipo de instrumento. Digite el n%cmero de la opci%cn correspondiente: \n\n", 163, 162);
        printf("0) Cuerda.\n");
        printf("1) Viento.\n");
        printf("2) Digital.\n\n");
        printf(">> ");
        scanf("%i", &instrumento.tipoInstrumento);
        printf("\nEl instrumento ID %c%i ha sido registrado exitosamente", 35, i + 1);
    }

    return 0;
}
