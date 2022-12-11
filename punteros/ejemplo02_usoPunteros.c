/*
Ejemplo 02: Uso de punteros

Compilar con gcc ejemplo02_usoPunteros.c -o ejemplo02_usoPunteros.exe
*/

int main(int argc, char const *argv[])
{
    int v;      // Se declara una variable 'v' de tipo entero (int)
    int *p, *q; // Se declaran dos punteros 'p' y 'q'
    v = 44;     // Se asigna el valor 44 a la variable 'v'
    p = &v;     // Se asigna a 'p' la dirección de memoria de 'v' ('p' apunta a 'v')
    q = p;      // Se asigna 'p' a 'q' ('q' apunta a donde apunte 'p')
    return 0;
}