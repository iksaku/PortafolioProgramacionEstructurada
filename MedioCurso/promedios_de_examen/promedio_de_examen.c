/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 2/9/2018
 */

#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

bool validateName(char *name) {
    // TODO
}

bool validateGrade(float entry) {
    return entry >= 0 && entry <= 100;
}

float getAverage(float mc, float ord) {
    float prom;
    prom = (mc + ord) / 2;
    if (prom > 100) prom = 100;
    else if (prom < 0) prom = 0;
    return prom;
}

int main() {
    char name[255];
    long int matricula = 0;
    float mc = 0, ord = 0, prom = 0;
    bool tmp_isValid = true;

    printf("Nombre del Alumno: ");
    scanf("%s", name);
    scanf("");

    do {
        if (!tmp_isValid) printf("Matricula invalida, porfavor intentalo denuevo\n");

        printf("Matricula del Alumno: ");
        scanf("%ld", &matricula);

        tmp_isValid = matricula > 0;
    } while (!tmp_isValid);

    do {
        if (!tmp_isValid) printf("Calificacion invalida, porfavor intentalo denuevo\n");

        printf("Calificacion del Examen de Medio Curso: ");
        scanf("%f", &mc);

        tmp_isValid = validateGrade(mc);
    } while (!tmp_isValid);

    do {
        if (!tmp_isValid) printf("Calificacion invalida, porfavor intentalo denuevo\n");

        printf("Calificacion del Examen Ordinario: ");
        scanf("%f", &ord);

        tmp_isValid = validateGrade(ord);
    } while(!tmp_isValid);

    prom = getAverage(mc, ord);

    printf("El alumno '%s' esta %s con un promedio de '%f'\n", name, prom >= 70 ? "aprobado" : "reprobado", prom);

    system("pause");
    return 0;
}