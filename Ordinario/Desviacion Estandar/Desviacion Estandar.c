/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */

#include <stdio.h>
#include <windows.h>
#include <math.h>

main(){
	int i, n, a[n], b[n];
	float x= 0.0, de=0.0, num[n], sum=0;
	printf("Inserte la cantidad de numeros a digitar: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Inserte el dato [%d]", i+1);
		scanf("%d", &a[i]);
		sum=a[i];
		num[i]=0.0;
				
	}
	x= (sum/n);
	sum = 0.0;
	for(i=0;i<n;i++){
		num[i] = (pow((a[i]-x), 2));
		sum=num[i];
	}
	de = sqrt(sum/(n-1));
	printf("\nLa desviacion estandar es de %f\n", de);
	system("pause");
}
