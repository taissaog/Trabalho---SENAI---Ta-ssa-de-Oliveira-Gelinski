/*2. Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os
n�meros naturais de 0 at� N em ordem decrescente.*/
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
