/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 */
 
#include <windows.h>
#include <stdio.h>
#include<time.h>

int n,i,aux,num[50],j,x;
void almacena();
void ordena();
void imprime();
void busqueda();

main()
{
almacena();
system("cls");
imprime();
printf("Arreglo Ordenado\n ");
ordena();
imprime();	
busqueda();
printf("\n");
system("pause");
}


void almacena ()
{
	printf("Cantidad de datos a guardar en el arreglo ->");
	scanf("%d", &n);
	for (i=0;i<n;i++){
		printf("Ingresa el dato al arreglo ->");
		scanf("%d", &num[i]);
	}
}

void ordena()
{
	for (j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(num[i]>num[i+1]){
				aux = num[i];
				num[i]=num[i+1];
				num[i+1]= aux;
			}
		}
		
	}
}

void imprime (){
	printf("\n");
	for (i=0;i<n;i++){
		printf("Numero[%d]: %d\n", i, num[i]);
	}	
}

void busqueda()
{

    // Obtenemos el número a buscar.
    printf("Que numero desea buscar ");
    scanf("%d", &n);
    j = 0;

    // recorremos el arreglo en búsqueda del elemento. Si se encuentra se imprime la posición
    for(i=0;i<n;i++)
    {
        if( num[i]==n )
        {
            printf("%d se encuentra en la posicion %d\n",n,i);
            j = 1;
        }
    }
    // Si no se encontró número al finalizar el ciclo no existe este número en el arreglo. 
    if(!j)
    {
        printf("No se encontro el numero\n");
    }
 
    // Debemos liberar el arreglo que habíamos reservado.
}

