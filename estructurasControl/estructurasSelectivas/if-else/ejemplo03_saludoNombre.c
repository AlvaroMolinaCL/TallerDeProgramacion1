/* Ejemplo 03 */

#include <stdio.h>
/**
 * @brief Realiza un saludo al ingresar un nombre
 *
 * @param argc Cantidad de parámetros
 * @param argv Arreglo de cadenas de carácter
 * @return int Entrega 0 si el programa se ha generado correctamente
 */
int main(int argc, char const *argv[])
{
    printf("argc: %i\n", argc);
    if (argc < 2)
    {
        printf("No ha ingresado un nombre.\n");
    }
    else if (argc == 2)
    {
        printf("Hola, %s\n", argv[1]);
    }
    else
    {
        printf("Error: Muchos argumentos de entrada, ingrese solo el nombre.\n");
    }

    return 0;
}
