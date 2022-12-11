/*
Ejercicio 01

Escriba un programa que, dadas 5 notas y el porcentaje de asistencia,
determine si un estudiante aprueba o reprueba un curso.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1, n2, n3, n4, n5, prom_final;
    int asistencia;

    printf("Ingrese las 5 notas:\n");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    prom_final = (n1 + n2 + n3 + n4 + n5) / 5;

    printf("\nPromedio final: %.2f\n", prom_final);

    printf("Ingrese el porcentaje de asistencia: ");
    scanf("%d", &asistencia);

    if (prom_final >= 4.0 && asistencia >= 60)
    {
        printf("\nEl estudiante está aprobado\n");
    }
    else
    {
        printf("\nEl estudiante está reprobado\n");
    }

    return 0;
}
