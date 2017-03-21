
#include<stdio.h>

int main(){
    
    int A[3][3];
    	
    for(int f=0;f<3;f++){
    		for(int c=0;c<3;c++){
    			printf("Digite un numero [%d][%d]:\n",f,c);
    			scanf("%d", &A[f][c]);
    		}
    	}
    	printf("\nMatriz Normal\n");
    	for(int f=0;f<3;f++){
    		for(int c=0;c<3;c++){
    			printf("%d",A[f][c]);
    		}
    		printf("\n");
    	}
    	printf("\nMatriz Transpuesta\n");
    	for(int f=0;f<3;f++){
    		for(int c=0;c<3;c++){
    			printf("%d",A[c][f]);
    		}
    		printf("\n");
    	}
    	return 0;
    }