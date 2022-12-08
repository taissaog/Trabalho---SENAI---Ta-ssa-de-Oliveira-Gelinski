#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que receba um array de 10 elementos e retorne a sua soma.*/

void funcao(int *num[10]){
    int soma;
    for(int i = 0;i<10;i++){
        soma = soma + * num[i];
    }
}

int main(){

    int num[10] = {1,2,3,4,5,6,7,8,9,10};

    funcao(& num);

    return 0;
}
