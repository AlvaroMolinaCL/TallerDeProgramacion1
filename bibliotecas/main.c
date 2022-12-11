/**
 * @file main.c
 * @author Alvaro Molina Jara (amolinaj@ing.ucsc.cl)
 * @brief Compilar con gcc main.c myMath.c -o Programa.exe
 * @version 0.1
 * @date 2021-11-16
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include "myMath.h"

int main(int argc, char const *argv[])
{
    float numero = -45.2;
    printf("absoluto de %.2f es %.2f", numero, absoluto(numero));
    return 0;
}