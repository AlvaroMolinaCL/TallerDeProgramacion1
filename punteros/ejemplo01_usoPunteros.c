/*
Ejemplo 01: Uso de punteros

Compilar con gcc ejemplo01_usoPunteros.c -o ejemplo01_usoPunteros.exe
*/

int main(int argc, char const *argv[])
{
    int v;  // Se declara una variable 'v' de tipo entero (int)
    int *p; // Se declara una variable de tipo puntero a entero
    v = 44; // Se asigna el valor 44 a la variable 'v'
    p = &v; // Se asigna a 'p' la dirección de memoria de 'v' ('p' apunta a 'v')
    return 0;
}