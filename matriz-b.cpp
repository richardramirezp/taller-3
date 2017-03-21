
#include<stdio.h>

int main(){
	
	int A[2][2];
	int B[2][2];
	int f,c;
	for(int f=0;f<2;f++){
		for(int c=0;c<2;c++){
            
            printf("ingrese valor posicion [%d][%d]\n",f,c);
            scanf("%d", &A[f][c]);
			B[f][c]=A[f][c];
            }
            
        for(int f=0;f<2;f++){
            for(int c=0;c<2;c++){
                printf("posicion [%d][%d]=%d\n ", f, c,B[f][c]);
            }
		}
		printf("\n");
	}
	return 0;
}