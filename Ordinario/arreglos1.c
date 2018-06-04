/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>
void entrada ();
void salida();
int i,n;
int a[50];
main ()
{
	entrada ();
	salida();
	printf("\n");
	system ("pause");
	
}
void entrada ()
{
	printf("Cantidad de datos: ");
	scanf ("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("Ingresa el dato ->");
		scanf ("%d", &a[i]);
	}
}
void salida ()
{
	system("cls");
	for (i=0; i<n;i++)
	{
		printf ("%d\n", a[i]);
	}
}
