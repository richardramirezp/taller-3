/*
*Nombre: Factorial
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que imprime el factorial de un numero.
*/ 
#include <stdio.h>
#include <math.h>

int main()
{
  int i,factorial,n;
  
  printf("Por favor, ingrese su numero\n");
  scanf("%d", &n);
  i=1;
  factorial=1;
  while (i<=n){
      factorial=factorial*i;
      i++;
  } printf("!%d=%d",n,factorial);
  return 0;
}