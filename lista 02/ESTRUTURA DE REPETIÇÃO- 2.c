/*2. Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 0,num = 0;


    printf("Informe um valor: ");
    scanf("%d", &num);

    for(x = 0 ; x != num ; num--){

        printf(",%d ",x);
    }

    return 0;
}
