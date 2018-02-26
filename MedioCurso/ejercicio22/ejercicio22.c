/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 2/16/2018
 */

#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main()
{
    int num_emp, ht, he, dpto;
    char nom_emp[255];
    double sueldo;
    bool printSalary = true;
    printf("Numero Empleado: ");
    scanf("%d", &num_emp);
    printf("Nombre Empleado: ");
    scanf("%s", nom_emp);
    scanf("");
    scanf("");

    printf("Horas Trabajadas: ");
    scanf("%d", &ht);
    printf("Departamento donde trabaja:\n1. Recursos Humanos\n2. Produccion\n3. Sistemas\n> ");
    scanf("%d", &dpto);

    he = ht > 40 ? ht - 40 : 0;

    switch(dpto)
    {
        case 1:
            sueldo = ((ht-he)*23.5) + (he*26.5);
            break;
        case 2:
            sueldo = ((ht-he)*25.2) + (he*50.4);
            break;
        case 3:
            sueldo = ((ht-he)*24.3) + (he*48.6);
            break;
        default:
            printf("[Error] El departamento no existe\n");
            printSalary = false;
            break;
    }
    if (printSalary) printf("El sueldo del empleado es $%.2f\n", sueldo);
    system("pause");
}