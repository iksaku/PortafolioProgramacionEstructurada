/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 3/9/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Ingresa la cantidad de numeros a generar: ");
    scanf("%d", &n);

    if (n < 4)
    {
        printf("No se puede generar la serie con tan pocos numeros");
        return 1;
    }

    for (int i = 1; i <= n; ++i)
    {
        if (i > 1) printf(", ");
        printf("%d, %d", i, i*-1);
    }
    printf("\n");
    system("pause");
}