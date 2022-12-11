/*
Ejemplo 05: Ingresar una letra para salir del ciclo do-while

Compilar con gcc ejemplo05_salirDoWhile.c -o ejemplo05_salirDoWhile.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char letra = 'n'; // Se declara una variable 'letra' de tipo carácter (char) con valor 'n'

    do // Hacer... (sigue en la línea 17)
    {
        printf("Ingrese una s para salir: "); // Se solicita al usuario que ingrese una 's' para salir del ciclo do-while
        fflush(stdin);                        // Se limpia el búfer de entrada ya que si se repite el ciclo, pueden almacenarse carácteres indeseados (como espacios o saltos de línea)
        scanf(" %c", &letra);                 // Se recibe la letra ingresada por el usuario
    } while (letra != 's');                   // Mientras 'letra' sea distinto de 's'

    return 0;
}