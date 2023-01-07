/*
Certamen 2 | Taller de Programación I (IN1045C) | Pregunta 03

Usando las funciones disponibles en la biblioteca <string.h>, construya un programa que solicite 3 cadenas por teclado y
las una en una sola cadena, separando sus elementos por un espacio. Muestre la cadena resultante por pantalla.

Ejemplo: Si sus cadenas de entrada son: "Las" "ovejas" "blancas". La cadena resultante deberá ser: "Las ovejas blancas"
*/

#include <stdio.h>
#include <string.h>

#define MAX 50

int main(int argc, char const *argv[])
{
    char cadena1[MAX], cadena2[MAX], cadena3[MAX], cadenaFinal[MAX];

    printf("Ingrese el texto de la cadena 1: ");
    fgets(cadena1, MAX, stdin);

    fflush(stdin);

    printf("Ingrese el texto de la cadena 2: ");
    fgets(cadena2, MAX, stdin);

    fflush(stdin);

    printf("Ingrese el texto de la cadena 3: ");
    fgets(cadena3, MAX, stdin);

    strcpy(cadenaFinal, cadena1);
    strtok(cadenaFinal, "\n"); // Se elimina salto de linea
    strcat(cadenaFinal, " ");
    strcat(cadenaFinal, cadena2);
    strtok(cadenaFinal, "\n"); // Se elimina salto de linea
    strcat(cadenaFinal, " ");
    strcat(cadenaFinal, cadena3);

    printf("%s", cadenaFinal);

    return 0;
}
