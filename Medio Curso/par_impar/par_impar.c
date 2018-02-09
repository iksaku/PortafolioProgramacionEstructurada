/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 2/7/2018
 */

#include <stdio.h>
#include <windows.h>

int main() {
    int n;
    printf("Ingresa un numero entero: ");
    scanf("%d", &n);
    printf("El numero '%d' es %s\n", n, n % 2 == 0 ? "par" : "impar");
    system("pause");
}