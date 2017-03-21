/*
*Nombre: suma de numeros
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que imprime la suma de los numeros en seguidilla.
*/ 
#include <stdio.h>

int main(){
   
   int suma, numero, i;
   
   printf("ingrese el numero tope de la suma\n");
   scanf("%d", &numero);
   
   for(i=1; i<=numero; i++){
       
       suma+= i;
   }
   
   printf("La suma es: %d", suma);
   return 0;
}