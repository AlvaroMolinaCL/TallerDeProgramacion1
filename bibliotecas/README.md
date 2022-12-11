# Biblitecas

## Descripción

Este es un ejemplo de uso de bibliotecas en C, para utilizar el ejemplo necesita los archivos:

- `main.c` (Programa principal)
- `myMath.h` (Archivo de definiciones)
- `myMath.c` (Archivo de funciones)

## Compilación

### Con archivo fuente

Para compilar utilice el siguiete comando:

`gcc main.c myMath.c -o programa.exe`

Nota: Aunque el archivo `myMath.h` no se muestra en la compilación deberá estar en la ruta indicada en `main.c` al momento de compilar.

### Con archivo binario

1. Primero deberá generar el archivo objeto para su biblioteca:

`gcc -c myMath.c`

2. Se genera el archivo binario, asegúrese de anteponer el prefijo `lib` al nombre y la extensión `.a`:

`ar rcs libmyMath.a myMath.o`

3. Compile con el siguiente comando:

`gcc main.c -lmyMath -L.`

o con

`gcc main.c -lmyMath -L. -o programa.exe`

Nota: Aunque el archivo `myMath.h` no se muestra en la compilación deberá estar en la ruta indicada en `main.c` al momento de compilar.