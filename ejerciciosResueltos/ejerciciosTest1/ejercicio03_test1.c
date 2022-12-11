/*
Test 1 | Taller de Programación I (IN1045C) | Pregunta 03

Identificar errores detectados en el código.
*/

#include <stdio.h>
int main()
{                                                     // No se indica el argumento "int argc, char const *argv[]", pero no afecta la ejecución del código
    int numero;                                       // Estas variables no se utilizan, pero no afectan la ejecución del código
    int numero2 = 9;                                  // Mismo comentario de la línea 11
    float miNumero;                                   // No hay error en esta línea de código
    printf("Hola Mundo \n");                          // No se indica por pantalla que el usuario ingrese un número
    scanf("%f", miNumero);                            // Falta el ampersand (&)
    printf("Se ingreso el numero %.2f\n", &miNumero); // Aquí no va el ampersand (&)
    return 0;
}