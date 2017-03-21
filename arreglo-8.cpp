
#include<stdio.h>

int main(){

	int arreglo1[5],arreglo2[5];
	
	for(int i=0;i<5;i++){
        printf("ingrese un numero\n");
		scanf("%d",&arreglo1[i]);
	}
	for(int i=0;i<5;i++){
		arreglo2[i]=arreglo1[i]*2;
	}
	printf("Mostrando numeros multiplicados por 2:\n");
	for(int i=0;i<5;i++){
		printf("%d\n",arreglo2);
	}
	return 0;
}
