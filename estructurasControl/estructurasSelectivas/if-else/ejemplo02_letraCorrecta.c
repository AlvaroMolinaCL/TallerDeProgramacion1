/*
Ejemplo 02: Saber si la letra ingresada es correcta o no

Compilar con gcc ejemplo02_letraCorrecta.c -o ejemplo02_letraCorrecta.exe
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char letra; // Se declara la variable letra de tipo caracter (char)

    printf("Ingrese la letra b: "); // Se solicita al usuario ingresar la letra b
    scanf("%c", &letra);            // Se recibe la letra ingresada por el usuario

    if (letra == 'b') // Si la letra ingresada efectivamente es la b
    {
        printf("La letra ingresada es correcta.\n"); // Se imprime al usuario por pantalla que la letra es correcta
    }
    else
    {
        printf("La letra ingresada es incorrecta.\n"); // Se imprime al usuario por pantalla que la letra es incorrecta
    }
    
    return 0;
}