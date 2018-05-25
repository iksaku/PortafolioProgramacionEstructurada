/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 1/29/2018
 */

#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416

int main() {
    double volume;
    float radius;
    printf("Ingresa el radio de la esfera: ");
    scanf("%f", &radius);
    volume = (4.0 / 3.0) * pi * (radius * radius * radius);
    printf("\nEl volumen de la esfera es: %f\n", volume);
    system("pause");
}