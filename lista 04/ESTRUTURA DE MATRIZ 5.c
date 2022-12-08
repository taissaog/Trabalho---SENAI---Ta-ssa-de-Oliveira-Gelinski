#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
    valores negativos ela possui.*/



    int matriz[4][4];
    int contadorMatriz;

    for(int i = 0; i<4; i++){
        for(int x = 0; x<4; x++){
            scanf("%d", &contadorMatriz[i][x]);

            if(contadorMatriz[i][x] < 0){
                contadorMatriz++;
            }
        }
    }
    printf("\nQtde de numeros negativos: %d", contadorMatriz);

    return 0;
}
