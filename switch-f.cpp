/*
*NOMBRE: menu 
*AUTOR: Richard Ramirez
*FECHA: 15/03/2017
*Resumen:programa que simula un menu matematico
*/

#include<stdio.h>
#include<math.h>

int main(){
    int opc;
    int numero, cubo;
    
    printf("Hola por favor escoja que desea hacer\n\n");
    printf("menu de opciones\n ");
    printf("\n1.-Cubo de un numero\n");
    printf("\n2.-Saber si un numero es par o impar\n");
    printf("\n3.-Salir\n");
    scanf("%d", &opc);
    
    switch(opc){
        case 1:
            
            printf("Ingrese un numero al que se le va a sacar el cubo \n");
            scanf( "%d", &numero );
            cubo = pow (numero,3);
            printf("el cubo del numero es: %d\n",cubo);
            break;
        
        case 2:
            
            printf( "Introduzca un numero para saber si es par o impar\n");
            scanf( "%d", &numero);
                if (numero%2== 0){
                        printf( "el numero es par" );
                    }else{
                        printf( "el numero es impar" );
                        
                    }
            
            default:
            printf("Mala ejecucion");
        
        
    }
    return 0;
}