#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Fa�a um programa que receba do usu�rio um vetor X com 10 posi��es. Em seguida
    ser impressos o maior e o menor elemento desse vetor*/


    int vetor [10];
    int maiorElemento = 0, menorElemento = 9999999;

    for(int i = 0; i <10; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] > maiorElemento){
            maiorElemento = vetor[i];
        }
        if(vetor[i] < menorElemento){
            menorElemento = vetor[i];
        }
    }
    printf("\nMaior elemento: %d\nMenor elemento: %d", maior, menor);


    return 0;
}
