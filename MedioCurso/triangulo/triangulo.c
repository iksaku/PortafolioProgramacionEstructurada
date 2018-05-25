/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 2/5/2018
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

enum {TRIANGLE_RIGHT, TRIANGLE_ISOSCELES, TRIANGLE_EQUILATERAL, TRIANGLE_SCALENE};

double getHeight(int triangleType, double a, double b, double c, bool heightSpecified) {
    double s;
    if (heightSpecified) return a;
    switch (triangleType) {
        case TRIANGLE_RIGHT:
            return a;
        case TRIANGLE_ISOSCELES:
            return sqrt(pow(a, 2) - (pow(b, 2)/4));
        case TRIANGLE_EQUILATERAL:
            return (sqrt(3)*b)/2;
        case TRIANGLE_SCALENE:
            s = (a+b+c)/2;
            return (2/b)*sqrt(s*(s-a)*(s-b)*(s-c));
        default:
            return 0;
    }
}

double getArea(double b, double h) {
    return (b*h)/2;
}

double getHypotenuse(int triangleType, double a, double b, double c, bool heightSpecified) {
    switch (triangleType) {
        case TRIANGLE_RIGHT:
            return sqrt(pow(a,2) + pow(b, 2));
        case TRIANGLE_ISOSCELES:
            if (!heightSpecified && a > b) {
                return a;
            }
            return sqrt(pow(a, 2) + pow(b/2, 2));
        case TRIANGLE_EQUILATERAL:
            return b;
        case TRIANGLE_SCALENE:
            if (heightSpecified || (b > a && b > c)) return b;
            else if (a > b && a > c) return a;
            else return c;
        default:
            return 0;
    }
}

int main() {
    int triangleType;
    double h, a = 0, b = 0, c = 0;
    char selection, sub_s;
    bool heightSpecified = false;

    printf("Selecciona el tipo de triangulo a utilizar:\n\t(r) Rectangulo*\n\t(i) Isoceles\n\t(e) Equilatero\n\t(s) Escaleno\n\t> ");
    scanf("%c", &selection);
    switch(tolower(selection)) {
        case 'r':
        default:
            if (tolower(selection) != 'r') printf("Opcion no disponible en lista... Asuminedo 'Triangulo Rectangulo'...\n");

            triangleType = TRIANGLE_RIGHT;
            heightSpecified = true;

            printf("Especifica la base: ");
            scanf("%lf", &b);

            printf("Especifica la altura: ");
            scanf("%lf", &a);
            break;
        case 'i':
            triangleType = TRIANGLE_ISOSCELES;

            printf("Especifica la base: ");
            scanf("%lf", &b);
            scanf("%c", &sub_s);

            printf("¿Deseas especificar la medida lateral o la altura?\n\t(L) Medida Lateral*\n\t(a) Altura\n\t> ");
            scanf("%c", &sub_s);

            if (tolower(sub_s) == 'a') {
                heightSpecified = true;

                printf("Especifica la altura: ");
            } else {
                if (tolower(sub_s) != 'l') printf("Opcion no disponible en la lista... Asumiendo 'Medida Lateral'...");
                printf("Especifica la medida lateral: ");
            }
            scanf("%c", &sub_s);
            scanf("%lf", &a);
            break;
        case 'e':
            triangleType = TRIANGLE_EQUILATERAL;

            printf("Especifica la medida de los laterales: ");
            scanf("%lf", &b);
            break;
        case 's':
            triangleType = TRIANGLE_SCALENE;

            printf("Especifica la base: ");
            scanf("%lf", &b);
            scanf("%c", &sub_s);

            printf("¿Deseas especificar las medidas laterales o la altura?\n\t(L) Medidas Laterales*\n\t(a) Altura\n\t> ");
            scanf("%c", &sub_s);

            if (tolower(sub_s) == 'a') {
                heightSpecified = true;

                printf("Especifica la altura: ");
                scanf("%c", &sub_s);
                scanf("%lf", &a);
            } else {
                if (tolower(sub_s) != 'l') printf("Opcion no disponible en la lista... Asumiendo 'Medidas Laterales'...");

                printf("Especifica la medida lateral derecha: ");
                scanf("%c", &sub_s);
                scanf("%lf", &a);

                printf("Especifica la medida lateral izquierda: ");
                scanf("%c", &sub_s);
                scanf("%lf", &c);
            }
            break;
    }

    //printf("A: %lf, B: %lf, C: %lf\n", a, b, c); // Debug things...

    h = getHeight(triangleType, a, b, c, heightSpecified);
    printf("Area: %lf\n", getArea(b, h));

    printf("Hipotenusa: %lf\n", getHypotenuse(triangleType, a, b, c, heightSpecified));

    system("pause");
};