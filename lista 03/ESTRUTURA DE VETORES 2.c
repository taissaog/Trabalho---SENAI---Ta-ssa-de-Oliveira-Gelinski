#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
    tela os valores lidos na ordem inversa.*/

    int vetor[6];

    for(int i = 0; i <6; i++){
        scanf("%d", & vetor[i]);
    }
    for(int i = 6; i > 0; i--){
        printf("%d ", vetor[i-1]);
    }

    return 0;
}
