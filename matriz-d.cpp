
#include<stdio.h>

int main(){
	int numeros[100][100],filas,columnas,f,c;
	printf("Digite el numero de filas:");
	scanf("%d",&filas);
	printf("Digite el numero de columnas:");
    scanf("%d",&columnas);

	for(int f=0;f<filas;f++){
		for(int c=0;c<columnas;c++){
			printf("Digite un numero [%d][%d]:\n",f,c);
			scanf("%d",&numeros[f][c]);
		}
	}
	if(filas==columnas){
            printf("es una matriz simetrica");
        }else{
            printf("No es una matriz simetrica");

    }
	return 0;
}
