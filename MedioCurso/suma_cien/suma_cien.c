/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 2/21/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma = 0;
    for (int i = 1; i <= 100; ++i) suma += i;
    printf("La suma de los primeros 100 numeros naturales es: %d\n", suma);
    system("pause");
}