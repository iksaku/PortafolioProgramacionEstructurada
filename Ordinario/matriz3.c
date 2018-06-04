/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>

void almacena();
void principal();
void secundaria();
void resultados();
int a[10][10], i, j, f, c, sumap, sumas;

main(){
	almacena();
	principal();
	secundaria();
	resultados();
	printf("\n");
	system("pause");
}

void almacena(){
	do{
		printf("Cantidad de filas: ");
		scanf("%d", &f);
		printf("Cantidad de columnas: ");
		scanf("%d", &c);
	}while(f!=c);
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			printf("Ingresa un dato: ");
			scanf("%d", &a[i][j]);
		}
	}
}

void principal(){
	sumap=0;
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			if(i==j){
				sumap+=a[i][j];
			}
		}
	}
}

void secundaria(){
	sumas=0;
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			if(i+j==f-1){
				sumas+=a[i][j];
			}
		}
	}
}

void resultados(){
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			printf("%d\t", a[i][j]);
		}
	}
	printf("\n");
		printf("La suma de la diagonal principal es: %d", sumap);
		printf("\nLa suma de la diagonal secundaria es: %d", sumas);
}
