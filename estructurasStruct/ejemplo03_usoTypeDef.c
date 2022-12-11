/*
Ejemplo 03: Uso de Typedef

Compilar con gcc ejemplo03_usoTypeDef.c -o ejemplo03_usoTypeDef.exe
*/

typedef float real;         // Se define el tipo punto flotante (float) como 'real'
typedef unsigned int index; // Se define el tipo entero sin signo (unsigned int) como 'index'

int main(int argc, char const *argv[])
{
    real x[100]; // Se declara el vector 'x' de tipo punto flotante (definido como 'real') con tamaño 100
    real y;      // Se declara la variable 'y' de tipo punto flotante (definido como 'real')
    real p;      // Se declara la variable 'p' de tipo punto flotante (definido como 'real')
    index i;     // Se declara la variable 'i' de tipo entero sin signo (definido como 'index')

    for (i = 0; i < 100; i++) // Condición Inicial: i = 0; Condición Final: i < 100; Incremento: +1)
    {
        x[i] = i; // Se llena el vector con números desde el 0 al 99
    }

    return 0;
}
