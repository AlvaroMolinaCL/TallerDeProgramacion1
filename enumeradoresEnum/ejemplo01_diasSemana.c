/*
Ejemplo 01: Enumerar los días de la semana

Compilar con gcc ejemplo01_diasSemana.c -o ejemplo01_diasSemana.exe
*/

#include <stdio.h>

enum DIAS_SEMANA // Se crea un enumerador para todos los días de la semana
{
    LUNES,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
}; // Si no se asignan valores numéricos a los elementos del enumerador, por defecto parten de 0

int main(int argc, char const *argv[])
{
    enum DIAS_SEMANA hoy = JUEVES; // Se declara la variable 'hoy' del tipo de DIAS_SEMANA con valor JUEVES

    // printf("Hoy es %i\n", hoy);
    hoy = hoy + 1; // Se suma 1 a hoy, desplazando el día de la semana a VIERNES

    switch (hoy) // Con switch, se comprueba cuál de todos los casos se cumple
    {
    case LUNES: // No se cumple este caso, por lo que salta al siguiente
        printf("Hoy es Lunes\n");
        break;
    case MARTES: // No se cumple este caso, por lo que salta al siguiente
        printf("Hoy es Martes\n");
        break;
    case MIERCOLES: // No se cumple este caso, por lo que salta al siguiente
        printf("Hoy es Miercoles\n");
        break;
    case JUEVES: // No se cumple este caso, por lo que salta al siguiente
        printf("Hoy es Jueves\n");
        break;
    case VIERNES:                   // Este caso se cumple, por lo que se entra al mismo
        printf("Hoy es Viernes\n"); // Se imprime por pantalla que hoy es Viernes
        break;
    case SABADO: // Ya no es necesario verificar este caso
        printf("Hoy es Sabado\n");
        break;
    case DOMINGO: // Ya no es necesario verificar este caso
        printf("Hoy es Domingo\n");
        break;
    default: // Como se cumplió uno de los casos anteriores, no es necesario entrar al caso por defecto
        break;
    }

    return 0;
}
