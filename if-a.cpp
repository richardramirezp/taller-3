/*
*Nombre: Numero Mayor
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que lee dos numeros y encuentra el mayor.
*/
#include <stdio.h>

int main()
{
  int numero1,numero2;

  printf("Por favor escriba sus dos numeros\n");
  scanf("%d", &numero1);
  scanf("%d", &numero2);

  if(numero1>numero2){
      printf("El numero %d es mayor\n",numero1);
  }else if(numero2>numero1){
      printf("El numero %d es mayor \n",numero2);
  }else{
      printf("Los numeros son iguales\n");
  }
  return 0;
}
