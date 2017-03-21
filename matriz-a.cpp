
#include <stdio.h>

int main(){
    
    int columnas,filas,f,c;
    int arreglo [filas][columnas];
    
    printf("Ingrese El Numero De Filas y Columnas\n");
    scanf("%d", &filas);
    scanf("%d", &columnas);
    
    for(f=0; f<filas; f++){
            for(c=0; c<columnas; c++){
                printf("ingrese valor posicion [%d][%d]\n",f,c);
                scanf("%d",&arreglo[f][c]);
                    }
                }
                for(f=0; f<filas; f++){
                    for(c=0; c<columnas; c++){
                        printf("posicion [%d][%d]= %d ", f, c,arreglo[f][c]);
            }
            printf("\n");
        }
        return 0;
}
