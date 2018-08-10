/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>
void entrada();
void NumeroMayor();
void Salida();
int n, mayor =0, i, num [50];
main (){
	entrada ();
	NumeroMayor();
	Salida();
}

void entrada ()
{
	printf("Ingrese la cantidad de numeros que ingresara ->");
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		printf("Ingrese el numero de la casilla  [%d] ->", i);
		scanf("%d", &num[i]);				
	}
}

void NumeroMayor()
{
	for(i=0;i<n;i++)
	{
		if (mayor < num[i]){
			mayor = num[i];
		}		
	}
}

void Salida(){
	
	for (i=0; i<n; i++)
	{
		printf("EL numero en la casilla [%d] es -> %d\n", i, num[i] );		
	}
	printf("El numero mayor fue %d", mayor);

}
