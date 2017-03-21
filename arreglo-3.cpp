
#include <stdio.h>

int main(){
    
    int numeros[100];
    int longitud;
    
    printf("por favor ingrese la longitud del arreglo:\n");
    scanf("%d", &longitud);
    
    for(int i=0; i<longitud; i++){
        printf("ingrese posicion %d\n",i+1);
        scanf("%d",&numeros[i]);
    }
    for(int i=0; i<longitud; i++){
    printf("\nla posicion %d = %d\n",i,numeros[i]);
    }
    
    return 0;
}