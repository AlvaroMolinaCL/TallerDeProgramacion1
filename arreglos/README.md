# Arreglos

Aquí se realiza un resumen de los contenidos de arreglos, cadenas y funciones.

## Tipos de arreglos

- Vectores
- Matrices
- Multidimensionales

### Vector

Es un arreglo de una dimensión.

#### Declaración

Ejemplo:

```c
int arreglo[10];
```
Declaración de un arreglo de tamaño 10.

#### Ejemplos de uso

```c
#include <stdio.h>
#define MAX_ARRAY 10

int main (int argc, char const *argv)
{
    // Declaración
    int numeros[] = {3, 6, 7, 1};
    char letras[20] = {'a', 't', 'l', '5'};
    int array[MAX_ARRAY];

    // Se asigna un 67 a la posición 4 (quito elemento del arreglo)
    array[4] = 67;

    // Ejemplo de llenado
    int i;
    for (i = 0; i < MAX_ARRAY; i++)
    {
        array[i] = i;
    }
}
```

### Matriz

Es un arreglo de dos dimensiones.

#### Declaración

```c
char matriz[4][3] =
{
    {5, 6, 3},
    {9, 2, 1},
    {7, 2, 0},
    {-2, -4, 7}
};
```

#### Ejemplos de uso

```c
#include <stdio.h>
#define N 500
#define M 500 

int main (int argc, char const *argv)
{
    int matriz[N][M];

    matriz[3][8] = 45;

    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            matriz[i][j] = i + j;
        }
    }
}
```

### Cadenas

Un tipo especial de arreglo que guarda carácteres.

#### Declaración

```c
char miCadena[30];
char miCadena2[] = "Braulio Quiero";
char *miCadena3 = "Otra cadena";
```

#### Biblioteca

Las cadenas tienen una biblioteca en C que nos permiten trabajar más fácilmente con ellas.

Esta biblioteca se llama `string.h`.

Para más información vea la página [aquí](https://www.cplusplus.com/reference/cstring/).

#### Ejemplos de uso

```c
#include <stdio.h>
#include <string.h> // strcpy, strlen, strcmp

int main (int argc, char const *argv)
{
    char myString1[] = "Braulio";
    char myString2[15];
    char myString3[30];
    strcpy(myString2, "Casa");

    printf("%s\n", myString2);
    printf("Ingrese una cadena: ");
    scanf("%s", myString3);
}
```

## Funciones

### Funciones con variables como parámetros de entrada

```c
int funcion (int x, float y, char c)
{
    if (x >= 0)
    {
        x = 45; // Los cambios no se ven reflejados en el programa principal
        return 0;
    }

    if (y <= 0)
    {
        return 1;
    }

    if ((6 >= c) && (c <= 90))
    {
        return 2;
    }
    return 3;
}
```

### Funciones con arreglo como parámetros de entrada

```c
int funcion (int array[][10], int length)
{
    for (i = 0; i < length; i++)
    {
        array[i] = i + 1; // Se cambia en el programa principal
    }
}
```