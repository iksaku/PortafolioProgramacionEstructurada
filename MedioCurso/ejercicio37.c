/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 3/2/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n)
{
    for (int i = 2; i <= n/2; ++i) {
        if (n%i == 0) return false;
    }
    return true;
}

int main()
{
    int num;
    printf("Ingresa un numero entero: ");
    scanf("%d", &num);

    printf("'%d' %s un numero primo\n", num, isPrime(num) ? "es" : "no es");
    system("pause");
}