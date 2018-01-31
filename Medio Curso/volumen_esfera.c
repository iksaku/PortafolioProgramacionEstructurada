/*
 * Hecho por Jorge Alejandro González Guerra
 * Matricula: 1889169
 * Carrera: Ingeniería en Tecnologías de Software
 * Fecha de Creación: 29/01/2018
 */

#include <stdio.h>                                          // Se incluye una librería para entrada y salida de información
#include <windows.h>                                        // Librería para accesar a las herramientas de sistema de Windows
#define pi 3.1416                                           // Se define una constante de programa

int main() {                                                // Se define el método inicial del programa
    float r, v;                                             // Se definen las variables a utilizar en el programa
    printf("Ingresa el radio de la esfera: ");              // Se muestra una línea con texto en la consola
    scanf("%f", &r);                                        // Busca la introducción de una cadena en consola y la convierte a su tipo correspondiente
    v = ((4 / 3) * pi * (r * r * r));                       // Se realiza una operación aritmética para calcular el volumen de la esfera
    printf("\nEl volumen de la esfera es: %f\n", v);        // Se imprime el resultado de la operación
    system("pause");                                        // Se termina el programa esperando instrucción del usuario
}