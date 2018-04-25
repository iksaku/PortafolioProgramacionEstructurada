/*
 * Hecho por Jorge Alejandro Gonzalez Guerra
 * Matricula: 1889169
 * Carrera: Ingenieria en Tecnologias de Software
 * Fecha de Creacion: 1/29/2018
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 int n, num[50];
 float suma = 0, prom = 0;
 
 void entrada()
 {
     printf("Cantidad de datos: ");
     scanf("%d", &n);
     for(int i = 0; i < n; ++i) {
         printf("Ingresa el dato para la casilla #%d: ", i);
         scanf("%d", &num[i]);
     }
 }
 
 void promedio()
 {
     for(int i = 0; i < n; ++i) {
         suma = suma + num[i];
     }
     prom = suma/n;
 }
 
 void salida()
 {
     system("cls");
     for(int i = 0; i < n; ++i) {
         printf("Elemento #%d: %d\n", i, num[i]);
     }
     printf("La suma de los numeros es: %.2f\n", suma);
     printf("El promedio de los numeros es: %.2f\n", prom);
 }
 
 int main()
 {
     entrada();
     promedio();
     salida();
     system("pause");
 }