/*
*Nombre: tabla de multiplicar
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que imprime tablas de multiplicar.
*/ 
#include <stdio.h>
int main()
{
    int lNumero,multiplicacion,i;
   
   printf("Ingrese su numero, Por Favor\n");
    scanf("%d", &lNumero);
    i=1;
    
    do{
    multiplicacion=lNumero*i;
    printf("%d*%d=%d\n",lNumero,i,multiplicacion);
    i++;
    }while(i<=10);
return 0;
}