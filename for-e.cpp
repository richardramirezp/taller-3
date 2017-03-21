/*
*NOMBRE:Suma hasta N
*AUTOR:Richard Ramirez
*FECHA:15/03/2017
*RESUMEN:se suman los numeros hasta n que es el valor que da el usuario.
*/

#include<stdio.h>
int main(){
int suma=0;
int n,i,total,resultado;
printf("Ingrese numero hasta el que desea sumar\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
suma=suma+i;
resultado=suma+i;
total=suma-resultado;

}
printf("la suma es: %d\n",total);
return 0;
}