/*
Ejercicio 02 - Funciones

Construya una función que permita calcular el área y el perímetro de un círculo. Construya una estructura para
guardar la salida.

// P = 2 * pi * r
// A = pi * r^2

// Entrada: radio, pi
// Salida: area, perimetro
*/

#define PI 3.1415

struct resultado_t
{
    double area;
    double perimetro;
};

struct resultado_t ap_circulo(double radio)
{
    struct resultado_t resultado;
    resultado.area = PI * radio * radio;
    resultado.perimetro = 2 * PI * radio;
    return resultado;
}

// Con typedef
/*
typedef struct
{
    double area;
    double perimetro;
}resultado_t;

resultado_t ap_circulo (double radio)
{
    struct resultado_t resultado;
    resultado.area = PI * radio * radio;
    resultado.perimetro = 2 * PI * radio;
    return resultado;
}
*/