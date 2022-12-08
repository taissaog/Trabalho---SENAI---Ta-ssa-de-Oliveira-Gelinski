#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o menor
    valor contido nessa matriz.*/

    int matriz[3][3];
    int menorValor=999999;

    for(int i = 0; i<3; i++){
        for(int x = 0; x < 3; x++){
            scanf("%d", & matriz[i][x]);
            if(matriz[i][x]< menorValor){
                menorValor = matriz[i][x];
            }
        }
    }
    printf("\nMenor valor: %d", menorValor);


    return 0;
}



