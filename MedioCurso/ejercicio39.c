/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 3/2/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alumnos, aprobados, reprobados;

    printf("Ingresa la cantidad de alumnos: ");
    scanf("%d", &alumnos);

    for (int i = 1, current; i <= alumnos; ++i)
    {
        printf("Ingresa la calificacion del alumno #%d: ", i);
        scanf("%d", &current);
        if (current < 70) ++reprobados;
        else ++aprobados;
    }

    printf("Procentaje de alumnos aprobados: %d%%\n", (aprobados*100) / alumnos);
    printf("Porcentaje de alumnos reprobados: %d%%\n", (reprobados * 100) / alumnos);
    system("pause");
}