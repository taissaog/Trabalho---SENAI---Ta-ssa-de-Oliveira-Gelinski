#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Fa�a um programa que leia um vetor de oito posi��es. Em seguida, leia tamb�m
    dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. Seu
    programa dever� exibir a soma dos valores encontrados nas respectivas posi��es X
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
