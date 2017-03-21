
#include <stdio.h>

int main(){
    
    char arreglo1[]={'R','i','c','h','a','r','d'};
    char arreglo2[]={'R','a','m','i','r','e','z'};
    char cadena[100];
    int i=0;
    
    for(int i=0; i<9; i++){
        cadena[i]=cadena[i];
    }
    
    for (i=0; i<13; i++){
        cadena[i]= arreglo1[i] + arreglo2[i];
    }
   
    for (i=0; i<13; i++){
         printf(" %c", cadena[i]);
    }
   
    return 0;
}