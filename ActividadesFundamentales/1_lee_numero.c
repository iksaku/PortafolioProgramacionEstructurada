/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 2/21/2018
 */

#include <stdio.h>
#include <windows.h>

int main()
{
    int number;
    printf("Ingresa un numero entero: ");
    int r = scanf("%d", &number);

    if (r != 1) {
        printf("El valor especificado no es un numero\n");
    } else if (number == 0) {
        printf("El numero 'Cero' es nulo\n");
    } else if (number < 0) {
        printf("El numero '%d' es negativo\n", number);
    } else {
        printf("El numero '%d' es positivo\n", number);
    }

    system("pause");
    return 0;
}