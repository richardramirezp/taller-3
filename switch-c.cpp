/*
*Nombre: suma del dos elevado
*Autor: Richard Ramirez
*Fecha: 01/03/2017
*Resumen: Programa que imprime la suma de las potencias de dos.
*/ 
#include <stdio.h>


int main(){
   
   int numero;
   
   printf("Ingrese un numero entre 1-12\n");
   scanf("%d", &numero);
   
   switch(numero){
       
       case 1:
       
            printf("Enero");
      
            break;
        case 2:
            
            printf("Febrero");
            break;
        case 3:
            
            printf("Marzo");
            break;
        case 4:
            
            printf("Abril");
            break;
        case 5:
            
            printf("Mayo");
            break;
        case 6:
            printf("Junio");
            
            break;
        case 7:
            
            printf("Julio");
            break;
        case 8:
            
            printf("Agosto");
            break;
        case 9:
            
            printf("Septiembre");
            break;
        case 10:
            
            printf("Octubre");
            break;  
        case 11:
            printf("Noviembre");
            
            break;
        case 12:
            
            printf("Diciembre");
            break;

        default:
        printf("Esnumero no valido");
        break;
   }
   return 0;
   }