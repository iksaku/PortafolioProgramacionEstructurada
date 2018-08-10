/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>

main(){
	int i, num, tabla;
	printf("Ingresa un número entero para generar su tabla: ");
	scanf("%d", &num);
	i=1; //Valor inicial de la variable
	while(i<=10){//Condicion
		tabla=num*i;
		printf("%dx%d=%d\n", num, i, tabla);
		i++;//Incremento de la variable
	}
	printf("\n");
	system("pause");
}
