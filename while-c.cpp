/*
*Nombre: Numero del 1 al 50
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que imprime los numeros pares del 1 al 50.
*/ 
#include <stdio.h>
#include <math.h>

int main()
{
  int i=1, suma=0;
  
  while (i<=50){
      if(i%2==0){
          suma=suma+i;
         }
         i++;
  }
   printf("la suma de los pares es: %d\n",suma);
  return 0;
}