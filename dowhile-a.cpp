/*
*Nombre: juego del 0
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa el cual tiene que descubrir el numero correcto en este caso el 0
*/ 
#include <stdio.h>

int main(){
   
   int suma, numero, i=0;

   printf("El juego consiste en dar numeros aleatorios hasta encontrar el correcto,Buena suerte\n\n");
   printf("ingrese el numero\n");
   do{
       scanf("%d", &numero);
       printf("Sigue Intentando!\n");
       printf("ingrese el numero\n");
       suma+=i+1;

       
   }while (numero!=0);
   
   printf("Total numeros: %d ", suma);
   return 0;
}