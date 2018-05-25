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
    int num, fac = 1;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; ++i)
    {
        fac = fac*i;
    }
    printf("El factorial de '%d' es: %d\n", num, fac);

    system("pause");
}