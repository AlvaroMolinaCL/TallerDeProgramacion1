/*
Ejemplo 02: Enumerador para el sexo de una persona

Compilar con gcc ejemplo02_sexoPersona.c -o ejemplo02_sexoPersona.exe
*/

#include <stdio.h>

enum sexo_t // Se crea un enumerador para los sexos hombre, mujer y no definido
{
    HOMBRE = 1,
    MUJER,
    NO_DEFINIDO
};

int main(int argc, char const *argv[])
{
    enum sexo_t sexo; // Se declara la variable 'sexo' del tipo de sexo_t

    printf("Ingrese el sexo: \n");                                // Se solicita al usuario ingresar el sexo
    printf("1 para hombre, 2 para mujer, 3 para no indicado \n"); // Se despliegan las opciones, donde el usuario debe ingresar el número según corresponda
    scanf("%i", &sexo);                                           // Se recibe por pantalla el número ingresado

    if (sexo == HOMBRE) // Si el número ingresado corresponde al sexo hombre
    {
        printf("Hombre\n"); // Se imprime por pantalla 'Hombre'
    }
    else if (sexo == MUJER) // Sino, si el número ingresado corresponde al sexo hombre
    {
        printf("Mujer\n"); // Se imprime por pantalla 'Mujer'
    }
    else // En caso contrario, si se ingresó el número 3 o cualquier otro número distinto de 1 y 2
    {
        printf("No definido\n"); // Se imprime por pantalla 'No definido'
    }

    return 0;
}
