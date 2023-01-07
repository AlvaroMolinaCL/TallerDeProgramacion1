/*
Test 3 | Taller de Programación I (IN1045C) | Pregunta 02

Construya una función que cálcule el área de un trapecio dada la base menor, base mayor y base altura.
*/

double area_trapecio(double b_1, double b_2, double h)
{
    double area;
    area = ((b_1 + b_2) / 2.0) * h;
    return area;
}

int main(int argc, char const *argv[])
{
    double a, b, c, resultado;

    printf("Ingrese base menor: ");
    scanf("%f", &a);
    printf("Ingrese base mayor: ");
    scanf("%f", &b);
    printf("Ingrese base altura: ");
    scanf("%f", &c);
    resultado = area_trapecio(a, b, c);
    printf("El area es %f", resultado);

    return 0;
}
