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
    int sueldoBruto, sueldoLiquido;
    float descuentoAFP, descuentoSalud, descuentoSeguros;

    printf("Ingrese su sueldo bruto a continuacion (ingrese solo numeros sin simbolos ni signos de puntuacion): \n");
    scanf("%i", &sueldoBruto);

    descuentoAFP = sueldoBruto * 0.1;
    descuentoSalud = sueldoBruto * 0.07;
    descuentoSeguros = sueldoBruto * 0.02;

    sueldoLiquido = sueldoBruto - descuentoAFP - descuentoSalud - descuentoSeguros;

    printf("Su sueldo liquido es $%i y se han realizado los siguientes descuentos detallados a continuacion:\n", sueldoLiquido);
    printf("Descuento por AFP (10%%): $%.0f\n", descuentoAFP);
    printf("Descuento por salud (7%%): $%.0f\n", descuentoSalud);
    printf("Descuento por seguros (2%%): $%.0f\n", descuentoSeguros);

    return 0;
}
