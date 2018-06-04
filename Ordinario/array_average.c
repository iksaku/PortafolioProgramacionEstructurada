/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>
void entrada();
void salida();
void promedio();
int i, n, num[50];
float suma, prom;
main ()
{
	entrada();
	promedio();
	salida();
	system("pause");
}

void entrada()
{
	printf("Ingresa la cantidad de numeros a leer ->");
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		printf("Ingresa el dato [%d] ->", i);
		scanf("%d", &num[i]);
	}
	
}
void promedio()
{
	suma = 0;
	for (i=0;i<n;i++)
	{
		suma  = suma + num[i];
	}
	prom = suma /n;
}
void salida()
{
	system("cls");
	for(i=0;i<n;i++)
	{
		printf("Elemento [%d]: %d\n ", i,num[i]);
	}
	printf("La suma de los numeros es: %.2f \n", suma);
	printf("El promedio de los numeros es: %.2f\n", prom);
}
