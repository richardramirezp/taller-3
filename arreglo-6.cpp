
#include<stdio.h>

int main(){
	int arreglo[] = {1,2,3,4,10};
	int suma=0,mayor=0;
	
	for(int i=0; i<5; i++){
		suma += arreglo[i];
		if(arreglo[i]>mayor){
			mayor = arreglo[i];
		}
	}
	
	if(mayor == suma-mayor){
		printf("\nEl numero %d es igual a la suma de los demas vectores\n",mayor);
            }else{
                printf("No existe ningun numero que sea igual a la suma de los demas vectores");
                }
	return 0;
}