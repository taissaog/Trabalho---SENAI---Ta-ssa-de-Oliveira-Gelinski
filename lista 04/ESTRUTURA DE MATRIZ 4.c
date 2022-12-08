#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
    valores maiores do que 10 ela possui.*/


    int matriz[4][4];
    int contadorMatriz;

    for(int i = 0; i<4; i++){
        for(int x = 0; x<4; x++){
            scanf("%d", & matriz[i][x]);

            if(matriz[i][x] > 10){
                contadorMatriz++;
            }
        }
    }
    printf("\nQtde de numeros maiores de 10: %d", contadorMatriz);


    return 0;
}
