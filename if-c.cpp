/*
*Nombre: Par o Impar
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que lee un numero y determina si es Par o impar.
*/
#include <stdio.h>
#include <math.h>

int main()
{
  int numero1;

  printf("Por favor escriba su numero\n");
  scanf("%d", &numero1);

  if(numero1%2==0){
      printf("El numero %d es Par\n",numero1);

  }else{
      printf("El numero %d es Impar\n",numero1);
  }
return 0;
}
