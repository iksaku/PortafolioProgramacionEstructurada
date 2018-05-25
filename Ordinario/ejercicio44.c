/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 4/16/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 1, x = 0, y = 1;
    printf("Cantidad de datos a generar de la serie: ");
    scanf("%d", &n);
    printf("Serie de Fibonacci: %d, %d", x, y);
    while (i <= n-2)
    {
        int tmp = x+y;
        printf(", %d", tmp);
        x = y;
        y = tmp;
        ++i;
    }
    printf("\n");
    system("pause");
}