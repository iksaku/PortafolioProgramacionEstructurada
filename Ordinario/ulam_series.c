/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>

main(){
	int i;
	printf("Serie de Ullam.\n");
	printf("Digita un numero entero por favor :)  : ");
	scanf("%d", &i);
	printf("%d,", i);
	while (i!=1){
		if(i%2!=0){
			i=i*3+1;
			printf("%d,", i);
		}else{
			i/=2;
			printf("%d,", i);
		}
	}
	printf("\n");
	system("pause");
}
