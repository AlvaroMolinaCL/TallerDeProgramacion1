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
    char string1[MAX], string2[MAX], string3[MAX], stringFinal[MAX];

    printf("Ingrese el texto de la cadena 1: ");
    fgets(string1, MAX, stdin);

    fflush(stdin);

    printf("Ingrese el texto de la cadena 2: ");
    fgets(string2, MAX, stdin);

    fflush(stdin);

    printf("Ingrese el texto de la cadena 3: ");
    fgets(string3, MAX, stdin);

    strcpy(stringFinal, string1);
    strtok(stringFinal, "\n"); // Se elimina salto de linea
    strcat(stringFinal, " ");
    strcat(stringFinal, string2);
    strtok(stringFinal, "\n"); // Se elimina salto de linea
    strcat(stringFinal, " ");
    strcat(stringFinal, string3);

    printf("%s", stringFinal);

    return 0;
}
