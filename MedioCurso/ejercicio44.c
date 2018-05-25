/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 3/7/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x = 2, n;
    bool sw = false;

    printf("Cantidad de numeros a generar de la serie: ");
    scanf("%d", &n);

    if (n < 4)
    {
        printf("No se puede generar la serie\n");
        return 1;
    }

    printf("%d", x);
    for (int i = 1; i < n; ++i)
    {
        x = sw ? x+2 : x*3;
        sw = !sw;
        printf(", %d", x);
    }

    printf("\n");
    system("pause");
}