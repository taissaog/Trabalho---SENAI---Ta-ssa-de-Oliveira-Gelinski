#include <stdio.h>
#include <stdlib.h>

/*1. Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os
n�meros naturais de 0 at� N em ordem crescente.*/
int main(){

    int x = 0,num = 0;


    printf("Informe um valor: ");
    scanf("%d", &num);

    for(x = 0 ; x != num ; x++){

        printf(",%d ",x);
    }

    return 0;
}
