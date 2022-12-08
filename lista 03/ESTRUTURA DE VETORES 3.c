#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
    mostre todos os valores lidos juntamente com a média dos valores.*/

    int vetor [5];
    int w,z, media;

    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        w = w + vetor[i];
    }
    media = w / 5;
    for(int i = 0; i <5; i++){
        printf("%d ", vetor[i]);
    }
    printf("\nMedia %d", media);



    return 0;
}
