/*
 * Hecho por:
 * 1889169	Jorge Alejandro Gonzalez Guerra
 * 1889239  Juan Carlos Muñoz Bojorquez
 * 1794886	Juan Del Angel Torres
 * Fecha de Creacion: 5/24/2018
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Especifica el tamaño de la matriz (NxN): ");
    scanf("%d", &size);

    float matrix[size][size], upper_sum = 0, lower_sum = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("Ingrese el dato de la posicion [%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i < j) { // Upper
                upper_sum += matrix[i][j];
            } else if (i > j) { // Lower
                lower_sum += matrix[i][j];
            }
            printf("%6.2f", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Suma del Triangular Superior: %.2f\n", upper_sum);
    printf("Suma del Triangular Inferior: %.2f\n", lower_sum);
    system("pause");

    return 0;
}