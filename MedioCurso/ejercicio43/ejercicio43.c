/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 3/5/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long long int n1 = 1, n2 = 0, siguiente = 0;
    
    printf("Cantidad de numeros: ");
    scanf("%d", &n);
    
    if (n < 4)
    {
        printf("No se puede generar la serie");
        return 1;
    }
    
    printf("Serie de Fibonacci:\n");
    printf("%lld, %lld", n2, n1);
    for (int i = 3; i <= n; ++i) {
        siguiente = n1 + n2;
        n2 = n1;
        n1 = siguiente;
        printf(", %lld", siguiente);
    }

    printf("\n");
    system("pause");
}