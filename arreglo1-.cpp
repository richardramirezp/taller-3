#include <stdio.h>

int main(){
    
    int suma=0;
    int vector[100];
    int longitud;
    
    printf("ingrese la longitud\n");
    scanf("%d", &longitud);
    
    for(int i=0; i<longitud; i++){
        printf("ingrese valor en la posicion %d\n", i+1);
        scanf ("%d", &vector[i]);
    
    
    }
    for (int i=0; i<longitud; i++){
        suma = suma+vector[i];
     }
       printf("Resultado de la suma es %d\n", suma);
       
     return 0;
}