/*
Certamen 2 | Taller de Programación I (IN1045C) | Pregunta 02

Construya un programa que, dado el ingreso de un número n por teclado:
1. Construya 2 arreglos de tamaño n con datos aleatorios (usted elija el rango de los números aleatorios).
2. Sume ambos arreglos, el resultado debe ser guardado en un nuevo vector.
3. Muestre el arreglo resultante por pantalla.

Nota: El vector suma C = A + B es un vector donde cada elemento c<sub>i = a<sub>i + b<sub>i
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenarVectores(int, int[]);              // Firma de la función 'llenarVectores'
void imprimirVectores(int, int[]);            // Firma de la función 'imprimirVectores'
void sumarVectores(int, int[], int[], int[]); // Firma de la función 'sumarVectores'

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int n;

    printf("Ingrese el tama%co que desea tener en los dos arreglos que se van a sumar (en n%cmeros enteros): ", 164, 163);
    scanf("%i", &n);

    int array1[n], array2[n], result[n]; // Se definen los vectores que se van a sumar, y el resultado de la suma con el tamaño n definido por el usuario

    printf("El vector 1 fue definido con los siguientes %i n%cmeros aleatorios: \n\n", n, 163);
    llenarVectores(n, array1);   // Se llena el vector 1 con n números aleatorios definidos por el usuario
    imprimirVectores(n, array1); // Se imprimen por pantalla los n números aleatorios que se definieron para el vector 1

    printf("\n\nEl vector 2 fue definido con los siguientes %i n%cmeros aleatorios: \n\n", n, 163);
    llenarVectores(n, array2);   // Se llena el vector 2 con n números aleatorios definidos por el usuario
    imprimirVectores(n, array2); // Se imprimen por pantalla los n números aleatorios que se definieron para el vector 2

    printf("\n\nEl resultado de la suma de ambos vectores mostrados anteriormente es: \n\n");
    sumarVectores(n, array1, array2, result); // Se suman los dos vectores con n números aleatorios definidos por el usuario
    imprimirVectores(n, result);              // Se imprime por pantalla el resultado de la suma de ambos vectores

    return 0;
}

void llenarVectores(int n, int array[]) // Función que llena los vectores con la cantidad de n números aleatorios definidos por el usuario
{
    int i;
    for (i = 0; i < n; i++)
    {
        array[i] = rand() % n;
    }
}

void imprimirVectores(int n, int array[]) // Función que imprime el vector solicitado
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%i\t", array[i]);
    }
}

void sumarVectores(int n, int array1[], int array2[], int result[]) // Función que realiza la suma de los vectores
{
    int i;
    for (i = 0; i < n; i++)
    {
        result[i] = array1[i] + array2[i];
    }
}