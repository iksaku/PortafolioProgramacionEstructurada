/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 5/11/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int n;
    float sum = 0, prom, desv;
    printf("Ingrese la cantidad de numeros a utilizar: ");
    scanf("%d", &n);
    float num[n];
    for (int i = 0; i < n; ++i)
    {
        printf("Ingrese el valor #%d: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    prom = sum / n;

    /**
     * Parte 1: Sumatoria
     * Reciclamos la variable "sum"
     */
    sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += powf(num[i] - prom, 2);
    }

    /**
     * Parte 2: Raiz
     */
    desv = sqrtf(sum / (n - 1));
    printf("\nDesviacion Estandar: %f\n", desv);
    system("pause");
}