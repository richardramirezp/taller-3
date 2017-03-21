/*
*NOMBRE: vocales
*AUTOR: luis sebastian urbano luna
*FECHA:
*DEFINICION:ingresa una vocal y el programa dira si es mayuscula, minuscula o no es una vocal
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char letra;
    
    printf("Introduzca una caracter:\n");
    scanf("%c", &letra);
    
    switch (letra){
        case 'a':
        printf ("Es una vocal minuscula\n");
        break;
        case 'e':
        printf ("Es una vocal  minuscula\n");
        break;
        case 'i':
        printf ("Es una vocal  minuscula\n");
        break;
        case 'o':
        printf ("Es una vocal  minuscula\n");
        break;
        case 'u':
        printf ("Es una vocal  minuscula\n");
        break;
        case 'A':
        printf ("Es una vocal  mayuscula\n");
        break;
        case 'E':
        printf ("Es una vocal  mayuscula\n");
        break;
        case 'I':
        printf ("Es una vocal  mayuscula\n");
        break;
        case 'O':
        printf ("Es una vocal  mayuscula\n");
        break;
        case 'U':
        printf ("Es una vocal  mayuscula\n");
        break;
        default:
        printf ("No es vocal\n");
        break;
    }
    return 0;
    
}