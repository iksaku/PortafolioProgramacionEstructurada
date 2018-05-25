/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 2/26/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cp = 0, ci = 0;
    printf("Cantidad de numeros: ");
    scanf("%d", &n);

    for (int i = 0, num = 0; i < n; ++i)
    {
        printf("Ingresa un numero entero: ");
        scanf("%d", &num);

        if (num % 2 == 0) ++cp;
        else ++ci;
    }

    printf("La cantidad de numeros pares es: %d\n", cp);
    printf("La cantidad de numeros impares es: %d\n", ci);
    system("pause");
}