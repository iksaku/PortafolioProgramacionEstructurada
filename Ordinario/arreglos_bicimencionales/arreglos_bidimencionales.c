/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>

void crear();
void imprimir();
int i, j, f, c, matriz[50][50];

main(){
	crear();
	imprimir();
	printf("\n");
	system("pause");
}

void crear(){
	do{
		printf("Cantidad de filas: ");
		scanf("%d", &f);
		printf("Cantidad de columnas: ");
		scanf("%d", &c);
	}while(f!=c);
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			printf("Ingresa el dato de la casilla [%d][%d]", i, j);
			scanf("%d", matriz[i][j]);
		}
	}
}

void imprimir(){
	system ("cls");
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			printf("Elemento [%d][%d]:%d\n", i, j, matriz[i][j]);
		}
	}
	system("pause");
}
