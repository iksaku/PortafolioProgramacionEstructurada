/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 5/11/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swapValues(float *x, float *y)
{
    float tmp = *x;
    *x = *y;
    *y = tmp;
}

void sort(float a[], int size)
{
    bool hasSwaped;
    do {
        hasSwaped = false;
        for(int i = 0; i < size-1; ++i)
        {
            if (a[i] > a[i+1]) {
                swapValues(&a[i], &a[i+1]);
                hasSwaped = true;
            }
        }
    } while (hasSwaped);
}

void main()
{
    int n;
    printf("Ingrese la cantidad de numeros a utilizar: ");
    scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n; ++i)
    {
        printf("Ingrese el valor #%d: ", i + 1);
        scanf("%f", &a[i]);
    }
    sort(a, n);
    printf("Lista ordenada:");
    for (int i = 0; i < n; ++i)
    {
        printf("%.2f%s", a[i], i == n-1 ? "\n" : ", ");
    }
    system("pause");
}