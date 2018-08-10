/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>

void almacena();
void ordena();
void imprime();
int num [50], i, j, aux, n;

main(){
	almacena();
	system("cls");
	printf("Arreglo Desordenado");
	imprime();
	ordena();
	printf("Arreglo Ordenado");
	imprime();
	printf("\n");
	system("pause");
	
}

void almacena(){
	printf("Cantidad de datos a guardar en el arreglo: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Ingresa el dato en el arreglo: ");
		scanf("%d", &num[i]);
	}
}

void cambia(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void ordena(){
	for(j=0; j<n-1; j++){
		for(i=0; i<n-1; i++){
			if(num[i]>num[i+1]){
				cambia(&num[i], &num[i+1]);
			}
		}
	}
}

void imprime(){
	printf("\n");
	for(i=0; i<n; i++){
		printf("num[%d]:%d\n", i, num[i]);
	}
}
