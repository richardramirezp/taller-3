/*
*Nombre: fibonacci
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que imprime los numeros fibonnaci.
*/ 

#include <stdio.h>

int main(){
    
    int n,total;
    int fibonnaci=2;
    int a=1;
    
    printf("\n Introduzca un entero\n");
    scanf("%d",&n);
   

   
    while(fibonnaci<=n){
        
        total=fibonnaci+a;
        a=fibonnaci;
        fibonnaci=total;
        
    }
    if(n==0) total=0;
    if(n==1 || n==2) total=1;
    
    printf("Fibonacci(%d) = %d ", n, total);
    return 0;

}