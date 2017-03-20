/*
*Nombre: Suma del  1 al 100
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que suma los numeros del 1 al 100.
*/ 
#include <stdio.h>


int main()
{
  int i=1,suma;
  
  while (i<=100){
      suma=suma+i;
      i++;
  }
  printf("La suma de los numeros es: %d\n",suma);
return 0;
}