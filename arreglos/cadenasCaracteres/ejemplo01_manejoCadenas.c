/*
Ejemplo 01: Manejo de datos con cadenas de carácteres

Compilar con gcc ejemplo01_manejoCadenas.c -o ejemplo01_manejoCadenas.exe
*/

#include <stdio.h>  // printf, fgets
#include <string.h> // strlen, strcat, strcpy

int main(int argc, char const *argv[])
{
    int size1, size2;                        // Se declaran variables para almacenar el tamaño de las cadenas
    char miCadena[] = "Una cadena de texto"; // Se llena la cadena 'miCadena'
    char miCadena2[30];                      // Se asigna el tamaño de la cadena 'miCadena2'
    printf("%s\n", miCadena);                // Se imprime 'miCadena'
    printf("Ingrese una cadena: ");          // Se solicita al usuario ingresar una cadena para 'miCadena2'
    fgets(miCadena2, 30, stdin);             // Se recibe en 'miCadena2' lo ingresado por el usuario
    printf("%s\n", miCadena2);               // Se imprime por pantalla el contenido de 'miCadena2'
    size1 = strlen(miCadena);                // Se asigna a 'size1' la longitud de 'miCadena'
    size2 = strlen(miCadena2);               // Se asigna a 'size2' la longitud de 'miCadena2'
    printf("size1 = %i\n", size1);           // Se imprime por pantalla la longitud de 'miCadena'
    printf("size2 = %i\n", size2);           // Se imprime por pantalla la longitud de 'miCadena2'
    char cadena[60];                         // Se declara una nueva 'cadena'
    strcpy(cadena, miCadena);                // Se cpia en 'cadena' el contenido de 'miCadena'
    strcat(cadena, " ");                     // Se concatena 'cadena' con un espacio en blanco
    strcat(cadena, miCadena2);               // Se concatena 'cadena' con 'miCadena2'
    printf("%s\n", cadena);                  // Se imprime por pantalla el contenido de 'cadena'

    return 0;
}
