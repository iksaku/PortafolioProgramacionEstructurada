/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>

main(){
	int i, n, x, y, z;
	printf("Cantidad de valores: ");
	scanf("%d", &n);
	x=0;
	y=1;
	printf("Serie de Fibonacci: ");
	printf("%d, %d,", x, y);
	i=3; //Valor inicial de la variable
	while(i<=n){//condicion
		z=x+y;
		printf("%d,", z);
		x=y;
		y=z;
		i++;//incremento de la variable
	}
	printf("\n");
	system("pause");
}
