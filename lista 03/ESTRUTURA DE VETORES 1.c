#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na
    tela os valores lidos.*/

    int vetor [6];

    for(int i = 0; i <6; i++){
        scanf("%d", &vetor [i]);
    }
    for(int i = 0; i <6; i++){
        printf("%d ", vetor [i]);
    }

    return 0;
}

