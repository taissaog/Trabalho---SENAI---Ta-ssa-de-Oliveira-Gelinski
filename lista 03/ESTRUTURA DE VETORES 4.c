#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Faça um programa que leia um vetor de oito posições. Em seguida, leia também
    dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu
    programa deverá exibir a soma dos valores encontrados nas respectivas posições X
    e Y.*/


    int vetor [8];
    int num1 , num2;

    printf("Digite os numeros: ");
    for(int i = 0; i < 8; i++){
        scanf("%d", & vetor[i]);
    }
    printf("Digite uma posicao: ");
    scanf("%d", &num1);
    printf("Digite uma posicao: ");
    scanf("%d", &num2);


    printf("\nPosicao 1 %d\nPosicao 2 %d", vetor[num1], vetor[num2]);

    return 0;
}
