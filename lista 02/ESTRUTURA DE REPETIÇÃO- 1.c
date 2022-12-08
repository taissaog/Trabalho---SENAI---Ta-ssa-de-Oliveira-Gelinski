#include <stdio.h>
#include <stdlib.h>

/*1. Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.*/
int main(){

    int x = 0,num = 0;


    printf("Informe um valor: ");
    scanf("%d", &num);

    for(x = 0 ; x != num ; x++){

        printf(",%d ",x);
    }

    return 0;
}
