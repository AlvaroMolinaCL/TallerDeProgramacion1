/*
Ejemplo 07: Ingresar una letra para salir del ciclo While

Compilar con gcc ejemplo07_salirWhile.c -o ejemplo07_salirWhile.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char letra = 'n'; // Se declara una variable 'letra' de tipo carácter (char) con valor 'n'

    while (letra != 's') // Mientras 'letra' tenga un valor distinto de 's'
    {
        printf("Ingrese una s para salir: \n"); // Se solicitará al usuario que ingrese una 's' para salir del ciclo while
        fflush(stdin);                          // Se limpia el búfer de entrada ya que si se repite el ciclo, pueden almacenarse carácteres indeseados (como espacios o saltos de línea)
        scanf(" %c", &letra);                   // Se añade un espacio para que no se lea 2 veces lo ingresado por el usuario, ya que el enter o salto de línea es un carácter
    }

    return 0;
}