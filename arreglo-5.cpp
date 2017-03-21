
#include <stdio.h>

int main(){
    int arreglo[100];
    int longitud, mayor=0;
    
    printf("por favor ingrese la longitud del arreglo:\n");
    scanf("%d", &longitud);
   
    for(int i=0; i<longitud; i++){
        printf("ingrese posicion %d\n",i+1);
        scanf("%d", &arreglo[i]);

        if(arreglo[i] > mayor){
            mayor= arreglo[i];
        }
    }
    
    printf("\nEl mayor elemento del vector es: %d",mayor);
    return 0;
}