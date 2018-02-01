/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 1/29/2018
 */

#include <stdio.h>
#include <windows.h>
#define pi 3.1416

int main() {
    float r, v;
    printf("Ingresa el radio de la esfera: ");
    scanf("%f", &r);
    v = ((4 / 3) * pi * (r * r * r));
    printf("\nEl volumen de la esfera es: %f\n", v);
    system("pause");
}