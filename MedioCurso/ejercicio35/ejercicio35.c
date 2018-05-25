/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 2/28/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Ingresa un numero entero: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; ++i)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    system("pause");
}