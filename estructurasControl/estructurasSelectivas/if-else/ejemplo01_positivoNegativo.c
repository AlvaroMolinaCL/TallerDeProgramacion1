/*
Ejemplo 01: Saber si un número es positivo o negativo

Compilar con gcc ejemplo01_positivoNegativo.c -o ejemplo01_positivoNegativo.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0; // Se declara la variable numero de tipo entero (int), y se inicializa con el valor 0

    printf("Ingrese un numero: "); // Se solicita por pantalla al usuario que ingrese un número
    scanf("%i", &numero);          // Se recibe el número ingresado por el usuario

    if (numero >= 0) // Si el número es mayor o igual a 0
    {
        printf("El n%cmero es positivo.\n", 163); // Se imprime al usuario que el número es positivo
    }
    else // En caso contrario a lo indicado en la línea 16
    {
        printf("El n%cmero es negativo.\n", 163); // Se imprime al usuario que el número es negativo
    }
    
    return 0;
}
