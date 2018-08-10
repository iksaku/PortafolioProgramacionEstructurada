/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>

void almacena();
void promedio();
void resultados();
int f, c;

main(){
	almacena();
	promedio();
	resultados();
}

void almacena(){
	do{
		printf("Ingresa el número de filas: ");
		scanf("%d", &f);
		printf("Ingresa el numero de columnas: ");
		while(f!=c)
	}
	for(i=0; i<f; i++){
		for(j=0; j<c; j++){
			printf("Ingresa el valor de la matriz [%d][%d]: ", f, c);
		}
	}
}
