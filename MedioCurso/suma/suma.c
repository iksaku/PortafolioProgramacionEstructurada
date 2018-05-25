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
    int n, current, suma = 0;
    printf("Especifica la cantidad de numeros a sumar: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        printf("Ingresa un numero entero: ");
        scanf("%d", &current);
        suma += current;
    }

    printf("La suma de los numeros es: %d\n", suma);
    system("pause");
}