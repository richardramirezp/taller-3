
#include <stdio.h>

int main(){
    
    int multiplicacion=1,longitud,i;
    int arreglo [100];
    
    printf("por favor ingrese la longitud del vector\n");
    scanf("%d", &longitud);
    
    for(int i=0; i<longitud; i++){
        printf("ingrese posicion %d\n",i+1);
        scanf("%d", &arreglo[i]);
    }
    for(int i=0; i<longitud; i++){
        multiplicacion=multiplicacion*arreglo[i];
    }
    
    printf("resultado de la multiplicacion de los elementos es %d\n",multiplicacion);
    return 0;
}