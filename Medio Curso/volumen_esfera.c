/*
 * Hecho por Jorge Alejandro González Guerra
 * Matricula: 1889169
 * Carrera: Ingeniería en Tecnologías de Software
 * Fecha de Creación: 29/01/2018
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