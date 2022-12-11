/*
Certamen 1 | Taller de Programación I (IN1045C) | Pregunta 04

Se le ha solicitado a usted construir un programa capaz de calcular el sueldo liquido de un trabajador.

Para calcular el sueldo liquido de un trabajador debe conocer su sueldo bruto (en pesos chilenos). Una vez obtenido el
sueldo bruto, se realizan los siguientes descuentos:

- 10% de descuento por AFP.

- 7% de descuento por salud.

- 2% seguros.

El programa debe mostrar por pantalla el sueldo liquido y cada uno de los descuentos en pesos chilenos.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sueldo_bruto, sueldo_liquido;
    float descuento_afp, descuento_salud, descuento_seguros;

    printf("Ingrese su sueldo bruto a continuacion (ingrese solo numeros sin simbolos ni signos de puntuacion): \n");
    scanf("%i", &sueldo_bruto);

    descuento_afp = sueldo_bruto * 0.1;
    descuento_salud = sueldo_bruto * 0.07;
    descuento_seguros = sueldo_bruto * 0.02;

    sueldo_liquido = sueldo_bruto - descuento_afp - descuento_salud - descuento_seguros;

    printf("Su sueldo liquido es $%i y se han realizado los siguientes descuentos detallados a continuacion:\n", sueldo_liquido);
    printf("Descuento por AFP (10%%): $%.0f\n", descuento_afp);
    printf("Descuento por salud (7%%): $%.0f\n", descuento_salud);
    printf("Descuento por seguros (2%%): $%.0f\n", descuento_seguros);

    return 0;
}
