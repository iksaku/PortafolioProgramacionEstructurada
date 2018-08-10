/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>

void entrada();
void promedio();
void salida();
int i, n, num[50];
float suma, prom;

main(){
	entrada();
	promedio();
	salida();
	printf("\n");
	system("pause");
}

void entrada(){
	printf("Cantidad de datos: ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Ingresa el dato de la casilla %d: ", i+1);
		scanf("%d", &num[i]);
	}
}

void promedio(){
	suma=0.0;
	for(i=0; i<n; i++){
		suma += num[i];
	}
	prom = suma/n;
}

void salida(){
	system("cls");
	for(i=0; i<n; i++){
		printf("Elemento[%d]:%d\n", i, num[i]);
	}
	printf("La suma de los datos es %.2f\n", suma);
	printf("El promedio de los datos es %.2f", prom);
}
