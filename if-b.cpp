/*
*Nombre: Numero Mayor
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que lee tres numeros y encuentra el mayor.
*/
#include <stdio.h>

int main()
{
  int numero1,numero2,numero3;

  printf("Por favor escriba sus tres numeros\n");
  scanf("%d", &numero1);
  scanf("%d", &numero2);
  scanf("%d", &numero3);

  if(numero1>numero2 && numero1>numero3){
      printf("El numero %d es mayor\n",numero1);

  }else if(numero2>numero1 && numero2>numero3){
      printf("El numero %d es mayor \n",numero2);

  }else if(numero3>numero1 && numero3>numero2){
     printf("El numero %d es mayor\n",numero3);

  }else{
      printf("los tres numeros son iguales\n");
  }
return 0;
}
