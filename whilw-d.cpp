/*
*Nombre: Numero del 1 al 50
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que imprime la suma de los numeros primios del 1 al 50..
*/ 
#include <stdio.h>
#include <math.h>

int main()
{
  int i=1, suma;
  
  while (i<=50){
      if(i%2==0){
         }else{
             suma=suma+i;
         }
         i++;
      

  }
  printf("la suma de los impares es: %d\n",suma);
  return 0;
}