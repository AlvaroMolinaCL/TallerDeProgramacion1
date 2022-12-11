/*
Certamen 2 | Taller de Programación I (IN1045C) | Pregunta 04

Dada la siguiente firma:

float sueldo_liquido(float sueldo_bruto, float porcentaje_afp, float porcentaje_salud);

Construya una función que retorne el sueldo líquido del trabajador igual al sueldo bruto menos los descuentos.

Ejemplo:

Entrada:

- sueldo_bruto = 100000

- porcentaje_afp = 0.1

- porcentaje_salud = 0.15

Salida:

75000

Nota: La salida es el resultado de 100000 - (100000 ⋅ 0.1 + 100000 ⋅ 0.15) = 75000
*/

float sueldo_liquido(float sueldo_bruto, float porcentaje_afp, float porcentaje_salud)
{
    sueldo_bruto = 100000;
    porcentaje_afp = 0.1;
    porcentaje_salud = 0.15;
    return sueldo_bruto - (sueldo_bruto * porcentaje_afp + sueldo_bruto * porcentaje_salud);
}