/*
*Nombre: juego
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que la suma de numeros mayores que cero.
*/ 
#include <stdio.h>

int main(){
   
   int suma, numero, i;

   printf("El juego consiste en dar numeros aleatorios hasta encontrar el correcto,Buena suerte\n\n");
   printf("ingrese el numero\n");
   do{
       scanf("%d", &numero);
       if(numero>=20 && numero<=30){
           
           suma+=numero;
           break;
       }else{
            suma+=numero;
            printf("Sigue Intentando!\n");
            printf("ingrese el numero\n");
       }
       
       
   }while (numero!=0);
   
   printf("Total suma numeros: %d ", suma);
   return 0;
}