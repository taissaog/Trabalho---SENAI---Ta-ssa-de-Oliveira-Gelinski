#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Faça um programa que preencha um vetor com 10 números reais. Em seguida,
    calcule e mostre na tela a quantidade de números negativos e a soma dos números
    positivos desse vetor.*/


    int vetor [10];
    int numNegativo, numPositivo = 0;

    for(int i = 0; i <10; i++){
        scanf("%d", & vetor[i]);
        if(vetor[i] < 0){
            numNegativo++;
        }
        if(vet[i] > 0){
            numPositivo = numPositivopositivo + vetor[i];
        }
    }
    printf("\nA quantidade de numeros negativos e: %d\nA soma dos numeros positivos e: %d", numNegativo, numPositivo);

    return 0;
}
