/*
*Nombre: suma cuadrados
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que imprime la suma de los cuadrados de los 10 primeros enteros.
*/ 
#include <stdio.h>

int main(){
   
   int suma, i;
   
   for(i=1; i<=10; i++){
       
       suma+= i*i;
   }
   
   printf("La suma es: %d", suma);
   return 0;
}