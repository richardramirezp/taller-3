/*
*NOMBRE: Simulador de una caja
*AUTOR: Richard Ramirez
*FECHA:
*Resumen: simulador de caja
*/
#include<stdio.h>
int main(){
    
    int acumulado=1000000;
    int ingreso ,estrajo, total, opc;
    
    printf("Bienvenido\n\n");
    printf("Usted tiene %d en efectivo\n\n", acumulado);
    printf("Que quiere hacer\n");
    printf("1.-Ingresar dinero a la caja\n");
    printf("2.-Retro de efectivo\n");
    printf("3.-Salir\n");
    scanf("%d", &opc);
    
    switch(opc){
        
        case 1:
    
            printf("cuanto desea ingresar a la caja\n");
            scanf("%d", &ingreso);
            total= 1000000+ingreso;
            printf("el saldo total es: %d\n",total);
            break;
            
        case 2:
        
            printf("Retiro en efectivo\n");
            printf("Cuanto deseas retirar:");
            total= 1000000-estrajo;
            printf("el saldo total es: %d\n",total);
            break;
            

 
        default:
            printf("opcion erronea");
    }
    return 0;
}
