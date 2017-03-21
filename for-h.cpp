/*
*NOMBRE:Descomposicion factorial
*AUTOR:Ricahrd ramirez
*FECHA:
*RESUMEN:ingresa un numero y imprime su descomposicion en factores primos.
*/

#include <stdio.h>

int main(){
    int numero,i;
    printf("ingrese un numero\n");
    scanf("%d",&numero);
    
    for(i=2;i<=numero;i++){
        while(numero%i==0){
        printf("%d x",i);
        numero=numero/i;
        }
    }
    printf("%d",numero);
    return 0;
}
