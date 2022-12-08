#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
    uantos valores pares foram armazenados nesse vetor*/


    int vetor [10];

    for(int i = 0; i <10; i++){
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i <10; i++){
        if(vetor[i] % 2 == 0){
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
