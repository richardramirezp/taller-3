/*
*Nombre: suma del dos elevado
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que imprime la suma de las potencias de dos.
*/ 
#include <stdio.h>
#include <math.h>

int main(){
   
   int suma, numero, i;
   
   printf("ingrese el numero tope de la suma\n");
   scanf("%d", &numero);
   
   for(i=1; i<=numero; i++){
       
       suma+= pow (2,i);
   }
   
   printf("La suma es: %d", suma);
   return 0;
}