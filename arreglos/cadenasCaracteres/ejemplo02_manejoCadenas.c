/*
Ejemplo 02 - Manejo de cadenas de carácteres
*/

#include <stdio.h>
#include <string.h>

#define MAX 4
#define MAX_STRING 30

int main(int argc, char const *argv[])
{
    char array[MAX][MAX_STRING]; //[Cantidad de cadenas][Tamaño de la cadena]

    int i;

    for (i = 0; i < MAX; i++) // Se guardan las cadenas en el arreglo
    {
        printf("Ingrese una cadena: ");
        // scanf("%s", array[i]); --> Sin espacios
        // fgets(array[i], MAX_STRING, stdin); --> Con espacios
        gets(array[i]); // Con espacios y sin enter (lanza warning)
        fflush(stdin);
    }
    for (i = 0; i < MAX; i++) // Se muestran las cadenas por pantalla
    {
        printf("%s\n", array[i]);
    }

    return 0;
}
